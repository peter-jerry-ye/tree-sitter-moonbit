#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 659
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 182
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  sym_lowercase_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_ = 4,
  anon_sym_priv = 5,
  anon_sym_pub = 6,
  anon_sym_LPAREN = 7,
  anon_sym_readonly = 8,
  anon_sym_RPAREN = 9,
  anon_sym_type = 10,
  anon_sym_struct = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  anon_sym_enum = 15,
  anon_sym_COMMA = 16,
  anon_sym_let = 17,
  anon_sym_EQ = 18,
  anon_sym_func = 19,
  anon_sym_interface = 20,
  anon_sym__ = 21,
  anon_sym_DQUOTE = 22,
  anon_sym_BSLASH_LPAREN = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym_integer_literal = 26,
  sym_float_literal = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_char_literal_token1 = 29,
  sym_unescaped_string_fragment = 30,
  sym_escape_seqence = 31,
  anon_sym_DASH = 32,
  anon_sym_PLUS = 33,
  anon_sym_STAR_STAR = 34,
  anon_sym_STAR = 35,
  anon_sym_SLASH = 36,
  anon_sym_STAR_EQ = 37,
  anon_sym_SLASH_EQ = 38,
  anon_sym_PERCENT = 39,
  anon_sym_PLUS_EQ = 40,
  anon_sym_DASH_EQ = 41,
  anon_sym_GT = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_LT_EQ = 44,
  anon_sym_LT = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_AMP_AMP = 48,
  anon_sym_PIPE_PIPE = 49,
  anon_sym_DOT_DOT = 50,
  anon_sym_fn = 51,
  anon_sym_LBRACK = 52,
  anon_sym_RBRACK = 53,
  aux_sym_accessor_token1 = 54,
  anon_sym_match = 55,
  anon_sym_EQ_GT = 56,
  anon_sym_if = 57,
  anon_sym_else = 58,
  anon_sym_break = 59,
  anon_sym_continue = 60,
  anon_sym_COLON_EQ = 61,
  anon_sym_var = 62,
  anon_sym_while = 63,
  anon_sym_return = 64,
  anon_sym_as = 65,
  anon_sym_PIPE = 66,
  anon_sym_DASH_GT = 67,
  sym_mutability = 68,
  sym_uppercase_identifier = 69,
  sym_colon_colon_uppercase_identifier = 70,
  sym_colon_colon_lowercase_identifier = 71,
  sym_identifier = 72,
  sym_dot_identifier = 73,
  sym_package_identifier = 74,
  sym_structure = 75,
  sym_structure_item = 76,
  sym_visibility = 77,
  sym_pub_attribute = 78,
  sym_type_defintion = 79,
  sym_struct_definition = 80,
  sym_struct_filed_declaration = 81,
  sym_enum_definition = 82,
  sym_enum_constructor = 83,
  sym_value_definition = 84,
  sym_function_definition = 85,
  sym_interface_definition = 86,
  sym_interface_method_declaration = 87,
  sym_expression = 88,
  sym_simple_expression = 89,
  sym_atomic_expression = 90,
  sym_string_interpolation = 91,
  sym_interpolator = 92,
  sym_literal = 93,
  sym_boolean_literal = 94,
  sym_char_literal = 95,
  sym_string_literal = 96,
  sym_string_fragement = 97,
  sym_unary_expression = 98,
  sym_binary_expression = 99,
  sym_struct_expression = 100,
  sym_struct_field_expression = 101,
  sym_struct_filed_expression = 102,
  sym_labeled_expression = 103,
  sym_labeled_expression_pun = 104,
  sym_block_expression = 105,
  sym_nonempty_block_expression = 106,
  sym_anonymous_lambda_expression = 107,
  sym_constructor_expression = 108,
  sym_apply_expression = 109,
  sym_array_access_expression = 110,
  sym_dot_apply_expression = 111,
  sym_access_expression = 112,
  sym_accessor = 113,
  sym_method_expression = 114,
  sym_unit_expression = 115,
  sym_tuple_expression = 116,
  sym_constraint_expression = 117,
  sym_array_expression = 118,
  sym_match_expression = 119,
  sym_case_clause = 120,
  sym_if_expression = 121,
  sym_else_clause = 122,
  sym_statement_expression = 123,
  sym_let_expression = 124,
  sym_shorthand_let_expression = 125,
  sym_shorthand_let_pattern = 126,
  sym_var_expression = 127,
  sym_assign_expression = 128,
  sym_left_value = 129,
  sym_named_lambda_expression = 130,
  sym_while_expression = 131,
  sym_return_expression = 132,
  sym_pattern = 133,
  sym_as_pattern = 134,
  sym_or_pattern = 135,
  sym_simple_pattern = 136,
  sym_constructor_pattern = 137,
  sym_tuple_pattern = 138,
  sym_constraint_pattern = 139,
  sym_array_pattern = 140,
  sym_array_sub_pattern = 141,
  sym_dotdot_pattern = 142,
  sym_struct_pattern = 143,
  sym_struct_filed_pattern = 144,
  sym_filed_single_pattern = 145,
  sym_labeled_pattern = 146,
  sym_labeled_pattern_pun = 147,
  sym_type = 148,
  sym_tuple_type = 149,
  sym_function_type = 150,
  sym_apply_type = 151,
  sym_type_arguments = 152,
  sym_type_parameters = 153,
  sym_type_annotation = 154,
  sym_retuern_type = 155,
  sym_parameter = 156,
  sym_parameters = 157,
  sym_any = 158,
  sym_pub = 159,
  sym_qualified_identifier = 160,
  sym_qualified_type_identifier = 161,
  sym_function_identifier = 162,
  sym_type_identifier = 163,
  sym_constraints = 164,
  sym_constraint = 165,
  aux_sym_structure_repeat1 = 166,
  aux_sym_struct_definition_repeat1 = 167,
  aux_sym_enum_definition_repeat1 = 168,
  aux_sym_enum_constructor_repeat1 = 169,
  aux_sym_interface_definition_repeat1 = 170,
  aux_sym_string_interpolation_repeat1 = 171,
  aux_sym_string_interpolation_repeat2 = 172,
  aux_sym_struct_field_expression_repeat1 = 173,
  aux_sym_block_expression_repeat1 = 174,
  aux_sym_apply_expression_repeat1 = 175,
  aux_sym_match_expression_repeat1 = 176,
  aux_sym_constructor_pattern_repeat1 = 177,
  aux_sym_struct_filed_pattern_repeat1 = 178,
  aux_sym_type_parameters_repeat1 = 179,
  aux_sym_parameters_repeat1 = 180,
  aux_sym_constraints_repeat1 = 181,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_lowercase_identifier] = "lowercase_identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_] = " ",
  [anon_sym_priv] = "priv",
  [anon_sym_pub] = "pub",
  [anon_sym_LPAREN] = "(",
  [anon_sym_readonly] = "readonly",
  [anon_sym_RPAREN] = ")",
  [anon_sym_type] = "type",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_func] = "func",
  [anon_sym_interface] = "interface",
  [anon_sym__] = "_",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_LPAREN] = "\\(",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [sym_unescaped_string_fragment] = "unescaped_string_fragment",
  [sym_escape_seqence] = "escape_seqence",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_fn] = "fn",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_accessor_token1] = "accessor_token1",
  [anon_sym_match] = "match",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_var] = "var",
  [anon_sym_while] = "while",
  [anon_sym_return] = "return",
  [anon_sym_as] = "as",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [sym_mutability] = "mutability",
  [sym_uppercase_identifier] = "uppercase_identifier",
  [sym_colon_colon_uppercase_identifier] = "colon_colon_uppercase_identifier",
  [sym_colon_colon_lowercase_identifier] = "colon_colon_lowercase_identifier",
  [sym_identifier] = "identifier",
  [sym_dot_identifier] = "dot_identifier",
  [sym_package_identifier] = "package_identifier",
  [sym_structure] = "structure",
  [sym_structure_item] = "structure_item",
  [sym_visibility] = "visibility",
  [sym_pub_attribute] = "pub_attribute",
  [sym_type_defintion] = "type_defintion",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_filed_declaration] = "struct_filed_declaration",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_constructor] = "enum_constructor",
  [sym_value_definition] = "value_definition",
  [sym_function_definition] = "function_definition",
  [sym_interface_definition] = "interface_definition",
  [sym_interface_method_declaration] = "interface_method_declaration",
  [sym_expression] = "expression",
  [sym_simple_expression] = "simple_expression",
  [sym_atomic_expression] = "atomic_expression",
  [sym_string_interpolation] = "string_interpolation",
  [sym_interpolator] = "interpolator",
  [sym_literal] = "literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_fragement] = "string_fragement",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_struct_expression] = "struct_expression",
  [sym_struct_field_expression] = "struct_field_expression",
  [sym_struct_filed_expression] = "struct_filed_expression",
  [sym_labeled_expression] = "labeled_expression",
  [sym_labeled_expression_pun] = "labeled_expression_pun",
  [sym_block_expression] = "block_expression",
  [sym_nonempty_block_expression] = "nonempty_block_expression",
  [sym_anonymous_lambda_expression] = "anonymous_lambda_expression",
  [sym_constructor_expression] = "constructor_expression",
  [sym_apply_expression] = "apply_expression",
  [sym_array_access_expression] = "array_access_expression",
  [sym_dot_apply_expression] = "dot_apply_expression",
  [sym_access_expression] = "access_expression",
  [sym_accessor] = "accessor",
  [sym_method_expression] = "method_expression",
  [sym_unit_expression] = "unit_expression",
  [sym_tuple_expression] = "tuple_expression",
  [sym_constraint_expression] = "constraint_expression",
  [sym_array_expression] = "array_expression",
  [sym_match_expression] = "match_expression",
  [sym_case_clause] = "case_clause",
  [sym_if_expression] = "if_expression",
  [sym_else_clause] = "else_clause",
  [sym_statement_expression] = "statement_expression",
  [sym_let_expression] = "let_expression",
  [sym_shorthand_let_expression] = "shorthand_let_expression",
  [sym_shorthand_let_pattern] = "shorthand_let_pattern",
  [sym_var_expression] = "var_expression",
  [sym_assign_expression] = "assign_expression",
  [sym_left_value] = "left_value",
  [sym_named_lambda_expression] = "named_lambda_expression",
  [sym_while_expression] = "while_expression",
  [sym_return_expression] = "return_expression",
  [sym_pattern] = "pattern",
  [sym_as_pattern] = "as_pattern",
  [sym_or_pattern] = "or_pattern",
  [sym_simple_pattern] = "simple_pattern",
  [sym_constructor_pattern] = "constructor_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym_constraint_pattern] = "constraint_pattern",
  [sym_array_pattern] = "array_pattern",
  [sym_array_sub_pattern] = "array_sub_pattern",
  [sym_dotdot_pattern] = "dotdot_pattern",
  [sym_struct_pattern] = "struct_pattern",
  [sym_struct_filed_pattern] = "struct_filed_pattern",
  [sym_filed_single_pattern] = "filed_single_pattern",
  [sym_labeled_pattern] = "labeled_pattern",
  [sym_labeled_pattern_pun] = "labeled_pattern_pun",
  [sym_type] = "type",
  [sym_tuple_type] = "tuple_type",
  [sym_function_type] = "function_type",
  [sym_apply_type] = "apply_type",
  [sym_type_arguments] = "type_arguments",
  [sym_type_parameters] = "type_parameters",
  [sym_type_annotation] = "type_annotation",
  [sym_retuern_type] = "retuern_type",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_any] = "any",
  [sym_pub] = "pub",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_qualified_type_identifier] = "qualified_type_identifier",
  [sym_function_identifier] = "function_identifier",
  [sym_type_identifier] = "type_identifier",
  [sym_constraints] = "constraints",
  [sym_constraint] = "constraint",
  [aux_sym_structure_repeat1] = "structure_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_enum_constructor_repeat1] = "enum_constructor_repeat1",
  [aux_sym_interface_definition_repeat1] = "interface_definition_repeat1",
  [aux_sym_string_interpolation_repeat1] = "string_interpolation_repeat1",
  [aux_sym_string_interpolation_repeat2] = "string_interpolation_repeat2",
  [aux_sym_struct_field_expression_repeat1] = "struct_field_expression_repeat1",
  [aux_sym_block_expression_repeat1] = "block_expression_repeat1",
  [aux_sym_apply_expression_repeat1] = "apply_expression_repeat1",
  [aux_sym_match_expression_repeat1] = "match_expression_repeat1",
  [aux_sym_constructor_pattern_repeat1] = "constructor_pattern_repeat1",
  [aux_sym_struct_filed_pattern_repeat1] = "struct_filed_pattern_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_constraints_repeat1] = "constraints_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_lowercase_identifier] = sym_lowercase_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_] = anon_sym_,
  [anon_sym_priv] = anon_sym_priv,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym__] = anon_sym__,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_LPAREN] = anon_sym_BSLASH_LPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [sym_unescaped_string_fragment] = sym_unescaped_string_fragment,
  [sym_escape_seqence] = sym_escape_seqence,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_accessor_token1] = aux_sym_accessor_token1,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_mutability] = sym_mutability,
  [sym_uppercase_identifier] = sym_uppercase_identifier,
  [sym_colon_colon_uppercase_identifier] = sym_colon_colon_uppercase_identifier,
  [sym_colon_colon_lowercase_identifier] = sym_colon_colon_lowercase_identifier,
  [sym_identifier] = sym_identifier,
  [sym_dot_identifier] = sym_dot_identifier,
  [sym_package_identifier] = sym_package_identifier,
  [sym_structure] = sym_structure,
  [sym_structure_item] = sym_structure_item,
  [sym_visibility] = sym_visibility,
  [sym_pub_attribute] = sym_pub_attribute,
  [sym_type_defintion] = sym_type_defintion,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_filed_declaration] = sym_struct_filed_declaration,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_constructor] = sym_enum_constructor,
  [sym_value_definition] = sym_value_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym_interface_method_declaration] = sym_interface_method_declaration,
  [sym_expression] = sym_expression,
  [sym_simple_expression] = sym_simple_expression,
  [sym_atomic_expression] = sym_atomic_expression,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_interpolator] = sym_interpolator,
  [sym_literal] = sym_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_fragement] = sym_string_fragement,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_struct_expression] = sym_struct_expression,
  [sym_struct_field_expression] = sym_struct_field_expression,
  [sym_struct_filed_expression] = sym_struct_filed_expression,
  [sym_labeled_expression] = sym_labeled_expression,
  [sym_labeled_expression_pun] = sym_labeled_expression_pun,
  [sym_block_expression] = sym_block_expression,
  [sym_nonempty_block_expression] = sym_nonempty_block_expression,
  [sym_anonymous_lambda_expression] = sym_anonymous_lambda_expression,
  [sym_constructor_expression] = sym_constructor_expression,
  [sym_apply_expression] = sym_apply_expression,
  [sym_array_access_expression] = sym_array_access_expression,
  [sym_dot_apply_expression] = sym_dot_apply_expression,
  [sym_access_expression] = sym_access_expression,
  [sym_accessor] = sym_accessor,
  [sym_method_expression] = sym_method_expression,
  [sym_unit_expression] = sym_unit_expression,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_constraint_expression] = sym_constraint_expression,
  [sym_array_expression] = sym_array_expression,
  [sym_match_expression] = sym_match_expression,
  [sym_case_clause] = sym_case_clause,
  [sym_if_expression] = sym_if_expression,
  [sym_else_clause] = sym_else_clause,
  [sym_statement_expression] = sym_statement_expression,
  [sym_let_expression] = sym_let_expression,
  [sym_shorthand_let_expression] = sym_shorthand_let_expression,
  [sym_shorthand_let_pattern] = sym_shorthand_let_pattern,
  [sym_var_expression] = sym_var_expression,
  [sym_assign_expression] = sym_assign_expression,
  [sym_left_value] = sym_left_value,
  [sym_named_lambda_expression] = sym_named_lambda_expression,
  [sym_while_expression] = sym_while_expression,
  [sym_return_expression] = sym_return_expression,
  [sym_pattern] = sym_pattern,
  [sym_as_pattern] = sym_as_pattern,
  [sym_or_pattern] = sym_or_pattern,
  [sym_simple_pattern] = sym_simple_pattern,
  [sym_constructor_pattern] = sym_constructor_pattern,
  [sym_tuple_pattern] = sym_tuple_pattern,
  [sym_constraint_pattern] = sym_constraint_pattern,
  [sym_array_pattern] = sym_array_pattern,
  [sym_array_sub_pattern] = sym_array_sub_pattern,
  [sym_dotdot_pattern] = sym_dotdot_pattern,
  [sym_struct_pattern] = sym_struct_pattern,
  [sym_struct_filed_pattern] = sym_struct_filed_pattern,
  [sym_filed_single_pattern] = sym_filed_single_pattern,
  [sym_labeled_pattern] = sym_labeled_pattern,
  [sym_labeled_pattern_pun] = sym_labeled_pattern_pun,
  [sym_type] = sym_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_function_type] = sym_function_type,
  [sym_apply_type] = sym_apply_type,
  [sym_type_arguments] = sym_type_arguments,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_annotation] = sym_type_annotation,
  [sym_retuern_type] = sym_retuern_type,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_any] = sym_any,
  [sym_pub] = sym_pub,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_qualified_type_identifier] = sym_qualified_type_identifier,
  [sym_function_identifier] = sym_function_identifier,
  [sym_type_identifier] = sym_type_identifier,
  [sym_constraints] = sym_constraints,
  [sym_constraint] = sym_constraint,
  [aux_sym_structure_repeat1] = aux_sym_structure_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_enum_constructor_repeat1] = aux_sym_enum_constructor_repeat1,
  [aux_sym_interface_definition_repeat1] = aux_sym_interface_definition_repeat1,
  [aux_sym_string_interpolation_repeat1] = aux_sym_string_interpolation_repeat1,
  [aux_sym_string_interpolation_repeat2] = aux_sym_string_interpolation_repeat2,
  [aux_sym_struct_field_expression_repeat1] = aux_sym_struct_field_expression_repeat1,
  [aux_sym_block_expression_repeat1] = aux_sym_block_expression_repeat1,
  [aux_sym_apply_expression_repeat1] = aux_sym_apply_expression_repeat1,
  [aux_sym_match_expression_repeat1] = aux_sym_match_expression_repeat1,
  [aux_sym_constructor_pattern_repeat1] = aux_sym_constructor_pattern_repeat1,
  [aux_sym_struct_filed_pattern_repeat1] = aux_sym_struct_filed_pattern_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_constraints_repeat1] = aux_sym_constraints_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unescaped_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_seqence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accessor_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_mutability] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_colon_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_colon_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_item] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_pub_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_type_defintion] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_value_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolator] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_fragement] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_expression_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_nonempty_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_method_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_match_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_case_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_let_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_var_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_left_value] = {
    .visible = true,
    .named = true,
  },
  [sym_named_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_as_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_or_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_sub_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_dotdot_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_filed_single_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_pattern_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_retuern_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [sym_pub] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_structure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_field_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apply_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_filed_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 12,
  [22] = 22,
  [23] = 23,
  [24] = 19,
  [25] = 13,
  [26] = 20,
  [27] = 18,
  [28] = 15,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 14,
  [33] = 22,
  [34] = 29,
  [35] = 23,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 48,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 51,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 52,
  [66] = 55,
  [67] = 47,
  [68] = 63,
  [69] = 37,
  [70] = 40,
  [71] = 44,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 81,
  [84] = 84,
  [85] = 85,
  [86] = 80,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 87,
  [155] = 155,
  [156] = 92,
  [157] = 99,
  [158] = 158,
  [159] = 94,
  [160] = 160,
  [161] = 127,
  [162] = 96,
  [163] = 145,
  [164] = 129,
  [165] = 102,
  [166] = 106,
  [167] = 103,
  [168] = 105,
  [169] = 73,
  [170] = 126,
  [171] = 100,
  [172] = 123,
  [173] = 122,
  [174] = 133,
  [175] = 114,
  [176] = 137,
  [177] = 144,
  [178] = 138,
  [179] = 139,
  [180] = 140,
  [181] = 181,
  [182] = 148,
  [183] = 141,
  [184] = 147,
  [185] = 142,
  [186] = 107,
  [187] = 181,
  [188] = 111,
  [189] = 136,
  [190] = 152,
  [191] = 153,
  [192] = 112,
  [193] = 135,
  [194] = 134,
  [195] = 74,
  [196] = 113,
  [197] = 116,
  [198] = 77,
  [199] = 119,
  [200] = 120,
  [201] = 76,
  [202] = 121,
  [203] = 143,
  [204] = 78,
  [205] = 124,
  [206] = 125,
  [207] = 75,
  [208] = 72,
  [209] = 128,
  [210] = 210,
  [211] = 101,
  [212] = 212,
  [213] = 104,
  [214] = 130,
  [215] = 131,
  [216] = 149,
  [217] = 118,
  [218] = 150,
  [219] = 132,
  [220] = 220,
  [221] = 220,
  [222] = 222,
  [223] = 222,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 229,
  [236] = 236,
  [237] = 226,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 232,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 244,
  [246] = 246,
  [247] = 246,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 255,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 258,
  [263] = 263,
  [264] = 260,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 268,
  [270] = 270,
  [271] = 257,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 273,
  [288] = 284,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 286,
  [293] = 293,
  [294] = 294,
  [295] = 275,
  [296] = 296,
  [297] = 297,
  [298] = 285,
  [299] = 299,
  [300] = 279,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 293,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 330,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 332,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 339,
  [344] = 329,
  [345] = 335,
  [346] = 336,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 362,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 367,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 340,
  [395] = 374,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 352,
  [408] = 348,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 310,
  [416] = 313,
  [417] = 353,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 347,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 411,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 427,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 446,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 406,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 482,
  [485] = 485,
  [486] = 445,
  [487] = 487,
  [488] = 451,
  [489] = 489,
  [490] = 452,
  [491] = 491,
  [492] = 492,
  [493] = 454,
  [494] = 494,
  [495] = 495,
  [496] = 469,
  [497] = 497,
  [498] = 389,
  [499] = 390,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 400,
  [515] = 515,
  [516] = 507,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 460,
  [524] = 524,
  [525] = 508,
  [526] = 409,
  [527] = 509,
  [528] = 414,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 373,
  [544] = 544,
  [545] = 357,
  [546] = 530,
  [547] = 547,
  [548] = 368,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 354,
  [553] = 553,
  [554] = 554,
  [555] = 365,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 397,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 399,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 570,
  [573] = 569,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 511,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 591,
  [595] = 575,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 601,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 604,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 629,
  [632] = 620,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 615,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 628,
  [651] = 651,
  [652] = 652,
  [653] = 616,
  [654] = 654,
  [655] = 610,
  [656] = 656,
  [657] = 657,
  [658] = 658,
};

