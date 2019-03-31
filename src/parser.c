#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 45
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  sym__types_modules_regex = 3,
  sym__fn_name_regex = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_import = 7,
  anon_sym_COLON_COLON = 8,
  sym_constraint_arrow = 9,
  sym_fn_arrow = 10,
  sym_nat_trans_arrow = 11,
  anon_sym_forall = 12,
  anon_sym_DOT = 13,
  anon_sym_EQ = 14,
  sym_fn_body = 15,
  sym__newline = 16,
  sym__indent = 17,
  sym__dedent = 18,
  sym__string_start = 19,
  sym__string_content = 20,
  sym__string_end = 21,
  sym_source_file = 22,
  sym_module_decl = 23,
  sym_module_name = 24,
  sym_identifier = 25,
  sym_exports = 26,
  sym_export = 27,
  sym_body = 28,
  sym_import = 29,
  sym_type_sig = 30,
  sym_type_body = 31,
  sym_type_param = 32,
  sym_quantification = 33,
  sym_quantification_param = 34,
  sym_fn = 35,
  sym_params = 36,
  sym_param = 37,
  aux_sym_type_body_repeat1 = 38,
  aux_sym_type_param_repeat1 = 39,
  aux_sym_quantification_repeat1 = 40,
  aux_sym_params_repeat1 = 41,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [sym__types_modules_regex] = "_types_modules_regex",
  [sym__fn_name_regex] = "_fn_name_regex",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_import] = "import",
  [anon_sym_COLON_COLON] = "::",
  [sym_constraint_arrow] = "constraint_arrow",
  [sym_fn_arrow] = "fn_arrow",
  [sym_nat_trans_arrow] = "nat_trans_arrow",
  [anon_sym_forall] = "forall",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [sym_fn_body] = "fn_body",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__string_start] = "_string_start",
  [sym__string_content] = "_string_content",
  [sym__string_end] = "_string_end",
  [sym_source_file] = "source_file",
  [sym_module_decl] = "module_decl",
  [sym_module_name] = "module_name",
  [sym_identifier] = "identifier",
  [sym_exports] = "exports",
  [sym_export] = "export",
  [sym_body] = "body",
  [sym_import] = "import",
  [sym_type_sig] = "type_sig",
  [sym_type_body] = "type_body",
  [sym_type_param] = "type_param",
  [sym_quantification] = "quantification",
  [sym_quantification_param] = "quantification_param",
  [sym_fn] = "fn",
  [sym_params] = "params",
  [sym_param] = "param",
  [aux_sym_type_body_repeat1] = "type_body_repeat1",
  [aux_sym_type_param_repeat1] = "type_param_repeat1",
  [aux_sym_quantification_repeat1] = "quantification_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [sym__types_modules_regex] = {
    .visible = false,
    .named = true,
  },
  [sym__fn_name_regex] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_constraint_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_nat_trans_arrow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_fn_body] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__string_start] = {
    .visible = false,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__string_end] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_exports] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_type_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_type_body] = {
    .visible = true,
    .named = true,
  },
  [sym_type_param] = {
    .visible = true,
    .named = true,
  },
  [sym_quantification] = {
    .visible = true,
    .named = true,
  },
  [sym_quantification_param] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_type_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_param_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quantification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == 'f')
        ADVANCE(9);
      if (lookahead == 'i')
        ADVANCE(10);
      if (lookahead == 'm')
        ADVANCE(11);
      if (lookahead == 'w')
        ADVANCE(12);
      if (lookahead == '~')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(14);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 'h')
        ADVANCE(15);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      if (lookahead == '>')
        ADVANCE(16);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 7:
      if (lookahead == ':')
        ADVANCE(17);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'o')
        ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'm')
        ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'o')
        ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'h')
        ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == '>')
        ADVANCE(23);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__types_modules_regex);
      if (lookahead == '.')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'i')
        ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_fn_arrow);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_constraint_arrow);
      END_STATE();
    case 19:
      if (lookahead == 'r')
        ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'p')
        ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'd')
        ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'e')
        ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_nat_trans_arrow);
      END_STATE();
    case 24:
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == '"')
        ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'a')
        ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'o')
        ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'u')
        ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'r')
        ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_fn_body);
      END_STATE();
    case 31:
      if (lookahead == 'l')
        ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'r')
        ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'l')
        ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'e')
        ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'l')
        ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 't')
        ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 42:
      if (lookahead == 'm')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '=')
        ADVANCE(44);
      if (lookahead == '~')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(14);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == 'm')
        ADVANCE(48);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == 'p')
        ADVANCE(49);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == 'o')
        ADVANCE(50);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == 'r')
        ADVANCE(51);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == 't')
        ADVANCE(52);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == 'w')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      END_STATE();
    case 54:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == 'f')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(14);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == 'o')
        ADVANCE(59);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == 'r')
        ADVANCE(60);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == 'l')
        ADVANCE(62);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__fn_name_regex);
      if (lookahead == 'l')
        ADVANCE(63);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_forall);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 64:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(64);
      END_STATE();
    case 65:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 64},
  [18] = {.lex_state = 56},
  [19] = {.lex_state = 56},
  [20] = {.lex_state = 56},
  [21] = {.lex_state = 65},
  [22] = {.lex_state = 65},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 64},
  [31] = {.lex_state = 56},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 66},
  [34] = {.lex_state = 66},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 66},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__string_start = 3,
  ts_external_token__string_content = 4,
  ts_external_token__string_end = 5,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token__string_end] = sym__string_end,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__string_start] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__newline] = ACTIONS(1),
    [sym_fn_arrow] = ACTIONS(1),
    [sym_fn_body] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [sym_constraint_arrow] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__types_modules_regex] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym_nat_trans_arrow] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_module_decl] = STATE(4),
    [anon_sym_module] = ACTIONS(3),
  },
  [2] = {
    [sym_module_name] = STATE(6),
    [sym__types_modules_regex] = ACTIONS(5),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(7),
  },
  [4] = {
    [sym_body] = STATE(9),
    [sym_identifier] = STATE(10),
    [sym_import] = STATE(11),
    [sym_type_sig] = STATE(11),
    [sym_fn] = STATE(11),
    [sym__fn_name_regex] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_where] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
  },
  [6] = {
    [sym_exports] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_where] = ACTIONS(19),
  },
  [7] = {
    [sym_module_name] = STATE(15),
    [sym__types_modules_regex] = ACTIONS(5),
  },
  [8] = {
    [sym__fn_name_regex] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(21),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [10] = {
    [sym_params] = STATE(18),
    [aux_sym_params_repeat1] = STATE(19),
    [sym_identifier] = STATE(20),
    [sym_param] = STATE(19),
    [sym__fn_name_regex] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(31),
  },
  [12] = {
    [sym_identifier] = STATE(21),
    [sym_export] = STATE(22),
    [sym__fn_name_regex] = ACTIONS(25),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_import] = ACTIONS(35),
    [sym__fn_name_regex] = ACTIONS(35),
  },
  [14] = {
    [anon_sym_where] = ACTIONS(37),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [16] = {
    [sym_quantification] = STATE(25),
    [aux_sym_type_param_repeat1] = STATE(26),
    [sym_type_param] = STATE(27),
    [sym_type_body] = STATE(28),
    [anon_sym_forall] = ACTIONS(41),
    [sym__types_modules_regex] = ACTIONS(43),
    [sym__fn_name_regex] = ACTIONS(45),
  },
  [17] = {
    [sym_fn_body] = ACTIONS(47),
  },
  [18] = {
    [anon_sym_EQ] = ACTIONS(49),
  },
  [19] = {
    [sym_identifier] = STATE(20),
    [sym_param] = STATE(31),
    [aux_sym_params_repeat1] = STATE(31),
    [anon_sym_EQ] = ACTIONS(51),
    [sym__fn_name_regex] = ACTIONS(25),
  },
  [20] = {
    [anon_sym_EQ] = ACTIONS(53),
    [sym__fn_name_regex] = ACTIONS(53),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(55),
  },
  [22] = {
    [anon_sym_RPAREN] = ACTIONS(57),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_import] = ACTIONS(61),
    [sym__fn_name_regex] = ACTIONS(61),
  },
  [24] = {
    [aux_sym_quantification_repeat1] = STATE(34),
    [sym_quantification_param] = STATE(34),
    [sym__fn_name_regex] = ACTIONS(63),
  },
  [25] = {
    [sym_type_param] = STATE(35),
    [aux_sym_type_param_repeat1] = STATE(26),
    [sym__types_modules_regex] = ACTIONS(43),
    [sym__fn_name_regex] = ACTIONS(43),
  },
  [26] = {
    [aux_sym_type_param_repeat1] = STATE(36),
    [sym_fn_arrow] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym__fn_name_regex] = ACTIONS(67),
    [sym_constraint_arrow] = ACTIONS(65),
    [sym_nat_trans_arrow] = ACTIONS(65),
    [sym__types_modules_regex] = ACTIONS(67),
  },
  [27] = {
    [aux_sym_type_body_repeat1] = STATE(38),
    [sym_fn_arrow] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_constraint_arrow] = ACTIONS(69),
    [sym_nat_trans_arrow] = ACTIONS(69),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(73),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(75),
  },
  [30] = {
    [sym_fn_body] = ACTIONS(77),
  },
  [31] = {
    [sym_identifier] = STATE(20),
    [sym_param] = STATE(31),
    [aux_sym_params_repeat1] = STATE(31),
    [anon_sym_EQ] = ACTIONS(79),
    [sym__fn_name_regex] = ACTIONS(81),
  },
  [32] = {
    [anon_sym_where] = ACTIONS(84),
  },
  [33] = {
    [anon_sym_DOT] = ACTIONS(86),
    [sym__fn_name_regex] = ACTIONS(86),
  },
  [34] = {
    [aux_sym_quantification_repeat1] = STATE(41),
    [sym_quantification_param] = STATE(41),
    [anon_sym_DOT] = ACTIONS(88),
    [sym__fn_name_regex] = ACTIONS(63),
  },
  [35] = {
    [aux_sym_type_body_repeat1] = STATE(42),
    [sym_fn_arrow] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_constraint_arrow] = ACTIONS(69),
    [sym_nat_trans_arrow] = ACTIONS(69),
  },
  [36] = {
    [aux_sym_type_param_repeat1] = STATE(36),
    [sym_fn_arrow] = ACTIONS(92),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym__fn_name_regex] = ACTIONS(94),
    [sym_constraint_arrow] = ACTIONS(92),
    [sym__types_modules_regex] = ACTIONS(94),
    [sym_nat_trans_arrow] = ACTIONS(92),
  },
  [37] = {
    [sym_type_param] = STATE(43),
    [aux_sym_type_param_repeat1] = STATE(26),
    [sym__types_modules_regex] = ACTIONS(43),
    [sym__fn_name_regex] = ACTIONS(43),
  },
  [38] = {
    [aux_sym_type_body_repeat1] = STATE(44),
    [sym_fn_arrow] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_constraint_arrow] = ACTIONS(69),
    [sym_nat_trans_arrow] = ACTIONS(69),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(97),
  },
  [40] = {
    [sym__types_modules_regex] = ACTIONS(99),
    [sym__fn_name_regex] = ACTIONS(99),
  },
  [41] = {
    [aux_sym_quantification_repeat1] = STATE(41),
    [sym_quantification_param] = STATE(41),
    [anon_sym_DOT] = ACTIONS(101),
    [sym__fn_name_regex] = ACTIONS(103),
  },
  [42] = {
    [aux_sym_type_body_repeat1] = STATE(44),
    [sym_fn_arrow] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_constraint_arrow] = ACTIONS(69),
    [sym_nat_trans_arrow] = ACTIONS(69),
  },
  [43] = {
    [sym_fn_arrow] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_constraint_arrow] = ACTIONS(108),
    [sym_nat_trans_arrow] = ACTIONS(108),
  },
  [44] = {
    [aux_sym_type_body_repeat1] = STATE(44),
    [sym_fn_arrow] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_constraint_arrow] = ACTIONS(110),
    [sym_nat_trans_arrow] = ACTIONS(110),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(5),
  [7] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [9] = {.count = 1, .reusable = false}, SHIFT(8),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_module_name, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [25] = {.count = 1, .reusable = true}, SHIFT(8),
  [27] = {.count = 1, .reusable = true}, SHIFT(17),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_module_decl, 3),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_module_decl, 3),
  [37] = {.count = 1, .reusable = true}, SHIFT(23),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_import, 2),
  [41] = {.count = 1, .reusable = false}, SHIFT(24),
  [43] = {.count = 1, .reusable = true}, SHIFT(26),
  [45] = {.count = 1, .reusable = false}, SHIFT(26),
  [47] = {.count = 1, .reusable = true}, SHIFT(29),
  [49] = {.count = 1, .reusable = true}, SHIFT(30),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_params, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_param, 1),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_export, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(32),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_module_decl, 4),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_module_decl, 4),
  [63] = {.count = 1, .reusable = true}, SHIFT(33),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_type_param, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(36),
  [69] = {.count = 1, .reusable = true}, SHIFT(37),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_type_body, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_type_sig, 3),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 3),
  [77] = {.count = 1, .reusable = true}, SHIFT(39),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_params_repeat1, 2),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(8),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_exports, 3),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_quantification_param, 1),
  [88] = {.count = 1, .reusable = true}, SHIFT(40),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_type_body, 2),
  [92] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_param_repeat1, 2),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_param_repeat1, 2), SHIFT_REPEAT(36),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_fn, 4),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_quantification, 3),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_quantification_repeat1, 2),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_quantification_repeat1, 2), SHIFT_REPEAT(33),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_type_body, 3),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_body_repeat1, 2),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_body_repeat1, 2), SHIFT_REPEAT(37),
};

void *tree_sitter_purescript_external_scanner_create(void);
void tree_sitter_purescript_external_scanner_destroy(void *);
bool tree_sitter_purescript_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_purescript_external_scanner_serialize(void *, char *);
void tree_sitter_purescript_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_purescript(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_purescript_external_scanner_create,
      tree_sitter_purescript_external_scanner_destroy,
      tree_sitter_purescript_external_scanner_scan,
      tree_sitter_purescript_external_scanner_serialize,
      tree_sitter_purescript_external_scanner_deserialize,
    },
  };
  return &language;
}
