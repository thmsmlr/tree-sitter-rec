#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_database_token1 = 1,
  anon_sym_COLON = 2,
  sym_key = 3,
  aux_sym_value_token1 = 4,
  aux_sym_value_token2 = 5,
  sym_comment = 6,
  sym_database = 7,
  sym__statement = 8,
  sym_field = 9,
  sym_value = 10,
  aux_sym_database_repeat1 = 11,
  aux_sym_value_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_database_token1] = "database_token1",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [aux_sym_value_token1] = "value_token1",
  [aux_sym_value_token2] = "value_token2",
  [sym_comment] = "comment",
  [sym_database] = "database",
  [sym__statement] = "_statement",
  [sym_field] = "field",
  [sym_value] = "value",
  [aux_sym_database_repeat1] = "database_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_database_token1] = aux_sym_database_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [aux_sym_value_token2] = aux_sym_value_token2,
  [sym_comment] = sym_comment,
  [sym_database] = sym_database,
  [sym__statement] = sym__statement,
  [sym_field] = sym_field,
  [sym_value] = sym_value,
  [aux_sym_database_repeat1] = aux_sym_database_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_database_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_database] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_database_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(12);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_database_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(12);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_database_token1);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_database_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_database_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [aux_sym_value_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_database] = STATE(11),
    [sym__statement] = STATE(2),
    [sym_field] = STATE(2),
    [aux_sym_database_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_database_token1] = ACTIONS(5),
    [sym_key] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_field] = STATE(3),
    [aux_sym_database_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_database_token1] = ACTIONS(13),
    [sym_key] = ACTIONS(7),
    [sym_comment] = ACTIONS(15),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_field] = STATE(3),
    [aux_sym_database_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_database_token1] = ACTIONS(19),
    [sym_key] = ACTIONS(22),
    [sym_comment] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(32), 1,
      aux_sym_value_token2,
    STATE(6), 1,
      aux_sym_value_repeat1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(30), 2,
      aux_sym_database_token1,
      sym_key,
  [15] = 4,
    ACTIONS(34), 1,
      aux_sym_value_token2,
    STATE(7), 1,
      aux_sym_value_repeat1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(30), 2,
      aux_sym_database_token1,
      sym_key,
  [30] = 4,
    ACTIONS(34), 1,
      aux_sym_value_token2,
    STATE(7), 1,
      aux_sym_value_repeat1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(38), 2,
      aux_sym_database_token1,
      sym_key,
  [45] = 4,
    ACTIONS(44), 1,
      aux_sym_value_token2,
    STATE(7), 1,
      aux_sym_value_repeat1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(42), 2,
      aux_sym_database_token1,
      sym_key,
  [60] = 4,
    ACTIONS(47), 1,
      aux_sym_value_token1,
    ACTIONS(49), 1,
      aux_sym_value_token2,
    STATE(5), 1,
      aux_sym_value_repeat1,
    STATE(9), 1,
      sym_value,
  [73] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(53), 2,
      aux_sym_database_token1,
      sym_key,
  [82] = 1,
    ACTIONS(55), 1,
      anon_sym_COLON,
  [86] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 86,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_database_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_database_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_database_repeat1, 2), SHIFT_REPEAT(10),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_database_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rec(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