static inline bool sym_lowercase_identifier_character_set_1(int32_t c) {
  return (c < 43646
    ? (c < 4238
      ? (c < 2741
        ? (c < 2042
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1765
              ? (c < 1519
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)))
                : (c <= 1522 || (c < 1649
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1610)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c < 1786
                    ? (c >= 1774 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2493
            ? (c < 2365
              ? (c < 2144
                ? (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || (c < 2112
                    ? c == 2088
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))))
              : (c <= 2365 || (c < 2447
                ? (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))))
            : (c <= 2493 || (c < 2613
              ? (c < 2565
                ? (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3296
          ? (c < 2974
            ? (c < 2877
              ? (c < 2831
                ? (c < 2784
                  ? (c < 2768
                    ? c == 2749
                    : c <= 2768)
                  : (c <= 2785 || (c < 2821
                    ? c == 2809
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))
              : (c <= 2877 || (c < 2949
                ? (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))))))
            : (c <= 2975 || (c < 3165
              ? (c < 3086
                ? (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3077
                    ? c == 3024
                    : c <= 3084)))
                : (c <= 3088 || (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3218
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))))))))
          : (c <= 3297 || (c < 3724
            ? (c < 3482
              ? (c < 3406
                ? (c < 3342
                  ? (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)))
                : (c <= 3406 || (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))))
              : (c <= 3505 || (c < 3634
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3634 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))))
            : (c <= 3747 || (c < 3913
              ? (c < 3776
                ? (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))
                : (c <= 3780 || (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))))
              : (c <= 3948 || (c < 4186
                ? (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))))))))))
      : (c <= 4238 || (c < 8182
        ? (c < 6480
          ? (c < 4992
            ? (c < 4746
              ? (c < 4682
                ? (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))
                : (c <= 4685 || (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))
              : (c <= 4749 || (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))
            : (c <= 5007 || (c < 5984
              ? (c < 5792
                ? (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))
                : (c <= 5866 || (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))))
              : (c <= 5996 || (c < 6176
                ? (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))))))))
          : (c <= 6509 || (c < 7418
            ? (c < 7098
              ? (c < 6823
                ? (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)))
                : (c <= 6823 || (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))))
              : (c <= 7141 || (c < 7312
                ? (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))))))
            : (c <= 7418 || (c < 8031
              ? (c < 8008
                ? (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12549
          ? (c < 11559
            ? (c < 8488
              ? (c < 8458
                ? (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))
                : (c <= 8467 || (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))))
              : (c <= 8488 || (c < 8544
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8584 || (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))))))
            : (c <= 11559 || (c < 11728
              ? (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))))
          : (c <= 12591 || (c < 43015
            ? (c < 42623
              ? (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))))
            : (c <= 43018 || (c < 43396
              ? (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))))))))))))
    : (c <= 43695 || (c < 71236
      ? (c < 67424
        ? (c < 65149
          ? (c < 64112
            ? (c < 43793
              ? (c < 43739
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))
            : (c <= 64217 || (c < 64467
              ? (c < 64312
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65137
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65017)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || c == 65147))))))))
          : (c <= 65149 || (c < 66349
            ? (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))))
            : (c <= 66378 || (c < 66928
              ? (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69635
          ? (c < 68121
            ? (c < 67712
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))
              : (c <= 67742 || (c < 67968
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69687 || (c < 70303
            ? (c < 70081
              ? (c < 69956
                ? (c < 69763
                  ? (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)
                  : (c <= 69807 || (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70207
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70208 || (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))))))
            : (c <= 70312 || (c < 70493
              ? (c < 70442
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70320 && c <= 70366)
                    : c <= 70412)
                  : (c <= 70416 || (c >= 70419 && c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || c == 70480))))
              : (c <= 70497 || (c < 70852
                ? (c < 70751
                  ? (c < 70727
                    ? (c >= 70656 && c <= 70708)
                    : c <= 70730)
                  : (c <= 70753 || (c >= 70784 && c <= 70831)))
                : (c <= 70853 || (c < 71128
                  ? (c < 71040
                    ? c == 70855
                    : c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119973
        ? (c < 73728
          ? (c < 72272
            ? (c < 71960
              ? (c < 71840
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)))
                : (c <= 71903 || (c < 71948
                  ? (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)
                  : (c <= 71955 || (c >= 71957 && c <= 71958)))))
              : (c <= 71983 || (c < 72161
                ? (c < 72096
                  ? (c < 72001
                    ? c == 71999
                    : c <= 72001)
                  : (c <= 72103 || (c >= 72106 && c <= 72144)))
                : (c <= 72161 || (c < 72203
                  ? (c < 72192
                    ? c == 72163
                    : c <= 72192)
                  : (c <= 72242 || c == 72250))))))
            : (c <= 72272 || (c < 73030
              ? (c < 72768
                ? (c < 72368
                  ? (c < 72349
                    ? (c >= 72284 && c <= 72329)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)))
                : (c <= 72768 || (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))))
              : (c <= 73030 || (c < 73440
                ? (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))
                : (c <= 73458 || (c < 73490
                  ? (c < 73476
                    ? c == 73474
                    : c <= 73488)
                  : (c <= 73523 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 78913
                    ? (c >= 77824 && c <= 78895)
                    : c <= 78918)))
                : (c <= 83526 || (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))))
              : (c <= 92975 || (c < 93952
                ? (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))
                : (c <= 94026 || (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))))))
            : (c <= 100343 || (c < 110948
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110928
                  ? (c < 110898
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110898)
                  : (c <= 110930 || c == 110933))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126464
          ? (c < 120656
            ? (c < 120128
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c >= 120123 && c <= 120126)))))
              : (c <= 120132 || (c < 120514
                ? (c < 120146
                  ? (c < 120138
                    ? c == 120134
                    : c <= 120144)
                  : (c <= 120485 || (c >= 120488 && c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123536
              ? (c < 122661
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122666 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122928 && c <= 122989)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124909
                ? (c < 124896
                  ? (c < 124112
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124139)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || (c < 126505
                    ? c == 126503
                    : c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177977 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 201552 && c <= 205743)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_2(int32_t c) {
  return (c < 110898
    ? (c < 73490
      ? (c < 73474
        ? (c >= 70207 && c <= 70208)
        : (c <= 73474 || (c >= 73476 && c <= 73488)))
      : (c <= 73523 || (c < 78913
        ? c == 78895
        : c <= 78918)))
    : (c <= 110898 || (c < 124112
      ? (c < 122661
        ? c == 110933
        : (c <= 122666 || (c >= 122928 && c <= 122989)))
      : (c <= 124139 || (c < 201552
        ? c == 177977
        : c <= 205743)))));
}

static inline bool sym_lowercase_identifier_character_set_3(int32_t c) {
  return (c < 43520
    ? (c < 4197
      ? (c < 2730
        ? (c < 2036
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1749
              ? (c < 1488
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2602
              ? (c < 2544
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2654
                ? (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3253
          ? (c < 2969
            ? (c < 2866
              ? (c < 2809
                ? (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || (c < 2784
                    ? c == 2768
                    : c <= 2785)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2929
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))))
            : (c <= 2970 || (c < 3114
              ? (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3200
                ? (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))
          : (c <= 3257 || (c < 3713
            ? (c < 3423
              ? (c < 3342
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))))
              : (c <= 3425 || (c < 3517
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))))))
            : (c <= 3714 || (c < 3804
              ? (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3807 || (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))))))))))
      : (c <= 4198 || (c < 8144
        ? (c < 6272
          ? (c < 4824
            ? (c < 4696
              ? (c < 4301
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
            : (c <= 4880 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))))))))
          : (c <= 6312 || (c < 7357
            ? (c < 6917
              ? (c < 6528
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))))
              : (c <= 6963 || (c < 7168
                ? (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))))))
        : (c <= 8147 || (c < 12344
          ? (c < 11264
            ? (c < 8469
              ? (c < 8319
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))
                : (c <= 8319 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))
            : (c <= 11492 || (c < 11688
              ? (c < 11565
                ? (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))
              : (c <= 11694 || (c < 11728
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))))))
          : (c <= 12348 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_4(int32_t c) {
  return (c < 43646
    ? (c < 4213
      ? (c < 2738
        ? (c < 2036
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1749
              ? (c < 1488
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2610
              ? (c < 2556
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)))
                : (c <= 2556 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2674
                ? (c < 2649
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3293
          ? (c < 2972
            ? (c < 2869
              ? (c < 2821
                ? (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))
              : (c <= 2873 || (c < 2947
                ? (c < 2911
                  ? (c < 2908
                    ? c == 2877
                    : c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))))
            : (c <= 2972 || (c < 3160
              ? (c < 3077
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)))
                : (c <= 3084 || (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))))))))
          : (c <= 3294 || (c < 3718
            ? (c < 3461
              ? (c < 3389
                ? (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)))
                : (c <= 3389 || (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))))
              : (c <= 3478 || (c < 3585
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3713
                  ? (c < 3648
                    ? c == 3634
                    : c <= 3654)
                  : (c <= 3714 || c == 3716))))))
            : (c <= 3722 || (c < 3904
              ? (c < 3773
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3760 || c == 3762))
                : (c <= 3773 || (c < 3804
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3807 || c == 3840))))
              : (c <= 3911 || (c < 4176
                ? (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))))))))))
      : (c <= 4225 || (c < 8182
        ? (c < 6400
          ? (c < 4888
            ? (c < 4704
              ? (c < 4348
                ? (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))
                : (c <= 4680 || (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4800
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
            : (c <= 4954 || (c < 5952
              ? (c < 5761
                ? (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6108
                ? (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))))
          : (c <= 6430 || (c < 7413
            ? (c < 7086
              ? (c < 6688
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)))
                : (c <= 6740 || (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))))
              : (c <= 7087 || (c < 7296
                ? (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))))))
            : (c <= 7414 || (c < 8031
              ? (c < 8008
                ? (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12549
          ? (c < 11559
            ? (c < 8488
              ? (c < 8458
                ? (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))
                : (c <= 8467 || (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))))
              : (c <= 8488 || (c < 8544
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8584 || (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))))))
            : (c <= 11559 || (c < 11728
              ? (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))))
          : (c <= 12591 || (c < 43015
            ? (c < 42623
              ? (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))))
            : (c <= 43018 || (c < 43396
              ? (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))))))))))))
    : (c <= 43695 || (c < 71236
      ? (c < 67424
        ? (c < 65149
          ? (c < 64112
            ? (c < 43793
              ? (c < 43739
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))
            : (c <= 64217 || (c < 64467
              ? (c < 64312
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65137
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65017)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || c == 65147))))))))
          : (c <= 65149 || (c < 66349
            ? (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))))
            : (c <= 66378 || (c < 66928
              ? (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69635
          ? (c < 68121
            ? (c < 67712
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))
              : (c <= 67742 || (c < 67968
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69687 || (c < 70303
            ? (c < 70081
              ? (c < 69956
                ? (c < 69763
                  ? (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)
                  : (c <= 69807 || (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70207
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70208 || (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))))))
            : (c <= 70312 || (c < 70493
              ? (c < 70442
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70320 && c <= 70366)
                    : c <= 70412)
                  : (c <= 70416 || (c >= 70419 && c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || c == 70480))))
              : (c <= 70497 || (c < 70852
                ? (c < 70751
                  ? (c < 70727
                    ? (c >= 70656 && c <= 70708)
                    : c <= 70730)
                  : (c <= 70753 || (c >= 70784 && c <= 70831)))
                : (c <= 70853 || (c < 71128
                  ? (c < 71040
                    ? c == 70855
                    : c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119973
        ? (c < 73728
          ? (c < 72272
            ? (c < 71960
              ? (c < 71840
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)))
                : (c <= 71903 || (c < 71948
                  ? (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)
                  : (c <= 71955 || (c >= 71957 && c <= 71958)))))
              : (c <= 71983 || (c < 72161
                ? (c < 72096
                  ? (c < 72001
                    ? c == 71999
                    : c <= 72001)
                  : (c <= 72103 || (c >= 72106 && c <= 72144)))
                : (c <= 72161 || (c < 72203
                  ? (c < 72192
                    ? c == 72163
                    : c <= 72192)
                  : (c <= 72242 || c == 72250))))))
            : (c <= 72272 || (c < 73030
              ? (c < 72768
                ? (c < 72368
                  ? (c < 72349
                    ? (c >= 72284 && c <= 72329)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)))
                : (c <= 72768 || (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))))
              : (c <= 73030 || (c < 73440
                ? (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))
                : (c <= 73458 || (c < 73490
                  ? (c < 73476
                    ? c == 73474
                    : c <= 73488)
                  : (c <= 73523 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 78913
                    ? (c >= 77824 && c <= 78895)
                    : c <= 78918)))
                : (c <= 83526 || (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))))
              : (c <= 92975 || (c < 93952
                ? (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))
                : (c <= 94026 || (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))))))
            : (c <= 100343 || (c < 110948
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110928
                  ? (c < 110898
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110898)
                  : (c <= 110930 || c == 110933))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126464
          ? (c < 120656
            ? (c < 120128
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c >= 120123 && c <= 120126)))))
              : (c <= 120132 || (c < 120514
                ? (c < 120146
                  ? (c < 120138
                    ? c == 120134
                    : c <= 120144)
                  : (c <= 120485 || (c >= 120488 && c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123536
              ? (c < 122661
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122666 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122928 && c <= 122989)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124909
                ? (c < 124896
                  ? (c < 124112
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124139)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || (c < 126505
                    ? c == 126503
                    : c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177977 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 201552 && c <= 205743)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_5(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_6(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_dot_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(97);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(97);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 24:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 29:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(98);
      END_STATE();
    case 30:
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(101);
      END_STATE();
    case 31:
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(98);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '%') ADVANCE(75);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(97);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(97);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(31);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(97);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(99);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(24);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_escape_seqence);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_accessor_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_colon_colon_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_colon_colon_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_dot_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_package_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(101);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_mutability);
      END_STATE();
    case 46:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_priv);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 33},
  [251] = {.lex_state = 33},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 8},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 8},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 9},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 9},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 33},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 33},
  [316] = {.lex_state = 33},
  [317] = {.lex_state = 33},
  [318] = {.lex_state = 33},
  [319] = {.lex_state = 33},
  [320] = {.lex_state = 33},
  [321] = {.lex_state = 33},
  [322] = {.lex_state = 33},
  [323] = {.lex_state = 33},
  [324] = {.lex_state = 33},
  [325] = {.lex_state = 33},
  [326] = {.lex_state = 33},
  [327] = {.lex_state = 33},
  [328] = {.lex_state = 8},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 33},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 8},
  [339] = {.lex_state = 6},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 9},
  [342] = {.lex_state = 33},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 6},
  [347] = {.lex_state = 8},
  [348] = {.lex_state = 8},
  [349] = {.lex_state = 33},
  [350] = {.lex_state = 6},
  [351] = {.lex_state = 9},
  [352] = {.lex_state = 8},
  [353] = {.lex_state = 8},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 8},
  [357] = {.lex_state = 4},
  [358] = {.lex_state = 33},
  [359] = {.lex_state = 33},
  [360] = {.lex_state = 9},
  [361] = {.lex_state = 1},
  [362] = {.lex_state = 33},
  [363] = {.lex_state = 8},
  [364] = {.lex_state = 9},
  [365] = {.lex_state = 4},
  [366] = {.lex_state = 33},
  [367] = {.lex_state = 6},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 33},
  [370] = {.lex_state = 33},
  [371] = {.lex_state = 3},
  [372] = {.lex_state = 8},
  [373] = {.lex_state = 4},
  [374] = {.lex_state = 6},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 1},
  [378] = {.lex_state = 33},
  [379] = {.lex_state = 3},
  [380] = {.lex_state = 33},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 9},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 6},
  [388] = {.lex_state = 33},
  [389] = {.lex_state = 4},
  [390] = {.lex_state = 4},
  [391] = {.lex_state = 3},
  [392] = {.lex_state = 3},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 1},
  [395] = {.lex_state = 6},
  [396] = {.lex_state = 3},
  [397] = {.lex_state = 4},
  [398] = {.lex_state = 33},
  [399] = {.lex_state = 4},
  [400] = {.lex_state = 4},
  [401] = {.lex_state = 21},
  [402] = {.lex_state = 33},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 8},
  [407] = {.lex_state = 3},
  [408] = {.lex_state = 3},
  [409] = {.lex_state = 8},
  [410] = {.lex_state = 6},
  [411] = {.lex_state = 8},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 8},
  [414] = {.lex_state = 8},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 1},
  [417] = {.lex_state = 3},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 33},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 3},
  [425] = {.lex_state = 1},
  [426] = {.lex_state = 33},
  [427] = {.lex_state = 33},
  [428] = {.lex_state = 6},
  [429] = {.lex_state = 8},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 33},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 33},
  [436] = {.lex_state = 33},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 21},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 33},
  [442] = {.lex_state = 33},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 8},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 33},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 1},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 33},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 1},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 1},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 1},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 1},
  [468] = {.lex_state = 1},
  [469] = {.lex_state = 21},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 1},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 1},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 4},
  [481] = {.lex_state = 4},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 1},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 1},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 4},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 1},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 21},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 1},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 33},
  [502] = {.lex_state = 8},
  [503] = {.lex_state = 1},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 1},
  [506] = {.lex_state = 33},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 21},
  [510] = {.lex_state = 18},
  [511] = {.lex_state = 1},
  [512] = {.lex_state = 1},
  [513] = {.lex_state = 1},
  [514] = {.lex_state = 1},
  [515] = {.lex_state = 1},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 1},
  [518] = {.lex_state = 1},
  [519] = {.lex_state = 1},
  [520] = {.lex_state = 4},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 8},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 1},
  [527] = {.lex_state = 21},
  [528] = {.lex_state = 1},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 1},
  [532] = {.lex_state = 1},
  [533] = {.lex_state = 1},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 1},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 4},
  [540] = {.lex_state = 1},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 4},
  [543] = {.lex_state = 1},
  [544] = {.lex_state = 1},
  [545] = {.lex_state = 1},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 1},
  [549] = {.lex_state = 1},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 1},
  [552] = {.lex_state = 1},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 1},
  [555] = {.lex_state = 1},
  [556] = {.lex_state = 1},
  [557] = {.lex_state = 8},
  [558] = {.lex_state = 1},
  [559] = {.lex_state = 1},
  [560] = {.lex_state = 1},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 4},
  [564] = {.lex_state = 4},
  [565] = {.lex_state = 1},
  [566] = {.lex_state = 1},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 22},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 21},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 22},
  [574] = {.lex_state = 33},
  [575] = {.lex_state = 21},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 33},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 4},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 21},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 4},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 4},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 4},
  [607] = {.lex_state = 4},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 33},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 21},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 33},
  [622] = {.lex_state = 33},
  [623] = {.lex_state = 21},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 21},
  [626] = {.lex_state = 21},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 4},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 33},
  [640] = {.lex_state = 33},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 33},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 21},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 33},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 21},
  [657] = {.lex_state = 21},
  [658] = {.lex_state = 21},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_lowercase_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_priv] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_seqence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_accessor_token1] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_mutability] = ACTIONS(1),
    [sym_uppercase_identifier] = ACTIONS(1),
    [sym_colon_colon_uppercase_identifier] = ACTIONS(1),
    [sym_colon_colon_lowercase_identifier] = ACTIONS(1),
    [sym_dot_identifier] = ACTIONS(1),
    [sym_package_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_structure] = STATE(651),
    [sym_structure_item] = STATE(443),
    [sym_visibility] = STATE(447),
    [sym_type_defintion] = STATE(449),
    [sym_struct_definition] = STATE(449),
    [sym_enum_definition] = STATE(449),
    [sym_value_definition] = STATE(449),
    [sym_function_definition] = STATE(449),
    [sym_interface_definition] = STATE(449),
    [sym_pub] = STATE(453),
    [aux_sym_structure_repeat1] = STATE(251),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_priv] = ACTIONS(5),
    [anon_sym_pub] = ACTIONS(7),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_interface] = ACTIONS(19),
  },
  [2] = {
    [sym_expression] = STATE(225),
    [sym_simple_expression] = STATE(159),
    [sym_atomic_expression] = STATE(213),
    [sym_string_interpolation] = STATE(191),
    [sym_literal] = STATE(191),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(213),
    [sym_binary_expression] = STATE(213),
    [sym_struct_expression] = STATE(213),
    [sym_struct_field_expression] = STATE(601),
    [sym_labeled_expression] = STATE(567),
    [sym_labeled_expression_pun] = STATE(602),
    [sym_nonempty_block_expression] = STATE(213),
    [sym_anonymous_lambda_expression] = STATE(213),
    [sym_constructor_expression] = STATE(213),
    [sym_apply_expression] = STATE(213),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(213),
    [sym_access_expression] = STATE(213),
    [sym_method_expression] = STATE(213),
    [sym_unit_expression] = STATE(213),
    [sym_tuple_expression] = STATE(213),
    [sym_constraint_expression] = STATE(213),
    [sym_array_expression] = STATE(213),
    [sym_match_expression] = STATE(190),
    [sym_if_expression] = STATE(190),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(549),
    [sym_shorthand_let_expression] = STATE(549),
    [sym_shorthand_let_pattern] = STATE(638),
    [sym_var_expression] = STATE(549),
    [sym_assign_expression] = STATE(549),
    [sym_left_value] = STATE(637),
    [sym_named_lambda_expression] = STATE(549),
    [sym_while_expression] = STATE(549),
    [sym_return_expression] = STATE(549),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(650),
    [aux_sym_block_expression_repeat1] = STATE(5),
    [sym_lowercase_identifier] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DOT_DOT] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_package_identifier] = ACTIONS(67),
  },
  [3] = {
    [sym_expression] = STATE(225),
    [sym_simple_expression] = STATE(159),
    [sym_atomic_expression] = STATE(213),
    [sym_string_interpolation] = STATE(191),
    [sym_literal] = STATE(191),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(213),
    [sym_binary_expression] = STATE(213),
    [sym_struct_expression] = STATE(213),
    [sym_struct_field_expression] = STATE(605),
    [sym_labeled_expression] = STATE(567),
    [sym_labeled_expression_pun] = STATE(602),
    [sym_nonempty_block_expression] = STATE(213),
    [sym_anonymous_lambda_expression] = STATE(213),
    [sym_constructor_expression] = STATE(213),
    [sym_apply_expression] = STATE(213),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(213),
    [sym_access_expression] = STATE(213),
    [sym_method_expression] = STATE(213),
    [sym_unit_expression] = STATE(213),
    [sym_tuple_expression] = STATE(213),
    [sym_constraint_expression] = STATE(213),
    [sym_array_expression] = STATE(213),
    [sym_match_expression] = STATE(190),
    [sym_if_expression] = STATE(190),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(549),
    [sym_shorthand_let_expression] = STATE(549),
    [sym_shorthand_let_pattern] = STATE(638),
    [sym_var_expression] = STATE(549),
    [sym_assign_expression] = STATE(549),
    [sym_left_value] = STATE(637),
    [sym_named_lambda_expression] = STATE(549),
    [sym_while_expression] = STATE(549),
    [sym_return_expression] = STATE(549),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(650),
    [aux_sym_block_expression_repeat1] = STATE(4),
    [sym_lowercase_identifier] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_integer_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DOT_DOT] = ACTIONS(71),
    [anon_sym_fn] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_match] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(55),
    [anon_sym_var] = ACTIONS(57),
    [anon_sym_while] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(61),
    [sym_uppercase_identifier] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_package_identifier] = ACTIONS(67),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 36,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_var,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(73), 1,
      sym_lowercase_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_block_expression_repeat1,
    STATE(159), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(547), 1,
      sym_statement_expression,
    STATE(637), 1,
      sym_left_value,
    STATE(638), 1,
      sym_shorthand_let_pattern,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(158), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(549), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(213), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [137] = 36,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_var,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(73), 1,
      sym_lowercase_identifier,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_block_expression_repeat1,
    STATE(159), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(547), 1,
      sym_statement_expression,
    STATE(637), 1,
      sym_left_value,
    STATE(638), 1,
      sym_shorthand_let_pattern,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(158), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(549), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(213), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [274] = 36,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_var,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(73), 1,
      sym_lowercase_identifier,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_block_expression_repeat1,
    STATE(159), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(547), 1,
      sym_statement_expression,
    STATE(637), 1,
      sym_left_value,
    STATE(638), 1,
      sym_shorthand_let_pattern,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(158), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(549), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(213), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [411] = 36,
    ACTIONS(81), 1,
      sym_lowercase_identifier,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_let,
    ACTIONS(95), 1,
      anon_sym__,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      sym_integer_literal,
    ACTIONS(107), 1,
      sym_float_literal,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_fn,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_match,
    ACTIONS(125), 1,
      anon_sym_if,
    ACTIONS(131), 1,
      anon_sym_var,
    ACTIONS(134), 1,
      anon_sym_while,
    ACTIONS(137), 1,
      anon_sym_return,
    ACTIONS(140), 1,
      sym_uppercase_identifier,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(146), 1,
      sym_package_identifier,
    STATE(7), 1,
      aux_sym_block_expression_repeat1,
    STATE(159), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(547), 1,
      sym_statement_expression,
    STATE(637), 1,
      sym_left_value,
    STATE(638), 1,
      sym_shorthand_let_pattern,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(101), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(158), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(549), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(213), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [548] = 36,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_var,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(73), 1,
      sym_lowercase_identifier,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_block_expression_repeat1,
    STATE(159), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(547), 1,
      sym_statement_expression,
    STATE(637), 1,
      sym_left_value,
    STATE(638), 1,
      sym_shorthand_let_pattern,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(158), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(549), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(213), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [685] = 36,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_var,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(73), 1,
      sym_lowercase_identifier,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_block_expression_repeat1,
    STATE(159), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(547), 1,
      sym_statement_expression,
    STATE(637), 1,
      sym_left_value,
    STATE(638), 1,
      sym_shorthand_let_pattern,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(158), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(549), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(213), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [822] = 36,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_let,
    ACTIONS(31), 1,
      anon_sym__,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_fn,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(57), 1,
      anon_sym_var,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(73), 1,
      sym_lowercase_identifier,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_block_expression_repeat1,
    STATE(159), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(547), 1,
      sym_statement_expression,
    STATE(637), 1,
      sym_left_value,
    STATE(638), 1,
      sym_shorthand_let_pattern,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(158), 2,
      sym_array_access_expression,
      sym_qualified_identifier,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(549), 7,
      sym_let_expression,
      sym_shorthand_let_expression,
      sym_var_expression,
      sym_assign_expression,
      sym_named_lambda_expression,
      sym_while_expression,
      sym_return_expression,
    STATE(213), 15,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
  [959] = 25,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_fn,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      sym_uppercase_identifier,
    ACTIONS(179), 1,
      sym_package_identifier,
    STATE(159), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_integer_literal,
      sym_float_literal,
    ACTIONS(159), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(171), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1059] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1157] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(241), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1255] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1353] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(222), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1451] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1549] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1647] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(226), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1745] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1843] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1941] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2039] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_simple_expression,
    STATE(229), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2137] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2235] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2333] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(232), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2431] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2529] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(237), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2627] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(223), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2725] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2823] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2921] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3019] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3117] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_simple_expression,
    STATE(235), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3215] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3313] = 25,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3411] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3506] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(196), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3601] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(248), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3696] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(210), 1,
      sym_simple_expression,
    STATE(249), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3791] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(192), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3886] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3981] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4076] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(236), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4171] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(188), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4266] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4361] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(234), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4456] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(200), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4551] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(221), 1,
      sym_simple_expression,
    STATE(249), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4646] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(228), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4741] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(238), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4836] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4931] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(181), 1,
      sym_simple_expression,
    STATE(249), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5026] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(240), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5121] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(220), 1,
      sym_simple_expression,
    STATE(249), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5216] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(202), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5311] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(227), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5406] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(163), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5501] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(145), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5596] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(247), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5691] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(231), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5786] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(244), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5881] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(245), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5976] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(199), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6071] = 24,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_match,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(63), 1,
      sym_uppercase_identifier,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_package_identifier,
    ACTIONS(155), 1,
      sym_lowercase_identifier,
    ACTIONS(165), 1,
      anon_sym__,
    ACTIONS(173), 1,
      anon_sym_fn,
    STATE(159), 1,
      sym_simple_expression,
    STATE(230), 1,
      sym_expression,
    STATE(650), 1,
      sym_qualified_type_identifier,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(190), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(191), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(213), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6166] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(187), 1,
      sym_simple_expression,
    STATE(249), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6261] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(121), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6356] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(120), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6451] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(119), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6546] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(113), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6641] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(112), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6736] = 24,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym_lowercase_identifier,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_fn,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_match,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(213), 1,
      sym_package_identifier,
    STATE(94), 1,
      sym_simple_expression,
    STATE(111), 1,
      sym_expression,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(152), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(153), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(104), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6831] = 2,
    ACTIONS(263), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(261), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6871] = 2,
    ACTIONS(267), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(265), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6911] = 2,
    ACTIONS(271), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(269), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6950] = 2,
    ACTIONS(275), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(273), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6989] = 2,
    ACTIONS(279), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(277), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7028] = 2,
    ACTIONS(283), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(281), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7067] = 2,
    ACTIONS(287), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(285), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7106] = 22,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    STATE(98), 1,
      sym_dotdot_pattern,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(341), 1,
      sym_pattern,
    STATE(613), 1,
      sym_array_sub_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7184] = 21,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_match_expression_repeat1,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(505), 1,
      sym_case_clause,
    STATE(510), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7259] = 21,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_match_expression_repeat1,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(505), 1,
      sym_case_clause,
    STATE(510), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7334] = 21,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      sym_integer_literal,
    ACTIONS(329), 1,
      sym_float_literal,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      sym_uppercase_identifier,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(344), 1,
      sym_package_identifier,
    STATE(82), 1,
      aux_sym_match_expression_repeat1,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(505), 1,
      sym_case_clause,
    STATE(510), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(309), 2,
      anon_sym__,
      sym_lowercase_identifier,
    ACTIONS(323), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7409] = 21,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_match_expression_repeat1,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(505), 1,
      sym_case_clause,
    STATE(510), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7484] = 21,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    STATE(634), 1,
      sym_dotdot_pattern,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7559] = 21,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    STATE(642), 1,
      sym_dotdot_pattern,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7634] = 21,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_match_expression_repeat1,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(505), 1,
      sym_case_clause,
    STATE(510), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7709] = 4,
    ACTIONS(359), 1,
      anon_sym_else,
    STATE(123), 1,
      sym_else_clause,
    ACTIONS(357), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(355), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7749] = 19,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7818] = 19,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7887] = 19,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7956] = 19,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8025] = 3,
    ACTIONS(373), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(371), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(369), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8062] = 19,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8131] = 6,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    STATE(134), 1,
      sym_accessor,
    ACTIONS(383), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(379), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 18,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      sym_colon_colon_lowercase_identifier,
  [8174] = 5,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_COLON_EQ,
    ACTIONS(387), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8215] = 2,
    ACTIONS(397), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(395), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8250] = 19,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8319] = 19,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(384), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8388] = 2,
    ACTIONS(405), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(403), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8423] = 2,
    ACTIONS(409), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(407), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8457] = 2,
    ACTIONS(413), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8491] = 2,
    ACTIONS(417), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(415), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8525] = 2,
    ACTIONS(421), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(419), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8559] = 2,
    ACTIONS(425), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(423), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8593] = 2,
    ACTIONS(429), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(427), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8627] = 2,
    ACTIONS(433), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(431), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8661] = 2,
    ACTIONS(437), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8695] = 18,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(364), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8761] = 18,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(393), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8827] = 18,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(296), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8893] = 10,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(439), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8943] = 9,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(439), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8991] = 7,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(441), 3,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(439), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9035] = 2,
    ACTIONS(461), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(459), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9069] = 18,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(385), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9135] = 2,
    ACTIONS(387), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9169] = 18,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(360), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9235] = 2,
    ACTIONS(465), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(463), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9269] = 3,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(441), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(439), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9305] = 3,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(441), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(439), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9341] = 5,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(441), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(439), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9381] = 2,
    ACTIONS(469), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(467), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9415] = 2,
    ACTIONS(473), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(471), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9449] = 2,
    ACTIONS(477), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(475), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9483] = 2,
    ACTIONS(481), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(479), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9517] = 2,
    ACTIONS(485), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(483), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9551] = 2,
    ACTIONS(489), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(487), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9585] = 2,
    ACTIONS(493), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(491), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9619] = 2,
    ACTIONS(497), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(495), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9653] = 2,
    ACTIONS(501), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(499), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9687] = 2,
    ACTIONS(505), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(503), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9721] = 2,
    ACTIONS(509), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(507), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9755] = 2,
    ACTIONS(513), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(511), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9789] = 2,
    ACTIONS(517), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(515), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9823] = 2,
    ACTIONS(521), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(519), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9857] = 2,
    ACTIONS(525), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(523), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9891] = 2,
    ACTIONS(529), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(527), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9925] = 2,
    ACTIONS(533), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(531), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9959] = 2,
    ACTIONS(537), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(535), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9993] = 2,
    ACTIONS(541), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(539), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10027] = 2,
    ACTIONS(545), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(543), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10061] = 2,
    ACTIONS(549), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(547), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10095] = 2,
    ACTIONS(553), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(551), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10129] = 2,
    ACTIONS(557), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(555), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10163] = 3,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(561), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(559), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10199] = 18,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(382), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [10265] = 2,
    ACTIONS(565), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(563), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10299] = 2,
    ACTIONS(569), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(567), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10333] = 2,
    ACTIONS(573), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(571), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10367] = 2,
    ACTIONS(577), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(575), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10401] = 18,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(195), 1,
      sym_float_literal,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_uppercase_identifier,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_package_identifier,
    STATE(270), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(628), 1,
      sym_qualified_type_identifier,
    ACTIONS(191), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(289), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(276), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(280), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [10467] = 2,
    ACTIONS(379), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10501] = 2,
    ACTIONS(581), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(579), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10535] = 4,
    ACTIONS(355), 1,
      anon_sym_LF,
    ACTIONS(583), 1,
      anon_sym_else,
    STATE(172), 1,
      sym_else_clause,
    ACTIONS(357), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10572] = 3,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(393), 1,
      anon_sym_COLON_EQ,
    ACTIONS(387), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10607] = 3,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(585), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(371), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10642] = 2,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10674] = 3,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(587), 1,
      anon_sym_EQ,
    ACTIONS(425), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10708] = 6,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(589), 1,
      anon_sym_LPAREN,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    STATE(194), 1,
      sym_accessor,
    ACTIONS(593), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(379), 21,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [10748] = 3,
    ACTIONS(393), 1,
      anon_sym_COLON_EQ,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(425), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10782] = 2,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(489), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10814] = 2,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10846] = 3,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(561), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10879] = 2,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10910] = 2,
    ACTIONS(415), 1,
      anon_sym_LF,
    ACTIONS(417), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10941] = 2,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(433), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10972] = 2,
    ACTIONS(419), 1,
      anon_sym_LF,
    ACTIONS(421), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11003] = 2,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(429), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11034] = 2,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(267), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11065] = 2,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11096] = 2,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(409), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11127] = 2,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11158] = 2,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(469), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11189] = 2,
    ACTIONS(511), 1,
      anon_sym_LF,
    ACTIONS(513), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11220] = 2,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11251] = 2,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(529), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11282] = 2,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11313] = 2,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(533), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11344] = 2,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(537), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11375] = 2,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11406] = 8,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_accessor,
    STATE(154), 1,
      sym_block_expression,
    ACTIONS(383), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(379), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [11449] = 2,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11480] = 2,
    ACTIONS(543), 1,
      anon_sym_LF,
    ACTIONS(545), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11511] = 2,
    ACTIONS(563), 1,
      anon_sym_LF,
    ACTIONS(565), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11542] = 2,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11573] = 2,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(437), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11604] = 8,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_block_expression,
    STATE(134), 1,
      sym_accessor,
    ACTIONS(383), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(379), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [11647] = 7,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(441), 8,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11688] = 2,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(525), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11719] = 2,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(379), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11750] = 2,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(581), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11781] = 6,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(441), 9,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11820] = 2,
    ACTIONS(519), 1,
      anon_sym_LF,
    ACTIONS(521), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11851] = 2,
    ACTIONS(515), 1,
      anon_sym_LF,
    ACTIONS(517), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11882] = 2,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11913] = 5,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(441), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11950] = 2,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(387), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11981] = 2,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(283), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12012] = 3,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(441), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12045] = 3,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(441), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12078] = 2,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(279), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12109] = 4,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(441), 19,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12144] = 2,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12175] = 2,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(287), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12206] = 2,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(477), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12237] = 2,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(481), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12268] = 2,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(275), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12299] = 2,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(263), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12330] = 2,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12361] = 8,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_accessor,
    STATE(512), 1,
      sym_block_expression,
    ACTIONS(383), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(379), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12404] = 2,
    ACTIONS(411), 1,
      anon_sym_LF,
    ACTIONS(413), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12435] = 2,
    ACTIONS(90), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
    ACTIONS(609), 15,
      anon_sym_let,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      anon_sym_fn,
      anon_sym_match,
      anon_sym_if,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_var,
      anon_sym_while,
      anon_sym_return,
      sym_lowercase_identifier,
      sym_identifier,
  [12466] = 2,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(425), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12497] = 2,
    ACTIONS(499), 1,
      anon_sym_LF,
    ACTIONS(501), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12528] = 2,
    ACTIONS(503), 1,
      anon_sym_LF,
    ACTIONS(505), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12559] = 2,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(573), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12590] = 2,
    ACTIONS(463), 1,
      anon_sym_LF,
    ACTIONS(465), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12621] = 2,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12652] = 2,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(509), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12683] = 7,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_accessor,
    ACTIONS(383), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(379), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12723] = 7,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_accessor,
    ACTIONS(383), 2,
      aux_sym_accessor_token1,
      sym_dot_identifier,
    ACTIONS(379), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12763] = 15,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(617), 1,
      anon_sym_COLON,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    STATE(488), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12818] = 15,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12873] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(635), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12917] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(643), 1,
      anon_sym_LF,
    ACTIONS(645), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12961] = 14,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(446), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13013] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(653), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13057] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13101] = 14,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(486), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13153] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(663), 1,
      anon_sym_LF,
    ACTIONS(665), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13197] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(667), 1,
      anon_sym_LF,
    ACTIONS(669), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13241] = 14,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    STATE(460), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13293] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(677), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13337] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(679), 1,
      anon_sym_LF,
    ACTIONS(681), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13381] = 14,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RBRACK,
    STATE(445), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13433] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(687), 1,
      anon_sym_LF,
    ACTIONS(689), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13477] = 14,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13529] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(695), 1,
      anon_sym_LF,
    ACTIONS(697), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13573] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(701), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13617] = 10,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
    ACTIONS(607), 1,
      anon_sym_AMP_AMP,
    ACTIONS(637), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(641), 1,
      sym_dot_identifier,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(601), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(603), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(605), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13661] = 14,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13713] = 12,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(711), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13761] = 12,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(713), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13808] = 13,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13857] = 13,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13906] = 12,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13952] = 12,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(725), 1,
      anon_sym_RBRACK,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13998] = 12,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14044] = 11,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_AMP_AMP,
    ACTIONS(621), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(623), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(625), 1,
      sym_dot_identifier,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(451), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(453), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(449), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(455), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14087] = 14,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
    ACTIONS(731), 1,
      anon_sym_priv,
    ACTIONS(734), 1,
      anon_sym_pub,
    ACTIONS(737), 1,
      anon_sym_type,
    ACTIONS(740), 1,
      anon_sym_struct,
    ACTIONS(743), 1,
      anon_sym_enum,
    ACTIONS(746), 1,
      anon_sym_let,
    ACTIONS(749), 1,
      anon_sym_func,
    ACTIONS(752), 1,
      anon_sym_interface,
    STATE(250), 1,
      aux_sym_structure_repeat1,
    STATE(443), 1,
      sym_structure_item,
    STATE(447), 1,
      sym_visibility,
    STATE(453), 1,
      sym_pub,
    STATE(449), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [14135] = 14,
    ACTIONS(5), 1,
      anon_sym_priv,
    ACTIONS(7), 1,
      anon_sym_pub,
    ACTIONS(9), 1,
      anon_sym_type,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_interface,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    STATE(250), 1,
      aux_sym_structure_repeat1,
    STATE(443), 1,
      sym_structure_item,
    STATE(447), 1,
      sym_visibility,
    STATE(453), 1,
      sym_pub,
    STATE(449), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [14183] = 3,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    ACTIONS(757), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(759), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14207] = 2,
    ACTIONS(763), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(765), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14228] = 2,
    ACTIONS(767), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(318), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14248] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(773), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14276] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14304] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14332] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14360] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14388] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(516), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14416] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(562), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14444] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14472] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(537), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14500] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(507), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14528] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14556] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14584] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14612] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(799), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14640] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(801), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14668] = 3,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    ACTIONS(807), 1,
      anon_sym_EQ,
    ACTIONS(805), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14686] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14714] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14742] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(452), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14767] = 2,
    ACTIONS(815), 1,
      anon_sym_EQ,
    ACTIONS(813), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14782] = 7,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym__,
    ACTIONS(821), 1,
      sym_identifier,
    ACTIONS(823), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(552), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14807] = 2,
    ACTIONS(827), 1,
      anon_sym_EQ,
    ACTIONS(825), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14822] = 2,
    ACTIONS(831), 1,
      anon_sym_EQ,
    ACTIONS(829), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14837] = 7,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym__,
    ACTIONS(821), 1,
      sym_identifier,
    ACTIONS(823), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(462), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14862] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(632), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14887] = 2,
    ACTIONS(835), 1,
      anon_sym_EQ,
    ACTIONS(833), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14902] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(645), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14927] = 2,
    ACTIONS(839), 1,
      anon_sym_EQ,
    ACTIONS(837), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14942] = 2,
    ACTIONS(843), 1,
      anon_sym_EQ,
    ACTIONS(841), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14957] = 7,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym__,
    ACTIONS(821), 1,
      sym_identifier,
    ACTIONS(823), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(511), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14982] = 7,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym__,
    ACTIONS(821), 1,
      sym_identifier,
    ACTIONS(823), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(566), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15007] = 7,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym__,
    ACTIONS(821), 1,
      sym_identifier,
    ACTIONS(823), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(543), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15032] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(490), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15057] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(586), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15082] = 2,
    ACTIONS(847), 1,
      anon_sym_EQ,
    ACTIONS(845), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15097] = 2,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(849), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15112] = 7,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym__,
    ACTIONS(821), 1,
      sym_identifier,
    ACTIONS(823), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(467), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15137] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(373), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15162] = 7,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym__,
    ACTIONS(821), 1,
      sym_identifier,
    ACTIONS(823), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(548), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15187] = 2,
    ACTIONS(855), 1,
      anon_sym_EQ,
    ACTIONS(853), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15202] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(354), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15227] = 3,
    ACTIONS(859), 1,
      anon_sym_EQ,
    ACTIONS(861), 1,
      anon_sym_PIPE,
    ACTIONS(857), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
  [15244] = 2,
    ACTIONS(865), 1,
      anon_sym_EQ,
    ACTIONS(863), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15259] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(399), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15284] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(457), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15309] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(620), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15334] = 2,
    ACTIONS(869), 1,
      anon_sym_EQ,
    ACTIONS(867), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15349] = 2,
    ACTIONS(873), 1,
      anon_sym_EQ,
    ACTIONS(871), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15364] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(479), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15389] = 7,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      anon_sym__,
    ACTIONS(821), 1,
      sym_identifier,
    ACTIONS(823), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(518), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15414] = 2,
    ACTIONS(877), 1,
      anon_sym_EQ,
    ACTIONS(875), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15429] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(368), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15454] = 2,
    ACTIONS(881), 1,
      anon_sym_EQ,
    ACTIONS(879), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15469] = 2,
    ACTIONS(885), 1,
      anon_sym_EQ,
    ACTIONS(883), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15484] = 7,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    ACTIONS(771), 1,
      anon_sym__,
    STATE(340), 1,
      sym_qualified_type_identifier,
    STATE(563), 1,
      sym_type,
    STATE(390), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15509] = 1,
    ACTIONS(373), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [15521] = 9,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    ACTIONS(889), 1,
      anon_sym_EQ,
    ACTIONS(891), 1,
      anon_sym_LBRACK,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    STATE(328), 1,
      sym_type_parameters,
    STATE(375), 1,
      sym_parameters,
    STATE(515), 1,
      sym_block_expression,
    STATE(520), 1,
      sym_retuern_type,
  [15549] = 1,
    ACTIONS(729), 9,
      ts_builtin_sym_end,
      anon_sym_priv,
      anon_sym_pub,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [15561] = 1,
    ACTIONS(895), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [15573] = 9,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    ACTIONS(891), 1,
      anon_sym_LBRACK,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    ACTIONS(897), 1,
      anon_sym_EQ,
    STATE(338), 1,
      sym_type_parameters,
    STATE(355), 1,
      sym_parameters,
    STATE(539), 1,
      sym_retuern_type,
    STATE(540), 1,
      sym_block_expression,
  [15601] = 8,
    ACTIONS(899), 1,
      sym_lowercase_identifier,
    ACTIONS(901), 1,
      anon_sym_priv,
    ACTIONS(903), 1,
      anon_sym_pub,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    ACTIONS(907), 1,
      sym_mutability,
    STATE(322), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(574), 1,
      sym_visibility,
  [15626] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      aux_sym_interface_definition_repeat1,
    STATE(535), 1,
      sym_function_identifier,
    STATE(536), 1,
      sym_interface_method_declaration,
    STATE(600), 1,
      sym_qualified_type_identifier,
  [15651] = 4,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
      sym_pub_attribute,
    ACTIONS(915), 3,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
    ACTIONS(917), 3,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [15668] = 8,
    ACTIONS(899), 1,
      sym_lowercase_identifier,
    ACTIONS(901), 1,
      anon_sym_priv,
    ACTIONS(903), 1,
      anon_sym_pub,
    ACTIONS(907), 1,
      sym_mutability,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(574), 1,
      sym_visibility,
  [15693] = 8,
    ACTIONS(899), 1,
      sym_lowercase_identifier,
    ACTIONS(901), 1,
      anon_sym_priv,
    ACTIONS(903), 1,
      anon_sym_pub,
    ACTIONS(907), 1,
      sym_mutability,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(574), 1,
      sym_visibility,
  [15718] = 8,
    ACTIONS(899), 1,
      sym_lowercase_identifier,
    ACTIONS(901), 1,
      anon_sym_priv,
    ACTIONS(903), 1,
      anon_sym_pub,
    ACTIONS(907), 1,
      sym_mutability,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(574), 1,
      sym_visibility,
  [15743] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_interface_definition_repeat1,
    STATE(535), 1,
      sym_function_identifier,
    STATE(536), 1,
      sym_interface_method_declaration,
    STATE(600), 1,
      sym_qualified_type_identifier,
  [15768] = 8,
    ACTIONS(923), 1,
      sym_lowercase_identifier,
    ACTIONS(926), 1,
      anon_sym_priv,
    ACTIONS(929), 1,
      anon_sym_pub,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    ACTIONS(934), 1,
      sym_mutability,
    STATE(322), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(574), 1,
      sym_visibility,
  [15793] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    ACTIONS(937), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_interface_definition_repeat1,
    STATE(535), 1,
      sym_function_identifier,
    STATE(536), 1,
      sym_interface_method_declaration,
    STATE(600), 1,
      sym_qualified_type_identifier,
  [15818] = 8,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_interface_definition_repeat1,
    STATE(535), 1,
      sym_function_identifier,
    STATE(536), 1,
      sym_interface_method_declaration,
    STATE(600), 1,
      sym_qualified_type_identifier,
  [15843] = 8,
    ACTIONS(941), 1,
      sym_lowercase_identifier,
    ACTIONS(944), 1,
      anon_sym_RBRACE,
    ACTIONS(946), 1,
      sym_identifier,
    ACTIONS(949), 1,
      sym_package_identifier,
    STATE(325), 1,
      aux_sym_interface_definition_repeat1,
    STATE(535), 1,
      sym_function_identifier,
    STATE(536), 1,
      sym_interface_method_declaration,
    STATE(600), 1,
      sym_qualified_type_identifier,
  [15868] = 8,
    ACTIONS(899), 1,
      sym_lowercase_identifier,
    ACTIONS(901), 1,
      anon_sym_priv,
    ACTIONS(903), 1,
      anon_sym_pub,
    ACTIONS(907), 1,
      sym_mutability,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(574), 1,
      sym_visibility,
  [15893] = 8,
    ACTIONS(899), 1,
      sym_lowercase_identifier,
    ACTIONS(901), 1,
      anon_sym_priv,
    ACTIONS(903), 1,
      anon_sym_pub,
    ACTIONS(907), 1,
      sym_mutability,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      aux_sym_struct_definition_repeat1,
    STATE(558), 1,
      sym_struct_filed_declaration,
    STATE(574), 1,
      sym_visibility,
  [15918] = 7,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    ACTIONS(897), 1,
      anon_sym_EQ,
    STATE(355), 1,
      sym_parameters,
    STATE(539), 1,
      sym_retuern_type,
    STATE(540), 1,
      sym_block_expression,
  [15940] = 5,
    ACTIONS(954), 1,
      anon_sym_DQUOTE,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    STATE(336), 1,
      sym_interpolator,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(345), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [15958] = 4,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(960), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(334), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15974] = 4,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(962), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(334), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15990] = 4,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(331), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16006] = 6,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT,
    ACTIONS(966), 1,
      sym_lowercase_identifier,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
    STATE(450), 1,
      sym_filed_single_pattern,
    STATE(635), 1,
      sym_dotdot_pattern,
    STATE(495), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16026] = 4,
    ACTIONS(970), 1,
      anon_sym_DQUOTE,
    ACTIONS(972), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(975), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(334), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16042] = 5,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(978), 1,
      anon_sym_DQUOTE,
    STATE(337), 1,
      sym_interpolator,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(350), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16060] = 4,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(980), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(343), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16076] = 4,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(982), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(330), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16092] = 7,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    ACTIONS(984), 1,
      anon_sym_EQ,
    STATE(356), 1,
      sym_parameters,
    STATE(481), 1,
      sym_retuern_type,
    STATE(487), 1,
      sym_block_expression,
  [16114] = 4,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(982), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(334), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16130] = 3,
    ACTIONS(988), 1,
      anon_sym_LBRACK,
    STATE(400), 1,
      sym_type_arguments,
    ACTIONS(986), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16144] = 7,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    ACTIONS(861), 1,
      anon_sym_PIPE,
    ACTIONS(990), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_as,
    STATE(383), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(614), 1,
      sym_dotdot_pattern,
  [16166] = 6,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT,
    ACTIONS(966), 1,
      sym_lowercase_identifier,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(450), 1,
      sym_filed_single_pattern,
    STATE(644), 1,
      sym_dotdot_pattern,
    STATE(495), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16186] = 4,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(964), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(334), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16202] = 5,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    STATE(346), 1,
      sym_interpolator,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(335), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16220] = 5,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(998), 1,
      anon_sym_DQUOTE,
    STATE(332), 1,
      sym_interpolator,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(350), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16238] = 4,
    ACTIONS(956), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(339), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16254] = 2,
    ACTIONS(1004), 1,
      anon_sym_DASH_GT,
    ACTIONS(1002), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16265] = 2,
    ACTIONS(1008), 1,
      anon_sym_DASH_GT,
    ACTIONS(1006), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16276] = 5,
    ACTIONS(966), 1,
      sym_lowercase_identifier,
    ACTIONS(1010), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      sym_filed_single_pattern,
    STATE(618), 1,
      sym_struct_filed_pattern,
    STATE(495), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16293] = 3,
    ACTIONS(1012), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(1014), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(350), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16306] = 3,
    ACTIONS(861), 1,
      anon_sym_PIPE,
    ACTIONS(992), 1,
      anon_sym_as,
    ACTIONS(1017), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [16319] = 2,
    ACTIONS(1021), 1,
      anon_sym_DASH_GT,
    ACTIONS(1019), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16330] = 2,
    ACTIONS(1025), 1,
      anon_sym_DASH_GT,
    ACTIONS(1023), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16341] = 1,
    ACTIONS(1027), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16349] = 5,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    ACTIONS(984), 1,
      anon_sym_EQ,
    STATE(481), 1,
      sym_retuern_type,
    STATE(487), 1,
      sym_block_expression,
  [16365] = 5,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    ACTIONS(1029), 1,
      anon_sym_EQ,
    STATE(513), 1,
      sym_block_expression,
    STATE(564), 1,
      sym_retuern_type,
  [16381] = 1,
    ACTIONS(1031), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16389] = 5,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    STATE(311), 1,
      sym_function_identifier,
    STATE(600), 1,
      sym_qualified_type_identifier,
  [16405] = 1,
    ACTIONS(1033), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [16413] = 3,
    ACTIONS(861), 1,
      anon_sym_PIPE,
    ACTIONS(992), 1,
      anon_sym_as,
    ACTIONS(1035), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [16425] = 4,
    ACTIONS(1037), 1,
      anon_sym_LF,
    ACTIONS(1041), 1,
      anon_sym_LBRACK,
    STATE(503), 1,
      sym_type_parameters,
    ACTIONS(1039), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16439] = 5,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    ACTIONS(1045), 1,
      anon_sym_RBRACE,
    STATE(567), 1,
      sym_labeled_expression,
    STATE(602), 1,
      sym_labeled_expression_pun,
    STATE(643), 1,
      sym_struct_field_expression,
  [16455] = 1,
    ACTIONS(1047), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [16463] = 5,
    ACTIONS(861), 1,
      anon_sym_PIPE,
    ACTIONS(992), 1,
      anon_sym_as,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(477), 1,
      aux_sym_constructor_pattern_repeat1,
  [16479] = 1,
    ACTIONS(1053), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16487] = 5,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(909), 1,
      sym_lowercase_identifier,
    STATE(314), 1,
      sym_function_identifier,
    STATE(600), 1,
      sym_qualified_type_identifier,
  [16503] = 3,
    ACTIONS(998), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(350), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16515] = 1,
    ACTIONS(1055), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16523] = 5,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    STATE(567), 1,
      sym_labeled_expression,
    STATE(602), 1,
      sym_labeled_expression_pun,
    STATE(615), 1,
      sym_struct_field_expression,
  [16539] = 4,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    ACTIONS(1059), 1,
      anon_sym_RBRACE,
    STATE(504), 1,
      sym_struct_filed_expression,
    STATE(596), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [16553] = 4,
    ACTIONS(1061), 1,
      anon_sym_LF,
    ACTIONS(1065), 1,
      anon_sym_DASH_GT,
    STATE(491), 1,
      sym_retuern_type,
    ACTIONS(1063), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16567] = 1,
    ACTIONS(1067), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [16575] = 1,
    ACTIONS(1069), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16583] = 3,
    ACTIONS(954), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(367), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16595] = 5,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    ACTIONS(897), 1,
      anon_sym_EQ,
    STATE(539), 1,
      sym_retuern_type,
    STATE(540), 1,
      sym_block_expression,
  [16611] = 3,
    ACTIONS(1071), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_constructor_pattern_repeat1,
    ACTIONS(1017), 3,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [16623] = 4,
    ACTIONS(1041), 1,
      anon_sym_LBRACK,
    ACTIONS(1074), 1,
      anon_sym_LF,
    STATE(533), 1,
      sym_type_parameters,
    ACTIONS(1076), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16637] = 1,
    ACTIONS(1078), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [16645] = 4,
    ACTIONS(1065), 1,
      anon_sym_DASH_GT,
    ACTIONS(1080), 1,
      anon_sym_LF,
    STATE(483), 1,
      sym_retuern_type,
    ACTIONS(1082), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16659] = 4,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    ACTIONS(1084), 1,
      anon_sym_RBRACE,
    STATE(580), 1,
      sym_struct_filed_expression,
    STATE(596), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [16673] = 5,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(644), 1,
      sym_dotdot_pattern,
  [16689] = 5,
    ACTIONS(861), 1,
      anon_sym_PIPE,
    ACTIONS(992), 1,
      anon_sym_as,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    ACTIONS(1090), 1,
      anon_sym_COLON,
    ACTIONS(1092), 1,
      anon_sym_COMMA,
  [16705] = 5,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(1094), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(642), 1,
      sym_dotdot_pattern,
  [16721] = 5,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(861), 1,
      anon_sym_PIPE,
    ACTIONS(992), 1,
      anon_sym_as,
    ACTIONS(1096), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym_constructor_pattern_repeat1,
  [16737] = 5,
    ACTIONS(861), 1,
      anon_sym_PIPE,
    ACTIONS(992), 1,
      anon_sym_as,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
    ACTIONS(1100), 1,
      anon_sym_COMMA,
    STATE(459), 1,
      aux_sym_constructor_pattern_repeat1,
  [16753] = 5,
    ACTIONS(297), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1102), 1,
      anon_sym_RBRACE,
    ACTIONS(1104), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(647), 1,
      sym_dotdot_pattern,
  [16769] = 3,
    ACTIONS(978), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(350), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16781] = 4,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
    STATE(580), 1,
      sym_struct_filed_expression,
    STATE(596), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [16795] = 1,
    ACTIONS(1108), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16803] = 1,
    ACTIONS(1110), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16811] = 4,
    ACTIONS(1065), 1,
      anon_sym_DASH_GT,
    ACTIONS(1112), 1,
      anon_sym_LF,
    STATE(494), 1,
      sym_retuern_type,
    ACTIONS(1114), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16825] = 4,
    ACTIONS(1065), 1,
      anon_sym_DASH_GT,
    ACTIONS(1116), 1,
      anon_sym_LF,
    STATE(551), 1,
      sym_retuern_type,
    ACTIONS(1118), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16839] = 5,
    ACTIONS(861), 1,
      anon_sym_PIPE,
    ACTIONS(992), 1,
      anon_sym_as,
    ACTIONS(1120), 1,
      anon_sym_COLON,
    ACTIONS(1122), 1,
      anon_sym_EQ,
    STATE(606), 1,
      sym_type_annotation,
  [16855] = 4,
    ACTIONS(986), 1,
      anon_sym_LF,
    ACTIONS(1126), 1,
      anon_sym_LBRACK,
    STATE(514), 1,
      sym_type_arguments,
    ACTIONS(1124), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16869] = 3,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
    STATE(387), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16881] = 4,
    ACTIONS(1065), 1,
      anon_sym_DASH_GT,
    ACTIONS(1128), 1,
      anon_sym_LF,
    STATE(464), 1,
      sym_retuern_type,
    ACTIONS(1130), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16895] = 1,
    ACTIONS(1132), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16903] = 1,
    ACTIONS(1134), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [16911] = 1,
    ACTIONS(1136), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16919] = 1,
    ACTIONS(1138), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16927] = 5,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(1140), 1,
      sym_identifier,
    STATE(430), 1,
      sym_constraint,
    STATE(475), 1,
      sym_qualified_type_identifier,
    STATE(581), 1,
      sym_constraints,
  [16943] = 2,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    ACTIONS(1142), 4,
      anon_sym_priv,
      anon_sym_pub,
      sym_mutability,
      sym_lowercase_identifier,
  [16953] = 4,
    ACTIONS(1144), 1,
      anon_sym_RBRACE,
    ACTIONS(1146), 1,
      sym_uppercase_identifier,
    STATE(403), 1,
      aux_sym_enum_definition_repeat1,
    STATE(560), 1,
      sym_enum_constructor,
  [16966] = 3,
    ACTIONS(1151), 1,
      anon_sym_PLUS,
    STATE(404), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1149), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16977] = 4,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
    ACTIONS(1156), 1,
      sym_uppercase_identifier,
    STATE(403), 1,
      aux_sym_enum_definition_repeat1,
    STATE(560), 1,
      sym_enum_constructor,
  [16990] = 1,
    ACTIONS(1158), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [16997] = 3,
    ACTIONS(1019), 1,
      anon_sym_LF,
    ACTIONS(1162), 1,
      anon_sym_DASH_GT,
    ACTIONS(1160), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17008] = 3,
    ACTIONS(1006), 1,
      anon_sym_LF,
    ACTIONS(1166), 1,
      anon_sym_DASH_GT,
    ACTIONS(1164), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17019] = 1,
    ACTIONS(1168), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17026] = 2,
    ACTIONS(1170), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(1172), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
  [17035] = 4,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    STATE(206), 1,
      sym_block_expression,
    STATE(594), 1,
      sym_retuern_type,
  [17048] = 4,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
    ACTIONS(1156), 1,
      sym_uppercase_identifier,
    STATE(419), 1,
      aux_sym_enum_definition_repeat1,
    STATE(560), 1,
      sym_enum_constructor,
  [17061] = 4,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    STATE(565), 1,
      sym_block_expression,
    STATE(590), 1,
      sym_retuern_type,
  [17074] = 1,
    ACTIONS(1174), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17081] = 2,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(585), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [17090] = 2,
    ACTIONS(895), 1,
      anon_sym_LF,
    ACTIONS(1176), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [17099] = 3,
    ACTIONS(1023), 1,
      anon_sym_LF,
    ACTIONS(1180), 1,
      anon_sym_DASH_GT,
    ACTIONS(1178), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17110] = 3,
    ACTIONS(1120), 1,
      anon_sym_COLON,
    STATE(598), 1,
      sym_type_annotation,
    ACTIONS(1182), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17121] = 4,
    ACTIONS(1156), 1,
      sym_uppercase_identifier,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
    STATE(403), 1,
      aux_sym_enum_definition_repeat1,
    STATE(560), 1,
      sym_enum_constructor,
  [17134] = 4,
    ACTIONS(1156), 1,
      sym_uppercase_identifier,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
    STATE(405), 1,
      aux_sym_enum_definition_repeat1,
    STATE(560), 1,
      sym_enum_constructor,
  [17147] = 4,
    ACTIONS(1156), 1,
      sym_uppercase_identifier,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
    STATE(403), 1,
      aux_sym_enum_definition_repeat1,
    STATE(560), 1,
      sym_enum_constructor,
  [17160] = 3,
    ACTIONS(1043), 1,
      sym_lowercase_identifier,
    STATE(580), 1,
      sym_struct_filed_expression,
    STATE(596), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17171] = 2,
    ACTIONS(1190), 1,
      anon_sym_COLON,
    ACTIONS(1188), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [17180] = 3,
    ACTIONS(1002), 1,
      anon_sym_LF,
    ACTIONS(1194), 1,
      anon_sym_DASH_GT,
    ACTIONS(1192), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17191] = 3,
    ACTIONS(1196), 1,
      anon_sym_LF,
    ACTIONS(1200), 1,
      anon_sym_LPAREN,
    ACTIONS(1198), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17202] = 3,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
      sym_pub_attribute,
    ACTIONS(1134), 2,
      sym_mutability,
      sym_lowercase_identifier,
  [17213] = 3,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(1202), 1,
      anon_sym_if,
    STATE(185), 2,
      sym_block_expression,
      sym_if_expression,
  [17224] = 2,
    ACTIONS(1204), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(1206), 2,
      sym_unescaped_string_fragment,
      sym_escape_seqence,
  [17233] = 4,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      anon_sym_DASH_GT,
    STATE(125), 1,
      sym_block_expression,
    STATE(591), 1,
      sym_retuern_type,
  [17246] = 3,
    ACTIONS(1210), 1,
      anon_sym_PLUS,
    STATE(437), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17257] = 2,
    ACTIONS(1212), 1,
      sym_identifier,
    ACTIONS(944), 3,
      anon_sym_RBRACE,
      sym_lowercase_identifier,
      sym_package_identifier,
  [17266] = 4,
    ACTIONS(1156), 1,
      sym_uppercase_identifier,
    ACTIONS(1214), 1,
      anon_sym_RBRACE,
    STATE(421), 1,
      aux_sym_enum_definition_repeat1,
    STATE(560), 1,
      sym_enum_constructor,
  [17279] = 3,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(711), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [17290] = 3,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_enum_constructor_repeat1,
    ACTIONS(1219), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [17301] = 3,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(1224), 1,
      anon_sym_if,
    STATE(142), 2,
      sym_block_expression,
      sym_if_expression,
  [17312] = 3,
    ACTIONS(966), 1,
      sym_lowercase_identifier,
    STATE(450), 1,
      sym_filed_single_pattern,
    STATE(495), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [17323] = 3,
    ACTIONS(1210), 1,
      anon_sym_PLUS,
    STATE(404), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17334] = 4,
    ACTIONS(303), 1,
      sym_package_identifier,
    ACTIONS(1140), 1,
      sym_identifier,
    STATE(475), 1,
      sym_qualified_type_identifier,
    STATE(522), 1,
      sym_constraint,
  [17347] = 3,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_struct_filed_pattern_repeat1,
    ACTIONS(1228), 2,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [17358] = 2,
    ACTIONS(1233), 1,
      anon_sym_COLON,
    ACTIONS(1235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17366] = 3,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    ACTIONS(1237), 1,
      sym_lowercase_identifier,
    STATE(411), 1,
      sym_parameters,
  [17376] = 3,
    ACTIONS(1239), 1,
      sym_lowercase_identifier,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    STATE(576), 1,
      sym_parameter,
  [17386] = 2,
    ACTIONS(1243), 1,
      anon_sym_LF,
    ACTIONS(1245), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17394] = 1,
    ACTIONS(1247), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17400] = 3,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    ACTIONS(1249), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_apply_expression_repeat1,
  [17410] = 3,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_apply_expression_repeat1,
  [17420] = 3,
    ACTIONS(1253), 1,
      anon_sym_type,
    ACTIONS(1255), 1,
      anon_sym_struct,
    ACTIONS(1257), 1,
      anon_sym_enum,
  [17430] = 3,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_apply_expression_repeat1,
  [17440] = 2,
    ACTIONS(1261), 1,
      anon_sym_LF,
    ACTIONS(1263), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17448] = 1,
    ACTIONS(1228), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [17454] = 3,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_apply_expression_repeat1,
  [17464] = 3,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    ACTIONS(1269), 1,
      anon_sym_RBRACK,
    STATE(484), 1,
      aux_sym_enum_constructor_repeat1,
  [17474] = 3,
    ACTIONS(1271), 1,
      anon_sym_let,
    ACTIONS(1273), 1,
      anon_sym_func,
    ACTIONS(1275), 1,
      anon_sym_interface,
  [17484] = 3,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(1277), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_enum_constructor_repeat1,
  [17494] = 2,
    ACTIONS(1279), 1,
      anon_sym_LF,
    ACTIONS(1281), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17502] = 3,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_constructor_pattern_repeat1,
  [17512] = 3,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    ACTIONS(1287), 1,
      anon_sym_COMMA,
    STATE(471), 1,
      aux_sym_enum_constructor_repeat1,
  [17522] = 2,
    ACTIONS(1289), 1,
      anon_sym_LF,
    ACTIONS(1291), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17530] = 3,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(1293), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_constructor_pattern_repeat1,
  [17540] = 3,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_apply_expression_repeat1,
  [17550] = 2,
    ACTIONS(1297), 1,
      anon_sym_LF,
    ACTIONS(1299), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17558] = 2,
    ACTIONS(1301), 1,
      anon_sym_LF,
    ACTIONS(1303), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17566] = 2,
    ACTIONS(1305), 1,
      anon_sym_LF,
    ACTIONS(1307), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17574] = 2,
    ACTIONS(1080), 1,
      anon_sym_LF,
    ACTIONS(1082), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17582] = 3,
    ACTIONS(1309), 1,
      anon_sym_COMMA,
    ACTIONS(1312), 1,
      anon_sym_RBRACK,
    STATE(465), 1,
      aux_sym_type_parameters_repeat1,
  [17592] = 3,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    ACTIONS(1314), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_enum_constructor_repeat1,
  [17602] = 2,
    ACTIONS(1316), 1,
      anon_sym_LF,
    ACTIONS(1318), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17610] = 2,
    ACTIONS(1320), 1,
      anon_sym_LF,
    ACTIONS(1322), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17618] = 3,
    ACTIONS(1324), 1,
      anon_sym_RBRACK,
    ACTIONS(1326), 1,
      sym_identifier,
    STATE(579), 1,
      sym_type_identifier,
  [17628] = 2,
    ACTIONS(1328), 1,
      anon_sym_LF,
    ACTIONS(1330), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17636] = 3,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    ACTIONS(1332), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_enum_constructor_repeat1,
  [17646] = 3,
    ACTIONS(1334), 1,
      anon_sym_RBRACE,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      aux_sym_struct_field_expression_repeat1,
  [17656] = 2,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1339), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17664] = 3,
    ACTIONS(891), 1,
      anon_sym_LBRACK,
    ACTIONS(1341), 1,
      anon_sym_LBRACE,
    STATE(611), 1,
      sym_type_parameters,
  [17674] = 1,
    ACTIONS(1343), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [17680] = 2,
    ACTIONS(1345), 1,
      anon_sym_LF,
    ACTIONS(1347), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17688] = 3,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_constructor_pattern_repeat1,
  [17698] = 3,
    ACTIONS(891), 1,
      anon_sym_LBRACK,
    ACTIONS(1351), 1,
      anon_sym_LBRACE,
    STATE(608), 1,
      sym_type_parameters,
  [17708] = 1,
    ACTIONS(1219), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17714] = 3,
    ACTIONS(1120), 1,
      anon_sym_COLON,
    ACTIONS(1353), 1,
      anon_sym_EQ,
    STATE(607), 1,
      sym_type_annotation,
  [17724] = 3,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(1029), 1,
      anon_sym_EQ,
    STATE(513), 1,
      sym_block_expression,
  [17734] = 3,
    ACTIONS(773), 1,
      anon_sym_RBRACK,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_enum_constructor_repeat1,
  [17744] = 2,
    ACTIONS(1061), 1,
      anon_sym_LF,
    ACTIONS(1063), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17752] = 3,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    ACTIONS(1357), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_enum_constructor_repeat1,
  [17762] = 2,
    ACTIONS(1359), 1,
      anon_sym_LF,
    ACTIONS(1361), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17770] = 3,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    ACTIONS(1363), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_apply_expression_repeat1,
  [17780] = 2,
    ACTIONS(1365), 1,
      anon_sym_LF,
    ACTIONS(1367), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17788] = 3,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_apply_expression_repeat1,
  [17798] = 3,
    ACTIONS(1120), 1,
      anon_sym_COLON,
    ACTIONS(1371), 1,
      anon_sym_EQ,
    STATE(603), 1,
      sym_type_annotation,
  [17808] = 3,
    ACTIONS(1373), 1,
      anon_sym_COMMA,
    ACTIONS(1375), 1,
      anon_sym_RBRACK,
    STATE(482), 1,
      aux_sym_enum_constructor_repeat1,
  [17818] = 2,
    ACTIONS(1112), 1,
      anon_sym_LF,
    ACTIONS(1114), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17826] = 3,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
    ACTIONS(1377), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      aux_sym_struct_field_expression_repeat1,
  [17836] = 3,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_enum_constructor_repeat1,
  [17846] = 2,
    ACTIONS(1381), 1,
      anon_sym_LF,
    ACTIONS(1383), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17854] = 1,
    ACTIONS(1385), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [17860] = 3,
    ACTIONS(1326), 1,
      sym_identifier,
    ACTIONS(1387), 1,
      anon_sym_RBRACK,
    STATE(579), 1,
      sym_type_identifier,
  [17870] = 3,
    ACTIONS(1389), 1,
      anon_sym_RPAREN,
    ACTIONS(1391), 1,
      anon_sym_COMMA,
    STATE(550), 1,
      aux_sym_parameters_repeat1,
  [17880] = 2,
    ACTIONS(1108), 1,
      anon_sym_LF,
    ACTIONS(1393), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17888] = 2,
    ACTIONS(1110), 1,
      anon_sym_LF,
    ACTIONS(1395), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17896] = 2,
    ACTIONS(1399), 1,
      anon_sym_COLON,
    ACTIONS(1397), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [17904] = 3,
    ACTIONS(1239), 1,
      sym_lowercase_identifier,
    ACTIONS(1389), 1,
      anon_sym_RPAREN,
    STATE(576), 1,
      sym_parameter,
  [17914] = 1,
    ACTIONS(1401), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17920] = 2,
    ACTIONS(1074), 1,
      anon_sym_LF,
    ACTIONS(1076), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17928] = 3,
    ACTIONS(1403), 1,
      anon_sym_RBRACE,
    ACTIONS(1405), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      aux_sym_struct_field_expression_repeat1,
  [17938] = 2,
    ACTIONS(1407), 1,
      anon_sym_LF,
    ACTIONS(1409), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17946] = 3,
    ACTIONS(1239), 1,
      sym_lowercase_identifier,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
    STATE(553), 1,
      sym_parameter,
  [17956] = 3,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    ACTIONS(1415), 1,
      anon_sym_COMMA,
    STATE(493), 1,
      aux_sym_enum_constructor_repeat1,
  [17966] = 3,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    ACTIONS(1419), 1,
      anon_sym_RBRACK,
    STATE(465), 1,
      aux_sym_type_parameters_repeat1,
  [17976] = 3,
    ACTIONS(1326), 1,
      sym_identifier,
    ACTIONS(1419), 1,
      anon_sym_RBRACK,
    STATE(579), 1,
      sym_type_identifier,
  [17986] = 3,
    ACTIONS(861), 1,
      anon_sym_PIPE,
    ACTIONS(992), 1,
      anon_sym_as,
    ACTIONS(1421), 1,
      anon_sym_EQ_GT,
  [17996] = 2,
    ACTIONS(1423), 1,
      anon_sym_LF,
    ACTIONS(1425), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18004] = 2,
    ACTIONS(1427), 1,
      anon_sym_LF,
    ACTIONS(1429), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18012] = 2,
    ACTIONS(1431), 1,
      anon_sym_LF,
    ACTIONS(1433), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18020] = 2,
    ACTIONS(1138), 1,
      anon_sym_LF,
    ACTIONS(1435), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18028] = 2,
    ACTIONS(1437), 1,
      anon_sym_LF,
    ACTIONS(1439), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18036] = 3,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
    ACTIONS(1443), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym_enum_constructor_repeat1,
  [18046] = 2,
    ACTIONS(1445), 1,
      anon_sym_LF,
    ACTIONS(1447), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18054] = 2,
    ACTIONS(1449), 1,
      anon_sym_LF,
    ACTIONS(1451), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18062] = 2,
    ACTIONS(1453), 1,
      anon_sym_LF,
    ACTIONS(1455), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18070] = 3,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(897), 1,
      anon_sym_EQ,
    STATE(540), 1,
      sym_block_expression,
  [18080] = 2,
    ACTIONS(1457), 1,
      anon_sym_LF,
    ACTIONS(1459), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18088] = 1,
    ACTIONS(1149), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [18094] = 3,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(1461), 1,
      anon_sym_COMMA,
    STATE(433), 1,
      aux_sym_apply_expression_repeat1,
  [18104] = 1,
    ACTIONS(1463), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18110] = 3,
    ACTIONS(1465), 1,
      anon_sym_COMMA,
    ACTIONS(1467), 1,
      anon_sym_RBRACK,
    STATE(465), 1,
      aux_sym_type_parameters_repeat1,
  [18120] = 2,
    ACTIONS(1168), 1,
      anon_sym_LF,
    ACTIONS(1469), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18128] = 3,
    ACTIONS(1326), 1,
      sym_identifier,
    ACTIONS(1467), 1,
      anon_sym_RBRACK,
    STATE(579), 1,
      sym_type_identifier,
  [18138] = 2,
    ACTIONS(1174), 1,
      anon_sym_LF,
    ACTIONS(1471), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18146] = 3,
    ACTIONS(891), 1,
      anon_sym_LBRACK,
    ACTIONS(1473), 1,
      anon_sym_LBRACE,
    STATE(646), 1,
      sym_type_parameters,
  [18156] = 3,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    ACTIONS(1477), 1,
      anon_sym_RBRACK,
    STATE(508), 1,
      aux_sym_type_parameters_repeat1,
  [18166] = 2,
    ACTIONS(1479), 1,
      anon_sym_LF,
    ACTIONS(1481), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18174] = 2,
    ACTIONS(1483), 1,
      anon_sym_LF,
    ACTIONS(1485), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18182] = 2,
    ACTIONS(1487), 1,
      anon_sym_LF,
    ACTIONS(1489), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18190] = 2,
    ACTIONS(1491), 1,
      anon_sym_LF,
    ACTIONS(1493), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18198] = 3,
    ACTIONS(891), 1,
      anon_sym_LBRACK,
    ACTIONS(1495), 1,
      anon_sym_LPAREN,
    STATE(633), 1,
      sym_type_parameters,
  [18208] = 2,
    ACTIONS(1497), 1,
      anon_sym_LF,
    ACTIONS(1499), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18216] = 3,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(1501), 1,
      anon_sym_COMMA,
    STATE(466), 1,
      aux_sym_enum_constructor_repeat1,
  [18226] = 3,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(1501), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_enum_constructor_repeat1,
  [18236] = 3,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(984), 1,
      anon_sym_EQ,
    STATE(487), 1,
      sym_block_expression,
  [18246] = 2,
    ACTIONS(1503), 1,
      anon_sym_LF,
    ACTIONS(1505), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18254] = 3,
    ACTIONS(891), 1,
      anon_sym_LBRACK,
    ACTIONS(1507), 1,
      anon_sym_LBRACE,
    STATE(630), 1,
      sym_type_parameters,
  [18264] = 3,
    ACTIONS(1120), 1,
      anon_sym_COLON,
    ACTIONS(1509), 1,
      anon_sym_EQ,
    STATE(599), 1,
      sym_type_annotation,
  [18274] = 2,
    ACTIONS(1069), 1,
      anon_sym_LF,
    ACTIONS(1511), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18282] = 2,
    ACTIONS(1513), 1,
      anon_sym_LF,
    ACTIONS(1515), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18290] = 2,
    ACTIONS(1031), 1,
      anon_sym_LF,
    ACTIONS(1517), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18298] = 3,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    ACTIONS(1521), 1,
      anon_sym_RBRACK,
    STATE(525), 1,
      aux_sym_type_parameters_repeat1,
  [18308] = 2,
    ACTIONS(1523), 1,
      anon_sym_LF,
    ACTIONS(1525), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18316] = 2,
    ACTIONS(1055), 1,
      anon_sym_LF,
    ACTIONS(1527), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18324] = 2,
    ACTIONS(643), 1,
      anon_sym_LF,
    ACTIONS(645), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18332] = 3,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
    ACTIONS(1531), 1,
      anon_sym_COMMA,
    STATE(550), 1,
      aux_sym_parameters_repeat1,
  [18342] = 2,
    ACTIONS(1128), 1,
      anon_sym_LF,
    ACTIONS(1130), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18350] = 2,
    ACTIONS(1027), 1,
      anon_sym_LF,
    ACTIONS(1534), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18358] = 3,
    ACTIONS(1536), 1,
      anon_sym_RPAREN,
    ACTIONS(1538), 1,
      anon_sym_COMMA,
    STATE(497), 1,
      aux_sym_parameters_repeat1,
  [18368] = 2,
    ACTIONS(1540), 1,
      anon_sym_LF,
    ACTIONS(1542), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18376] = 2,
    ACTIONS(1053), 1,
      anon_sym_LF,
    ACTIONS(1544), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18384] = 2,
    ACTIONS(1546), 1,
      anon_sym_LF,
    ACTIONS(1548), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18392] = 1,
    ACTIONS(1550), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18398] = 2,
    ACTIONS(1552), 1,
      anon_sym_LF,
    ACTIONS(1554), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18406] = 2,
    ACTIONS(1556), 1,
      anon_sym_LF,
    ACTIONS(1558), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18414] = 2,
    ACTIONS(1560), 1,
      anon_sym_LF,
    ACTIONS(1562), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18422] = 2,
    ACTIONS(1132), 1,
      anon_sym_LF,
    ACTIONS(1564), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18430] = 3,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    ACTIONS(1566), 1,
      anon_sym_COMMA,
    STATE(538), 1,
      aux_sym_enum_constructor_repeat1,
  [18440] = 1,
    ACTIONS(1568), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [18446] = 3,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(1570), 1,
      anon_sym_EQ,
    STATE(556), 1,
      sym_block_expression,
  [18456] = 2,
    ACTIONS(1572), 1,
      anon_sym_LF,
    ACTIONS(1574), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18464] = 2,
    ACTIONS(1136), 1,
      anon_sym_LF,
    ACTIONS(1576), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18472] = 2,
    ACTIONS(1578), 1,
      anon_sym_RBRACE,
    ACTIONS(1580), 1,
      anon_sym_COMMA,
  [18479] = 2,
    ACTIONS(1582), 1,
      anon_sym_DQUOTE,
    STATE(556), 1,
      sym_string_literal,
  [18486] = 2,
    ACTIONS(1584), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1586), 1,
      sym_escape_seqence,
  [18493] = 2,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    STATE(411), 1,
      sym_parameters,
  [18500] = 2,
    ACTIONS(1326), 1,
      sym_identifier,
    STATE(579), 1,
      sym_type_identifier,
  [18507] = 2,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    STATE(429), 1,
      sym_parameters,
  [18514] = 2,
    ACTIONS(1588), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1590), 1,
      sym_escape_seqence,
  [18521] = 2,
    ACTIONS(1592), 1,
      sym_lowercase_identifier,
    ACTIONS(1594), 1,
      sym_mutability,
  [18528] = 2,
    ACTIONS(1326), 1,
      sym_identifier,
    STATE(530), 1,
      sym_type_identifier,
  [18535] = 1,
    ACTIONS(1529), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18540] = 2,
    ACTIONS(1582), 1,
      anon_sym_DQUOTE,
    STATE(463), 1,
      sym_string_literal,
  [18547] = 2,
    ACTIONS(1582), 1,
      anon_sym_DQUOTE,
    STATE(485), 1,
      sym_string_literal,
  [18554] = 1,
    ACTIONS(1312), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18559] = 1,
    ACTIONS(1334), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [18564] = 1,
    ACTIONS(1596), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18569] = 2,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(577), 1,
      sym_string_literal,
  [18576] = 2,
    ACTIONS(1239), 1,
      sym_lowercase_identifier,
    STATE(576), 1,
      sym_parameter,
  [18583] = 2,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(568), 1,
      sym_string_literal,
  [18590] = 2,
    ACTIONS(1582), 1,
      anon_sym_DQUOTE,
    STATE(487), 1,
      sym_string_literal,
  [18597] = 1,
    ACTIONS(1423), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [18602] = 2,
    ACTIONS(1582), 1,
      anon_sym_DQUOTE,
    STATE(513), 1,
      sym_string_literal,
  [18609] = 2,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(587), 1,
      sym_string_literal,
  [18616] = 2,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(578), 1,
      sym_string_literal,
  [18623] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(461), 1,
      sym_block_expression,
  [18630] = 2,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_block_expression,
  [18637] = 2,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    STATE(413), 1,
      sym_parameters,
  [18644] = 1,
    ACTIONS(1144), 2,
      anon_sym_RBRACE,
      sym_uppercase_identifier,
  [18649] = 2,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_block_expression,
  [18656] = 2,
    ACTIONS(1326), 1,
      sym_identifier,
    STATE(546), 1,
      sym_type_identifier,
  [18663] = 1,
    ACTIONS(1598), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [18668] = 2,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(585), 1,
      sym_string_literal,
  [18675] = 1,
    ACTIONS(1600), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18680] = 1,
    ACTIONS(1602), 1,
      anon_sym_EQ,
  [18684] = 1,
    ACTIONS(1604), 1,
      sym_colon_colon_lowercase_identifier,
  [18688] = 1,
    ACTIONS(1606), 1,
      anon_sym_RBRACE,
  [18692] = 1,
    ACTIONS(1580), 1,
      anon_sym_COMMA,
  [18696] = 1,
    ACTIONS(1608), 1,
      anon_sym_EQ,
  [18700] = 1,
    ACTIONS(1610), 1,
      anon_sym_SQUOTE,
  [18704] = 1,
    ACTIONS(1612), 1,
      anon_sym_RBRACE,
  [18708] = 1,
    ACTIONS(1614), 1,
      anon_sym_EQ,
  [18712] = 1,
    ACTIONS(1509), 1,
      anon_sym_EQ,
  [18716] = 1,
    ACTIONS(1507), 1,
      anon_sym_LBRACE,
  [18720] = 1,
    ACTIONS(1616), 1,
      anon_sym_SQUOTE,
  [18724] = 1,
    ACTIONS(1618), 1,
      anon_sym_LPAREN,
  [18728] = 1,
    ACTIONS(1473), 1,
      anon_sym_LBRACE,
  [18732] = 1,
    ACTIONS(1620), 1,
      sym_lowercase_identifier,
  [18736] = 1,
    ACTIONS(1622), 1,
      anon_sym_RBRACK,
  [18740] = 1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
  [18744] = 1,
    ACTIONS(1624), 1,
      anon_sym_RBRACE,
  [18748] = 1,
    ACTIONS(1626), 1,
      sym_dot_identifier,
  [18752] = 1,
    ACTIONS(1628), 1,
      anon_sym_RPAREN,
  [18756] = 1,
    ACTIONS(1630), 1,
      anon_sym_RBRACE,
  [18760] = 1,
    ACTIONS(1632), 1,
      sym_identifier,
  [18764] = 1,
    ACTIONS(1634), 1,
      anon_sym_RPAREN,
  [18768] = 1,
    ACTIONS(1636), 1,
      sym_lowercase_identifier,
  [18772] = 1,
    ACTIONS(1638), 1,
      sym_lowercase_identifier,
  [18776] = 1,
    ACTIONS(1640), 1,
      sym_identifier,
  [18780] = 1,
    ACTIONS(1642), 1,
      anon_sym_COLON,
  [18784] = 1,
    ACTIONS(1644), 1,
      sym_identifier,
  [18788] = 1,
    ACTIONS(1646), 1,
      sym_identifier,
  [18792] = 1,
    ACTIONS(1648), 1,
      anon_sym_LBRACE,
  [18796] = 1,
    ACTIONS(1650), 1,
      sym_colon_colon_uppercase_identifier,
  [18800] = 1,
    ACTIONS(1652), 1,
      sym_dot_identifier,
  [18804] = 1,
    ACTIONS(1654), 1,
      anon_sym_LBRACE,
  [18808] = 1,
    ACTIONS(1656), 1,
      sym_dot_identifier,
  [18812] = 1,
    ACTIONS(1658), 1,
      anon_sym_RPAREN,
  [18816] = 1,
    ACTIONS(1660), 1,
      anon_sym_LPAREN,
  [18820] = 1,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
  [18824] = 1,
    ACTIONS(1662), 1,
      anon_sym_RBRACE,
  [18828] = 1,
    ACTIONS(1664), 1,
      anon_sym_LBRACE,
  [18832] = 1,
    ACTIONS(1666), 1,
      anon_sym_EQ,
  [18836] = 1,
    ACTIONS(1668), 1,
      anon_sym_COLON_EQ,
  [18840] = 1,
    ACTIONS(1670), 1,
      sym_lowercase_identifier,
  [18844] = 1,
    ACTIONS(1672), 1,
      anon_sym_readonly,
  [18848] = 1,
    ACTIONS(1674), 1,
      anon_sym_COLON,
  [18852] = 1,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
  [18856] = 1,
    ACTIONS(1676), 1,
      anon_sym_RBRACE,
  [18860] = 1,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
  [18864] = 1,
    ACTIONS(1678), 1,
      anon_sym_RPAREN,
  [18868] = 1,
    ACTIONS(1680), 1,
      anon_sym_LBRACE,
  [18872] = 1,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
  [18876] = 1,
    ACTIONS(1682), 1,
      sym_lowercase_identifier,
  [18880] = 1,
    ACTIONS(1684), 1,
      anon_sym_COLON,
  [18884] = 1,
    ACTIONS(1686), 1,
      sym_colon_colon_uppercase_identifier,
  [18888] = 1,
    ACTIONS(1688), 1,
      ts_builtin_sym_end,
  [18892] = 1,
    ACTIONS(1690), 1,
      sym_identifier,
  [18896] = 1,
    ACTIONS(1692), 1,
      sym_dot_identifier,
  [18900] = 1,
    ACTIONS(1694), 1,
      sym_lowercase_identifier,
  [18904] = 1,
    ACTIONS(1696), 1,
      anon_sym_LPAREN,
  [18908] = 1,
    ACTIONS(1698), 1,
      sym_identifier,
  [18912] = 1,
    ACTIONS(1700), 1,
      sym_identifier,
  [18916] = 1,
    ACTIONS(1702), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 274,
  [SMALL_STATE(7)] = 411,
  [SMALL_STATE(8)] = 548,
  [SMALL_STATE(9)] = 685,
  [SMALL_STATE(10)] = 822,
  [SMALL_STATE(11)] = 959,
  [SMALL_STATE(12)] = 1059,
  [SMALL_STATE(13)] = 1157,
  [SMALL_STATE(14)] = 1255,
  [SMALL_STATE(15)] = 1353,
  [SMALL_STATE(16)] = 1451,
  [SMALL_STATE(17)] = 1549,
  [SMALL_STATE(18)] = 1647,
  [SMALL_STATE(19)] = 1745,
  [SMALL_STATE(20)] = 1843,
  [SMALL_STATE(21)] = 1941,
  [SMALL_STATE(22)] = 2039,
  [SMALL_STATE(23)] = 2137,
  [SMALL_STATE(24)] = 2235,
  [SMALL_STATE(25)] = 2333,
  [SMALL_STATE(26)] = 2431,
  [SMALL_STATE(27)] = 2529,
  [SMALL_STATE(28)] = 2627,
  [SMALL_STATE(29)] = 2725,
  [SMALL_STATE(30)] = 2823,
  [SMALL_STATE(31)] = 2921,
  [SMALL_STATE(32)] = 3019,
  [SMALL_STATE(33)] = 3117,
  [SMALL_STATE(34)] = 3215,
  [SMALL_STATE(35)] = 3313,
  [SMALL_STATE(36)] = 3411,
  [SMALL_STATE(37)] = 3506,
  [SMALL_STATE(38)] = 3601,
  [SMALL_STATE(39)] = 3696,
  [SMALL_STATE(40)] = 3791,
  [SMALL_STATE(41)] = 3886,
  [SMALL_STATE(42)] = 3981,
  [SMALL_STATE(43)] = 4076,
  [SMALL_STATE(44)] = 4171,
  [SMALL_STATE(45)] = 4266,
  [SMALL_STATE(46)] = 4361,
  [SMALL_STATE(47)] = 4456,
  [SMALL_STATE(48)] = 4551,
  [SMALL_STATE(49)] = 4646,
  [SMALL_STATE(50)] = 4741,
  [SMALL_STATE(51)] = 4836,
  [SMALL_STATE(52)] = 4931,
  [SMALL_STATE(53)] = 5026,
  [SMALL_STATE(54)] = 5121,
  [SMALL_STATE(55)] = 5216,
  [SMALL_STATE(56)] = 5311,
  [SMALL_STATE(57)] = 5406,
  [SMALL_STATE(58)] = 5501,
  [SMALL_STATE(59)] = 5596,
  [SMALL_STATE(60)] = 5691,
  [SMALL_STATE(61)] = 5786,
  [SMALL_STATE(62)] = 5881,
  [SMALL_STATE(63)] = 5976,
  [SMALL_STATE(64)] = 6071,
  [SMALL_STATE(65)] = 6166,
  [SMALL_STATE(66)] = 6261,
  [SMALL_STATE(67)] = 6356,
  [SMALL_STATE(68)] = 6451,
  [SMALL_STATE(69)] = 6546,
  [SMALL_STATE(70)] = 6641,
  [SMALL_STATE(71)] = 6736,
  [SMALL_STATE(72)] = 6831,
  [SMALL_STATE(73)] = 6871,
  [SMALL_STATE(74)] = 6911,
  [SMALL_STATE(75)] = 6950,
  [SMALL_STATE(76)] = 6989,
  [SMALL_STATE(77)] = 7028,
  [SMALL_STATE(78)] = 7067,
  [SMALL_STATE(79)] = 7106,
  [SMALL_STATE(80)] = 7184,
  [SMALL_STATE(81)] = 7259,
  [SMALL_STATE(82)] = 7334,
  [SMALL_STATE(83)] = 7409,
  [SMALL_STATE(84)] = 7484,
  [SMALL_STATE(85)] = 7559,
  [SMALL_STATE(86)] = 7634,
  [SMALL_STATE(87)] = 7709,
  [SMALL_STATE(88)] = 7749,
  [SMALL_STATE(89)] = 7818,
  [SMALL_STATE(90)] = 7887,
  [SMALL_STATE(91)] = 7956,
  [SMALL_STATE(92)] = 8025,
  [SMALL_STATE(93)] = 8062,
  [SMALL_STATE(94)] = 8131,
  [SMALL_STATE(95)] = 8174,
  [SMALL_STATE(96)] = 8215,
  [SMALL_STATE(97)] = 8250,
  [SMALL_STATE(98)] = 8319,
  [SMALL_STATE(99)] = 8388,
  [SMALL_STATE(100)] = 8423,
  [SMALL_STATE(101)] = 8457,
  [SMALL_STATE(102)] = 8491,
  [SMALL_STATE(103)] = 8525,
  [SMALL_STATE(104)] = 8559,
  [SMALL_STATE(105)] = 8593,
  [SMALL_STATE(106)] = 8627,
  [SMALL_STATE(107)] = 8661,
  [SMALL_STATE(108)] = 8695,
  [SMALL_STATE(109)] = 8761,
  [SMALL_STATE(110)] = 8827,
  [SMALL_STATE(111)] = 8893,
  [SMALL_STATE(112)] = 8943,
  [SMALL_STATE(113)] = 8991,
  [SMALL_STATE(114)] = 9035,
  [SMALL_STATE(115)] = 9069,
  [SMALL_STATE(116)] = 9135,
  [SMALL_STATE(117)] = 9169,
  [SMALL_STATE(118)] = 9235,
  [SMALL_STATE(119)] = 9269,
  [SMALL_STATE(120)] = 9305,
  [SMALL_STATE(121)] = 9341,
  [SMALL_STATE(122)] = 9381,
  [SMALL_STATE(123)] = 9415,
  [SMALL_STATE(124)] = 9449,
  [SMALL_STATE(125)] = 9483,
  [SMALL_STATE(126)] = 9517,
  [SMALL_STATE(127)] = 9551,
  [SMALL_STATE(128)] = 9585,
  [SMALL_STATE(129)] = 9619,
  [SMALL_STATE(130)] = 9653,
  [SMALL_STATE(131)] = 9687,
  [SMALL_STATE(132)] = 9721,
  [SMALL_STATE(133)] = 9755,
  [SMALL_STATE(134)] = 9789,
  [SMALL_STATE(135)] = 9823,
  [SMALL_STATE(136)] = 9857,
  [SMALL_STATE(137)] = 9891,
  [SMALL_STATE(138)] = 9925,
  [SMALL_STATE(139)] = 9959,
  [SMALL_STATE(140)] = 9993,
  [SMALL_STATE(141)] = 10027,
  [SMALL_STATE(142)] = 10061,
  [SMALL_STATE(143)] = 10095,
  [SMALL_STATE(144)] = 10129,
  [SMALL_STATE(145)] = 10163,
  [SMALL_STATE(146)] = 10199,
  [SMALL_STATE(147)] = 10265,
  [SMALL_STATE(148)] = 10299,
  [SMALL_STATE(149)] = 10333,
  [SMALL_STATE(150)] = 10367,
  [SMALL_STATE(151)] = 10401,
  [SMALL_STATE(152)] = 10467,
  [SMALL_STATE(153)] = 10501,
  [SMALL_STATE(154)] = 10535,
  [SMALL_STATE(155)] = 10572,
  [SMALL_STATE(156)] = 10607,
  [SMALL_STATE(157)] = 10642,
  [SMALL_STATE(158)] = 10674,
  [SMALL_STATE(159)] = 10708,
  [SMALL_STATE(160)] = 10748,
  [SMALL_STATE(161)] = 10782,
  [SMALL_STATE(162)] = 10814,
  [SMALL_STATE(163)] = 10846,
  [SMALL_STATE(164)] = 10879,
  [SMALL_STATE(165)] = 10910,
  [SMALL_STATE(166)] = 10941,
  [SMALL_STATE(167)] = 10972,
  [SMALL_STATE(168)] = 11003,
  [SMALL_STATE(169)] = 11034,
  [SMALL_STATE(170)] = 11065,
  [SMALL_STATE(171)] = 11096,
  [SMALL_STATE(172)] = 11127,
  [SMALL_STATE(173)] = 11158,
  [SMALL_STATE(174)] = 11189,
  [SMALL_STATE(175)] = 11220,
  [SMALL_STATE(176)] = 11251,
  [SMALL_STATE(177)] = 11282,
  [SMALL_STATE(178)] = 11313,
  [SMALL_STATE(179)] = 11344,
  [SMALL_STATE(180)] = 11375,
  [SMALL_STATE(181)] = 11406,
  [SMALL_STATE(182)] = 11449,
  [SMALL_STATE(183)] = 11480,
  [SMALL_STATE(184)] = 11511,
  [SMALL_STATE(185)] = 11542,
  [SMALL_STATE(186)] = 11573,
  [SMALL_STATE(187)] = 11604,
  [SMALL_STATE(188)] = 11647,
  [SMALL_STATE(189)] = 11688,
  [SMALL_STATE(190)] = 11719,
  [SMALL_STATE(191)] = 11750,
  [SMALL_STATE(192)] = 11781,
  [SMALL_STATE(193)] = 11820,
  [SMALL_STATE(194)] = 11851,
  [SMALL_STATE(195)] = 11882,
  [SMALL_STATE(196)] = 11913,
  [SMALL_STATE(197)] = 11950,
  [SMALL_STATE(198)] = 11981,
  [SMALL_STATE(199)] = 12012,
  [SMALL_STATE(200)] = 12045,
  [SMALL_STATE(201)] = 12078,
  [SMALL_STATE(202)] = 12109,
  [SMALL_STATE(203)] = 12144,
  [SMALL_STATE(204)] = 12175,
  [SMALL_STATE(205)] = 12206,
  [SMALL_STATE(206)] = 12237,
  [SMALL_STATE(207)] = 12268,
  [SMALL_STATE(208)] = 12299,
  [SMALL_STATE(209)] = 12330,
  [SMALL_STATE(210)] = 12361,
  [SMALL_STATE(211)] = 12404,
  [SMALL_STATE(212)] = 12435,
  [SMALL_STATE(213)] = 12466,
  [SMALL_STATE(214)] = 12497,
  [SMALL_STATE(215)] = 12528,
  [SMALL_STATE(216)] = 12559,
  [SMALL_STATE(217)] = 12590,
  [SMALL_STATE(218)] = 12621,
  [SMALL_STATE(219)] = 12652,
  [SMALL_STATE(220)] = 12683,
  [SMALL_STATE(221)] = 12723,
  [SMALL_STATE(222)] = 12763,
  [SMALL_STATE(223)] = 12818,
  [SMALL_STATE(224)] = 12873,
  [SMALL_STATE(225)] = 12917,
  [SMALL_STATE(226)] = 12961,
  [SMALL_STATE(227)] = 13013,
  [SMALL_STATE(228)] = 13057,
  [SMALL_STATE(229)] = 13101,
  [SMALL_STATE(230)] = 13153,
  [SMALL_STATE(231)] = 13197,
  [SMALL_STATE(232)] = 13241,
  [SMALL_STATE(233)] = 13293,
  [SMALL_STATE(234)] = 13337,
  [SMALL_STATE(235)] = 13381,
  [SMALL_STATE(236)] = 13433,
  [SMALL_STATE(237)] = 13477,
  [SMALL_STATE(238)] = 13529,
  [SMALL_STATE(239)] = 13573,
  [SMALL_STATE(240)] = 13617,
  [SMALL_STATE(241)] = 13661,
  [SMALL_STATE(242)] = 13713,
  [SMALL_STATE(243)] = 13761,
  [SMALL_STATE(244)] = 13808,
  [SMALL_STATE(245)] = 13857,
  [SMALL_STATE(246)] = 13906,
  [SMALL_STATE(247)] = 13952,
  [SMALL_STATE(248)] = 13998,
  [SMALL_STATE(249)] = 14044,
  [SMALL_STATE(250)] = 14087,
  [SMALL_STATE(251)] = 14135,
  [SMALL_STATE(252)] = 14183,
  [SMALL_STATE(253)] = 14207,
  [SMALL_STATE(254)] = 14228,
  [SMALL_STATE(255)] = 14248,
  [SMALL_STATE(256)] = 14276,
  [SMALL_STATE(257)] = 14304,
  [SMALL_STATE(258)] = 14332,
  [SMALL_STATE(259)] = 14360,
  [SMALL_STATE(260)] = 14388,
  [SMALL_STATE(261)] = 14416,
  [SMALL_STATE(262)] = 14444,
  [SMALL_STATE(263)] = 14472,
  [SMALL_STATE(264)] = 14500,
  [SMALL_STATE(265)] = 14528,
  [SMALL_STATE(266)] = 14556,
  [SMALL_STATE(267)] = 14584,
  [SMALL_STATE(268)] = 14612,
  [SMALL_STATE(269)] = 14640,
  [SMALL_STATE(270)] = 14668,
  [SMALL_STATE(271)] = 14686,
  [SMALL_STATE(272)] = 14714,
  [SMALL_STATE(273)] = 14742,
  [SMALL_STATE(274)] = 14767,
  [SMALL_STATE(275)] = 14782,
  [SMALL_STATE(276)] = 14807,
  [SMALL_STATE(277)] = 14822,
  [SMALL_STATE(278)] = 14837,
  [SMALL_STATE(279)] = 14862,
  [SMALL_STATE(280)] = 14887,
  [SMALL_STATE(281)] = 14902,
  [SMALL_STATE(282)] = 14927,
  [SMALL_STATE(283)] = 14942,
  [SMALL_STATE(284)] = 14957,
  [SMALL_STATE(285)] = 14982,
  [SMALL_STATE(286)] = 15007,
  [SMALL_STATE(287)] = 15032,
  [SMALL_STATE(288)] = 15057,
  [SMALL_STATE(289)] = 15082,
  [SMALL_STATE(290)] = 15097,
  [SMALL_STATE(291)] = 15112,
  [SMALL_STATE(292)] = 15137,
  [SMALL_STATE(293)] = 15162,
  [SMALL_STATE(294)] = 15187,
  [SMALL_STATE(295)] = 15202,
  [SMALL_STATE(296)] = 15227,
  [SMALL_STATE(297)] = 15244,
  [SMALL_STATE(298)] = 15259,
  [SMALL_STATE(299)] = 15284,
  [SMALL_STATE(300)] = 15309,
  [SMALL_STATE(301)] = 15334,
  [SMALL_STATE(302)] = 15349,
  [SMALL_STATE(303)] = 15364,
  [SMALL_STATE(304)] = 15389,
  [SMALL_STATE(305)] = 15414,
  [SMALL_STATE(306)] = 15429,
  [SMALL_STATE(307)] = 15454,
  [SMALL_STATE(308)] = 15469,
  [SMALL_STATE(309)] = 15484,
  [SMALL_STATE(310)] = 15509,
  [SMALL_STATE(311)] = 15521,
  [SMALL_STATE(312)] = 15549,
  [SMALL_STATE(313)] = 15561,
  [SMALL_STATE(314)] = 15573,
  [SMALL_STATE(315)] = 15601,
  [SMALL_STATE(316)] = 15626,
  [SMALL_STATE(317)] = 15651,
  [SMALL_STATE(318)] = 15668,
  [SMALL_STATE(319)] = 15693,
  [SMALL_STATE(320)] = 15718,
  [SMALL_STATE(321)] = 15743,
  [SMALL_STATE(322)] = 15768,
  [SMALL_STATE(323)] = 15793,
  [SMALL_STATE(324)] = 15818,
  [SMALL_STATE(325)] = 15843,
  [SMALL_STATE(326)] = 15868,
  [SMALL_STATE(327)] = 15893,
  [SMALL_STATE(328)] = 15918,
  [SMALL_STATE(329)] = 15940,
  [SMALL_STATE(330)] = 15958,
  [SMALL_STATE(331)] = 15974,
  [SMALL_STATE(332)] = 15990,
  [SMALL_STATE(333)] = 16006,
  [SMALL_STATE(334)] = 16026,
  [SMALL_STATE(335)] = 16042,
  [SMALL_STATE(336)] = 16060,
  [SMALL_STATE(337)] = 16076,
  [SMALL_STATE(338)] = 16092,
  [SMALL_STATE(339)] = 16114,
  [SMALL_STATE(340)] = 16130,
  [SMALL_STATE(341)] = 16144,
  [SMALL_STATE(342)] = 16166,
  [SMALL_STATE(343)] = 16186,
  [SMALL_STATE(344)] = 16202,
  [SMALL_STATE(345)] = 16220,
  [SMALL_STATE(346)] = 16238,
  [SMALL_STATE(347)] = 16254,
  [SMALL_STATE(348)] = 16265,
  [SMALL_STATE(349)] = 16276,
  [SMALL_STATE(350)] = 16293,
  [SMALL_STATE(351)] = 16306,
  [SMALL_STATE(352)] = 16319,
  [SMALL_STATE(353)] = 16330,
  [SMALL_STATE(354)] = 16341,
  [SMALL_STATE(355)] = 16349,
  [SMALL_STATE(356)] = 16365,
  [SMALL_STATE(357)] = 16381,
  [SMALL_STATE(358)] = 16389,
  [SMALL_STATE(359)] = 16405,
  [SMALL_STATE(360)] = 16413,
  [SMALL_STATE(361)] = 16425,
  [SMALL_STATE(362)] = 16439,
  [SMALL_STATE(363)] = 16455,
  [SMALL_STATE(364)] = 16463,
  [SMALL_STATE(365)] = 16479,
  [SMALL_STATE(366)] = 16487,
  [SMALL_STATE(367)] = 16503,
  [SMALL_STATE(368)] = 16515,
  [SMALL_STATE(369)] = 16523,
  [SMALL_STATE(370)] = 16539,
  [SMALL_STATE(371)] = 16553,
  [SMALL_STATE(372)] = 16567,
  [SMALL_STATE(373)] = 16575,
  [SMALL_STATE(374)] = 16583,
  [SMALL_STATE(375)] = 16595,
  [SMALL_STATE(376)] = 16611,
  [SMALL_STATE(377)] = 16623,
  [SMALL_STATE(378)] = 16637,
  [SMALL_STATE(379)] = 16645,
  [SMALL_STATE(380)] = 16659,
  [SMALL_STATE(381)] = 16673,
  [SMALL_STATE(382)] = 16689,
  [SMALL_STATE(383)] = 16705,
  [SMALL_STATE(384)] = 16721,
  [SMALL_STATE(385)] = 16737,
  [SMALL_STATE(386)] = 16753,
  [SMALL_STATE(387)] = 16769,
  [SMALL_STATE(388)] = 16781,
  [SMALL_STATE(389)] = 16795,
  [SMALL_STATE(390)] = 16803,
  [SMALL_STATE(391)] = 16811,
  [SMALL_STATE(392)] = 16825,
  [SMALL_STATE(393)] = 16839,
  [SMALL_STATE(394)] = 16855,
  [SMALL_STATE(395)] = 16869,
  [SMALL_STATE(396)] = 16881,
  [SMALL_STATE(397)] = 16895,
  [SMALL_STATE(398)] = 16903,
  [SMALL_STATE(399)] = 16911,
  [SMALL_STATE(400)] = 16919,
  [SMALL_STATE(401)] = 16927,
  [SMALL_STATE(402)] = 16943,
  [SMALL_STATE(403)] = 16953,
  [SMALL_STATE(404)] = 16966,
  [SMALL_STATE(405)] = 16977,
  [SMALL_STATE(406)] = 16990,
  [SMALL_STATE(407)] = 16997,
  [SMALL_STATE(408)] = 17008,
  [SMALL_STATE(409)] = 17019,
  [SMALL_STATE(410)] = 17026,
  [SMALL_STATE(411)] = 17035,
  [SMALL_STATE(412)] = 17048,
  [SMALL_STATE(413)] = 17061,
  [SMALL_STATE(414)] = 17074,
  [SMALL_STATE(415)] = 17081,
  [SMALL_STATE(416)] = 17090,
  [SMALL_STATE(417)] = 17099,
  [SMALL_STATE(418)] = 17110,
  [SMALL_STATE(419)] = 17121,
  [SMALL_STATE(420)] = 17134,
  [SMALL_STATE(421)] = 17147,
  [SMALL_STATE(422)] = 17160,
  [SMALL_STATE(423)] = 17171,
  [SMALL_STATE(424)] = 17180,
  [SMALL_STATE(425)] = 17191,
  [SMALL_STATE(426)] = 17202,
  [SMALL_STATE(427)] = 17213,
  [SMALL_STATE(428)] = 17224,
  [SMALL_STATE(429)] = 17233,
  [SMALL_STATE(430)] = 17246,
  [SMALL_STATE(431)] = 17257,
  [SMALL_STATE(432)] = 17266,
  [SMALL_STATE(433)] = 17279,
  [SMALL_STATE(434)] = 17290,
  [SMALL_STATE(435)] = 17301,
  [SMALL_STATE(436)] = 17312,
  [SMALL_STATE(437)] = 17323,
  [SMALL_STATE(438)] = 17334,
  [SMALL_STATE(439)] = 17347,
  [SMALL_STATE(440)] = 17358,
  [SMALL_STATE(441)] = 17366,
  [SMALL_STATE(442)] = 17376,
  [SMALL_STATE(443)] = 17386,
  [SMALL_STATE(444)] = 17394,
  [SMALL_STATE(445)] = 17400,
  [SMALL_STATE(446)] = 17410,
  [SMALL_STATE(447)] = 17420,
  [SMALL_STATE(448)] = 17430,
  [SMALL_STATE(449)] = 17440,
  [SMALL_STATE(450)] = 17448,
  [SMALL_STATE(451)] = 17454,
  [SMALL_STATE(452)] = 17464,
  [SMALL_STATE(453)] = 17474,
  [SMALL_STATE(454)] = 17484,
  [SMALL_STATE(455)] = 17494,
  [SMALL_STATE(456)] = 17502,
  [SMALL_STATE(457)] = 17512,
  [SMALL_STATE(458)] = 17522,
  [SMALL_STATE(459)] = 17530,
  [SMALL_STATE(460)] = 17540,
  [SMALL_STATE(461)] = 17550,
  [SMALL_STATE(462)] = 17558,
  [SMALL_STATE(463)] = 17566,
  [SMALL_STATE(464)] = 17574,
  [SMALL_STATE(465)] = 17582,
  [SMALL_STATE(466)] = 17592,
  [SMALL_STATE(467)] = 17602,
  [SMALL_STATE(468)] = 17610,
  [SMALL_STATE(469)] = 17618,
  [SMALL_STATE(470)] = 17628,
  [SMALL_STATE(471)] = 17636,
  [SMALL_STATE(472)] = 17646,
  [SMALL_STATE(473)] = 17656,
  [SMALL_STATE(474)] = 17664,
  [SMALL_STATE(475)] = 17674,
  [SMALL_STATE(476)] = 17680,
  [SMALL_STATE(477)] = 17688,
  [SMALL_STATE(478)] = 17698,
  [SMALL_STATE(479)] = 17708,
  [SMALL_STATE(480)] = 17714,
  [SMALL_STATE(481)] = 17724,
  [SMALL_STATE(482)] = 17734,
  [SMALL_STATE(483)] = 17744,
  [SMALL_STATE(484)] = 17752,
  [SMALL_STATE(485)] = 17762,
  [SMALL_STATE(486)] = 17770,
  [SMALL_STATE(487)] = 17780,
  [SMALL_STATE(488)] = 17788,
  [SMALL_STATE(489)] = 17798,
  [SMALL_STATE(490)] = 17808,
  [SMALL_STATE(491)] = 17818,
  [SMALL_STATE(492)] = 17826,
  [SMALL_STATE(493)] = 17836,
  [SMALL_STATE(494)] = 17846,
  [SMALL_STATE(495)] = 17854,
  [SMALL_STATE(496)] = 17860,
  [SMALL_STATE(497)] = 17870,
  [SMALL_STATE(498)] = 17880,
  [SMALL_STATE(499)] = 17888,
  [SMALL_STATE(500)] = 17896,
  [SMALL_STATE(501)] = 17904,
  [SMALL_STATE(502)] = 17914,
  [SMALL_STATE(503)] = 17920,
  [SMALL_STATE(504)] = 17928,
  [SMALL_STATE(505)] = 17938,
  [SMALL_STATE(506)] = 17946,
  [SMALL_STATE(507)] = 17956,
  [SMALL_STATE(508)] = 17966,
  [SMALL_STATE(509)] = 17976,
  [SMALL_STATE(510)] = 17986,
  [SMALL_STATE(511)] = 17996,
  [SMALL_STATE(512)] = 18004,
  [SMALL_STATE(513)] = 18012,
  [SMALL_STATE(514)] = 18020,
  [SMALL_STATE(515)] = 18028,
  [SMALL_STATE(516)] = 18036,
  [SMALL_STATE(517)] = 18046,
  [SMALL_STATE(518)] = 18054,
  [SMALL_STATE(519)] = 18062,
  [SMALL_STATE(520)] = 18070,
  [SMALL_STATE(521)] = 18080,
  [SMALL_STATE(522)] = 18088,
  [SMALL_STATE(523)] = 18094,
  [SMALL_STATE(524)] = 18104,
  [SMALL_STATE(525)] = 18110,
  [SMALL_STATE(526)] = 18120,
  [SMALL_STATE(527)] = 18128,
  [SMALL_STATE(528)] = 18138,
  [SMALL_STATE(529)] = 18146,
  [SMALL_STATE(530)] = 18156,
  [SMALL_STATE(531)] = 18166,
  [SMALL_STATE(532)] = 18174,
  [SMALL_STATE(533)] = 18182,
  [SMALL_STATE(534)] = 18190,
  [SMALL_STATE(535)] = 18198,
  [SMALL_STATE(536)] = 18208,
  [SMALL_STATE(537)] = 18216,
  [SMALL_STATE(538)] = 18226,
  [SMALL_STATE(539)] = 18236,
  [SMALL_STATE(540)] = 18246,
  [SMALL_STATE(541)] = 18254,
  [SMALL_STATE(542)] = 18264,
  [SMALL_STATE(543)] = 18274,
  [SMALL_STATE(544)] = 18282,
  [SMALL_STATE(545)] = 18290,
  [SMALL_STATE(546)] = 18298,
  [SMALL_STATE(547)] = 18308,
  [SMALL_STATE(548)] = 18316,
  [SMALL_STATE(549)] = 18324,
  [SMALL_STATE(550)] = 18332,
  [SMALL_STATE(551)] = 18342,
  [SMALL_STATE(552)] = 18350,
  [SMALL_STATE(553)] = 18358,
  [SMALL_STATE(554)] = 18368,
  [SMALL_STATE(555)] = 18376,
  [SMALL_STATE(556)] = 18384,
  [SMALL_STATE(557)] = 18392,
  [SMALL_STATE(558)] = 18398,
  [SMALL_STATE(559)] = 18406,
  [SMALL_STATE(560)] = 18414,
  [SMALL_STATE(561)] = 18422,
  [SMALL_STATE(562)] = 18430,
  [SMALL_STATE(563)] = 18440,
  [SMALL_STATE(564)] = 18446,
  [SMALL_STATE(565)] = 18456,
  [SMALL_STATE(566)] = 18464,
  [SMALL_STATE(567)] = 18472,
  [SMALL_STATE(568)] = 18479,
  [SMALL_STATE(569)] = 18486,
  [SMALL_STATE(570)] = 18493,
  [SMALL_STATE(571)] = 18500,
  [SMALL_STATE(572)] = 18507,
  [SMALL_STATE(573)] = 18514,
  [SMALL_STATE(574)] = 18521,
  [SMALL_STATE(575)] = 18528,
  [SMALL_STATE(576)] = 18535,
  [SMALL_STATE(577)] = 18540,
  [SMALL_STATE(578)] = 18547,
  [SMALL_STATE(579)] = 18554,
  [SMALL_STATE(580)] = 18559,
  [SMALL_STATE(581)] = 18564,
  [SMALL_STATE(582)] = 18569,
  [SMALL_STATE(583)] = 18576,
  [SMALL_STATE(584)] = 18583,
  [SMALL_STATE(585)] = 18590,
  [SMALL_STATE(586)] = 18597,
  [SMALL_STATE(587)] = 18602,
  [SMALL_STATE(588)] = 18609,
  [SMALL_STATE(589)] = 18616,
  [SMALL_STATE(590)] = 18623,
  [SMALL_STATE(591)] = 18630,
  [SMALL_STATE(592)] = 18637,
  [SMALL_STATE(593)] = 18644,
  [SMALL_STATE(594)] = 18649,
  [SMALL_STATE(595)] = 18656,
  [SMALL_STATE(596)] = 18663,
  [SMALL_STATE(597)] = 18668,
  [SMALL_STATE(598)] = 18675,
  [SMALL_STATE(599)] = 18680,
  [SMALL_STATE(600)] = 18684,
  [SMALL_STATE(601)] = 18688,
  [SMALL_STATE(602)] = 18692,
  [SMALL_STATE(603)] = 18696,
  [SMALL_STATE(604)] = 18700,
  [SMALL_STATE(605)] = 18704,
  [SMALL_STATE(606)] = 18708,
  [SMALL_STATE(607)] = 18712,
  [SMALL_STATE(608)] = 18716,
  [SMALL_STATE(609)] = 18720,
  [SMALL_STATE(610)] = 18724,
  [SMALL_STATE(611)] = 18728,
  [SMALL_STATE(612)] = 18732,
  [SMALL_STATE(613)] = 18736,
  [SMALL_STATE(614)] = 18740,
  [SMALL_STATE(615)] = 18744,
  [SMALL_STATE(616)] = 18748,
  [SMALL_STATE(617)] = 18752,
  [SMALL_STATE(618)] = 18756,
  [SMALL_STATE(619)] = 18760,
  [SMALL_STATE(620)] = 18764,
  [SMALL_STATE(621)] = 18768,
  [SMALL_STATE(622)] = 18772,
  [SMALL_STATE(623)] = 18776,
  [SMALL_STATE(624)] = 18780,
  [SMALL_STATE(625)] = 18784,
  [SMALL_STATE(626)] = 18788,
  [SMALL_STATE(627)] = 18792,
  [SMALL_STATE(628)] = 18796,
  [SMALL_STATE(629)] = 18800,
  [SMALL_STATE(630)] = 18804,
  [SMALL_STATE(631)] = 18808,
  [SMALL_STATE(632)] = 18812,
  [SMALL_STATE(633)] = 18816,
  [SMALL_STATE(634)] = 18820,
  [SMALL_STATE(635)] = 18824,
  [SMALL_STATE(636)] = 18828,
  [SMALL_STATE(637)] = 18832,
  [SMALL_STATE(638)] = 18836,
  [SMALL_STATE(639)] = 18840,
  [SMALL_STATE(640)] = 18844,
  [SMALL_STATE(641)] = 18848,
  [SMALL_STATE(642)] = 18852,
  [SMALL_STATE(643)] = 18856,
  [SMALL_STATE(644)] = 18860,
  [SMALL_STATE(645)] = 18864,
  [SMALL_STATE(646)] = 18868,
  [SMALL_STATE(647)] = 18872,
  [SMALL_STATE(648)] = 18876,
  [SMALL_STATE(649)] = 18880,
  [SMALL_STATE(650)] = 18884,
  [SMALL_STATE(651)] = 18888,
  [SMALL_STATE(652)] = 18892,
  [SMALL_STATE(653)] = 18896,
  [SMALL_STATE(654)] = 18900,
  [SMALL_STATE(655)] = 18904,
  [SMALL_STATE(656)] = 18908,
  [SMALL_STATE(657)] = 18912,
  [SMALL_STATE(658)] = 18916,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(155),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(28),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(109),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(160),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(329),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(204),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(201),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(201),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(569),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(57),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(441),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(33),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(54),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(52),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(549),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(639),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(39),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(11),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(198),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(313),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(653),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(280),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(146),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(349),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(395),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(78),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(76),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(76),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(573),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(79),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(77),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(313),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(629),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_expression_pun, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_pattern, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 7),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 7),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 4),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 4),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access_expression, 4),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access_expression, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonempty_block_expression, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonempty_block_expression, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 6),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 6),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_expression, 5),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_expression, 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expression, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expression, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_expression, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_expression, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 5),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 5),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 5),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 5),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 5),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 5),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 5),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 5),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_expression, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_expression, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 6),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 6),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 6),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 6),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_expression, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_expression, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_value, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_clause, 3),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 6),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 4),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 4),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_let_expression, 3),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_expression, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 4),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 5),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 5),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 5),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 5),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 5),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(398),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(317),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(658),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(657),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(656),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(654),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(358),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(652),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 1),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 1),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 6),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 6),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 1),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 3),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 7),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 7),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 5),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 5),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 2),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_pattern, 5),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_pattern, 5),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_pattern, 3),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_pattern, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 5),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 5),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_pattern, 3),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_pattern, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 4),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 4),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 6),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 6),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 3),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pub, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [923] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(649),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(398),
  [929] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(426),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(648),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(363),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(313),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(629),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 3),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2),
  [972] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(38),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(410),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 1),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 2),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(410),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 2),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern, 3),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 2),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 2),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 2),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 6),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 6),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2), SHIFT_REPEAT(151),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 3),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 3),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pub_attribute, 3),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 5),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 5),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 5),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 4),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any, 1),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 7),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 7),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 3),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 3),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 1),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 4),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 4),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [1146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(425),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(438),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_fragement, 1),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_fragement, 1),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 1),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern_pun, 1),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 1),
  [1198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 1),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolator, 3),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolator, 3),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 1),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2), SHIFT_REPEAT(41),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2), SHIFT_REPEAT(303),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2), SHIFT_REPEAT(436),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item, 1),
  [1263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item, 1),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 6),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 5),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 5),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 3),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 3),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [1307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [1309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(571),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 4),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 4),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 6),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 6),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 4),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 4),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2),
  [1336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2), SHIFT_REPEAT(422),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 5),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [1361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [1367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 8),
  [1383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 8),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filed_single_pattern, 1),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any, 1),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression_pun, 1),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 3),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retuern_type, 2),
  [1425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retuern_type, 2),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3),
  [1429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 3),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [1433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [1435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 2),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 5),
  [1447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 5),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 5),
  [1451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 5),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5),
  [1455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 5),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [1471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4),
  [1481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 4),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7),
  [1485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 7),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 4),
  [1489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 4),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [1493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [1505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6),
  [1515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 6),
  [1517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 5),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(583),
  [1534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [1542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [1544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [1548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4),
  [1558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 4),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 4),
  [1574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 4),
  [1576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 1),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 3),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_expression, 1),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 4),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1688] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_moonbit(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_lowercase_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
