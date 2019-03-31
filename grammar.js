module.exports = grammar({
  name: "purescript",

  rules: {
    source_file: $ => seq($.module_decl, optional($.body)),

    module_decl: $ =>
      seq("module", $.module_name, optional($.exports), "where"),

    module_name: $ => $._types_modules_regex,

    _types_modules_regex: $ => /[A-Z][0-9A-Za-z_]*(\.[A-Z][0-9A-Za-z_]*)*/,

    identifier: $ => $._fn_name_regex,

    _fn_name_regex: $ => /[a-z_][0-9A-Za-z_']*/,

    exports: $ => seq("(", $.export, ")"),

    export: $ => $.identifier,

    body: $ => seq(choice($.type_sig, $.fn, $.import)),

    import: $ => seq("import", $.module_name),

    // needed: a type sig is over when the indentation is over e.g.
    // f :: Lol -> Cat -> Rockets
    // f = ?dsfsff
    // g :: What
    //   -> Shit
    //   -> Whatever
    // g = ?sdf
    // i dont remember if the ps parser allows non indented items but those are fucked
    // and they don't deserve to be parsed here.
    type_sig: $ => seq($.identifier, "::", $.type_body),

    type_body: $ =>
      seq(
        optional($.quantification),
        sep1(
          $.type_param,
          choice($.constraint_arrow, $.fn_arrow, $.nat_trans_arrow)
        )
      ),

    type_param: $ => repeat1(choice($._types_modules_regex, $._fn_name_regex)),

    constraint_arrow: $ => "=>",
    fn_arrow: $ => "->",
    nat_trans_arrow: $ => "~>",

    quantification: $ => seq("forall", repeat1($.quantification_param), "."),
    quantification_param: $ => $._fn_name_regex,

    fn: $ => seq($.identifier, optional($.params), "=", $.fn_body),

    params: $ => repeat1($.param),

    param: $ => $.identifier,

    // of course, fn body must become some kind of sequence of the following
    // unary: -1
    // binary: f <$> xs
    // app: expr expr
    fn_body: $ => '"hi"'
  }
});

function sep(rule, separator) {
  return optional(sep1(rule, separator));
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
  return sep1(rule, ",");
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
