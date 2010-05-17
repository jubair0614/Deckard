
#include <map>
#include <string>

using namespace std;

extern map<string,int> name2id;
extern map<int,string> id2name;

void id_init()
{

name2id["expression_statement"]= 1;
id2name[1]= "expression_statement";
name2id["storage_class_specifier"]= 2;
id2name[2]= "storage_class_specifier";
name2id["'~'"]= 3;
id2name[3]= "'~'";
name2id["struct_or_union_specifier"]= 4;
id2name[4]= "struct_or_union_specifier";
name2id["VOID"]= 5;
id2name[5]= "VOID";
name2id["';'"]= 6;
id2name[6]= "';'";
name2id["init_declarator_list"]= 7;
id2name[7]= "init_declarator_list";
name2id["DIV_ASSIGN"]= 8;
id2name[8]= "DIV_ASSIGN";
name2id["pointer"]= 9;
id2name[9]= "pointer";
name2id["LE_OP"]= 10;
id2name[10]= "LE_OP";
name2id["inclusive_or_expression"]= 11;
id2name[11]= "inclusive_or_expression";
name2id["LONG"]= 12;
id2name[12]= "LONG";
name2id["'('"]= 13;
id2name[13]= "'('";
name2id["ELLIPSIS"]= 14;
id2name[14]= "ELLIPSIS";
name2id["struct_declaration"]= 15;
id2name[15]= "struct_declaration";
name2id["GOTO"]= 16;
id2name[16]= "GOTO";
name2id["':'"]= 17;
id2name[17]= "':'";
name2id["ENUM"]= 18;
id2name[18]= "ENUM";
name2id["LEFT_OP"]= 19;
id2name[19]= "LEFT_OP";
name2id["parameter_list"]= 20;
id2name[20]= "parameter_list";
name2id["DOUBLE"]= 21;
id2name[21]= "DOUBLE";
name2id["labeled_statement"]= 22;
id2name[22]= "labeled_statement";
name2id["abstract_declarator"]= 23;
id2name[23]= "abstract_declarator";
name2id["init_declarator"]= 24;
id2name[24]= "init_declarator";
name2id["direct_abstract_declarator"]= 25;
id2name[25]= "direct_abstract_declarator";
name2id["INC_OP"]= 26;
id2name[26]= "INC_OP";
name2id["NE_OP"]= 27;
id2name[27]= "NE_OP";
name2id["SHORT"]= 28;
id2name[28]= "SHORT";
name2id["CONSTANT"]= 29;
id2name[29]= "CONSTANT";
name2id["unary_expression"]= 30;
id2name[30]= "unary_expression";
name2id["DEC_OP"]= 31;
id2name[31]= "DEC_OP";
name2id["struct_or_union"]= 32;
id2name[32]= "struct_or_union";
name2id["initializer"]= 33;
id2name[33]= "initializer";
name2id["struct_declaration_list"]= 34;
id2name[34]= "struct_declaration_list";
name2id["'%'"]= 35;
id2name[35]= "'%'";
name2id["EQ_OP"]= 36;
id2name[36]= "EQ_OP";
name2id["SIZEOF"]= 37;
id2name[37]= "SIZEOF";
name2id["declaration_list"]= 38;
id2name[38]= "declaration_list";
name2id["'+'"]= 39;
id2name[39]= "'+'";
name2id["type_specifier"]= 40;
id2name[40]= "type_specifier";
name2id["'^'"]= 41;
id2name[41]= "'^'";
name2id["compound_statement"]= 42;
id2name[42]= "compound_statement";
name2id["iteration_statement"]= 43;
id2name[43]= "iteration_statement";
name2id["UNSIGNED"]= 44;
id2name[44]= "UNSIGNED";
name2id["OR_OP"]= 45;
id2name[45]= "OR_OP";
name2id["'*'"]= 46;
id2name[46]= "'*'";
name2id["'='"]= 47;
id2name[47]= "'='";
name2id["direct_declarator"]= 48;
id2name[48]= "direct_declarator";
name2id["translation_unit"]= 49;
id2name[49]= "translation_unit";
name2id["external_declaration"]= 50;
id2name[50]= "external_declaration";
name2id["FOR"]= 51;
id2name[51]= "FOR";
name2id["UNION"]= 52;
id2name[52]= "UNION";
name2id["multiplicative_expression"]= 53;
id2name[53]= "multiplicative_expression";
name2id["declarator"]= 54;
id2name[54]= "declarator";
name2id["argument_expression_list"]= 55;
id2name[55]= "argument_expression_list";
name2id["'{'"]= 56;
id2name[56]= "'{'";
name2id["ELSE"]= 57;
id2name[57]= "ELSE";
name2id["logical_and_expression"]= 58;
id2name[58]= "logical_and_expression";
name2id["shift_expression"]= 59;
id2name[59]= "shift_expression";
name2id["SUB_ASSIGN"]= 60;
id2name[60]= "SUB_ASSIGN";
name2id["struct_declarator"]= 61;
id2name[61]= "struct_declarator";
name2id["XOR_ASSIGN"]= 62;
id2name[62]= "XOR_ASSIGN";
name2id["INT"]= 63;
id2name[63]= "INT";
name2id["type_qualifier"]= 64;
id2name[64]= "type_qualifier";
name2id["'-'"]= 65;
id2name[65]= "'-'";
name2id["SIGNED"]= 66;
id2name[66]= "SIGNED";
name2id["CONTINUE"]= 67;
id2name[67]= "CONTINUE";
name2id["MUL_ASSIGN"]= 68;
id2name[68]= "MUL_ASSIGN";
name2id["assignment_operator"]= 69;
id2name[69]= "assignment_operator";
name2id["statement_list"]= 70;
id2name[70]= "statement_list";
name2id["expression"]= 71;
id2name[71]= "expression";
name2id["'<'"]= 72;
id2name[72]= "'<'";
name2id["RIGHT_OP"]= 73;
id2name[73]= "RIGHT_OP";
name2id["type_name"]= 74;
id2name[74]= "type_name";
name2id["RIGHT_ASSIGN"]= 75;
id2name[75]= "RIGHT_ASSIGN";
name2id["DEFAULT"]= 76;
id2name[76]= "DEFAULT";
name2id["exclusive_or_expression"]= 77;
id2name[77]= "exclusive_or_expression";
name2id["CHAR"]= 78;
id2name[78]= "CHAR";
name2id["WHILE"]= 79;
id2name[79]= "WHILE";
name2id["EXTERN"]= 80;
id2name[80]= "EXTERN";
name2id["RETURN"]= 81;
id2name[81]= "RETURN";
name2id["additive_expression"]= 82;
id2name[82]= "additive_expression";
name2id["CASE"]= 83;
id2name[83]= "CASE";
name2id["REGISTER"]= 84;
id2name[84]= "REGISTER";
name2id["','"]= 85;
id2name[85]= "','";
name2id["SWITCH"]= 86;
id2name[86]= "SWITCH";
name2id["AND_ASSIGN"]= 87;
id2name[87]= "AND_ASSIGN";
name2id["relational_expression"]= 88;
id2name[88]= "relational_expression";
name2id["statement"]= 89;
id2name[89]= "statement";
name2id["cast_expression"]= 90;
id2name[90]= "cast_expression";
name2id["'?'"]= 91;
id2name[91]= "'?'";
name2id["IDENTIFIER"]= 92;
id2name[92]= "IDENTIFIER";
name2id["struct_declarator_list"]= 93;
id2name[93]= "struct_declarator_list";
name2id["ADD_ASSIGN"]= 94;
id2name[94]= "ADD_ASSIGN";
name2id["constant_expression"]= 95;
id2name[95]= "constant_expression";
name2id["'>'"]= 96;
id2name[96]= "'>'";
name2id["parameter_declaration"]= 97;
id2name[97]= "parameter_declaration";
name2id["GE_OP"]= 98;
id2name[98]= "GE_OP";
name2id["primary_expression"]= 99;
id2name[99]= "primary_expression";
name2id["declaration"]= 100;
id2name[100]= "declaration";
name2id["'&'"]= 101;
id2name[101]= "'&'";
name2id["equality_expression"]= 102;
id2name[102]= "equality_expression";
name2id["STRUCT"]= 103;
id2name[103]= "STRUCT";
name2id["jump_statement"]= 104;
id2name[104]= "jump_statement";
name2id["MOD_ASSIGN"]= 105;
id2name[105]= "MOD_ASSIGN";
name2id["'/'"]= 106;
id2name[106]= "'/'";
name2id["TYPE_NAME"]= 107;
id2name[107]= "TYPE_NAME";
name2id["OR_ASSIGN"]= 108;
id2name[108]= "OR_ASSIGN";
name2id["enumerator_list"]= 109;
id2name[109]= "enumerator_list";
name2id["'['"]= 110;
id2name[110]= "'['";
name2id["BREAK"]= 111;
id2name[111]= "BREAK";
name2id["VOLATILE"]= 112;
id2name[112]= "VOLATILE";
name2id["INLINE"]= 113;
id2name[113]= "INLINE";
name2id["'}'"]= 114;
id2name[114]= "'}'";
name2id["DO"]= 115;
id2name[115]= "DO";
name2id["STATIC"]= 116;
id2name[116]= "STATIC";
name2id["CONST"]= 117;
id2name[117]= "CONST";
name2id["'!'"]= 118;
id2name[118]= "'!'";
name2id["enumerator"]= 119;
id2name[119]= "enumerator";
name2id["']'"]= 120;
id2name[120]= "']'";
name2id["and_expression"]= 121;
id2name[121]= "and_expression";
name2id["specifier_qualifier_list"]= 122;
id2name[122]= "specifier_qualifier_list";
name2id["selection_statement"]= 123;
id2name[123]= "selection_statement";
name2id["postfix_expression"]= 124;
id2name[124]= "postfix_expression";
name2id["'.'"]= 125;
id2name[125]= "'.'";
name2id["PTR_OP"]= 126;
id2name[126]= "PTR_OP";
name2id["initializer_list"]= 127;
id2name[127]= "initializer_list";
name2id["logical_or_expression"]= 128;
id2name[128]= "logical_or_expression";
name2id["unary_operator"]= 129;
id2name[129]= "unary_operator";
name2id["'|'"]= 130;
id2name[130]= "'|'";
name2id["TYPEDEF"]= 131;
id2name[131]= "TYPEDEF";
name2id["assignment_expression"]= 132;
id2name[132]= "assignment_expression";
name2id["parameter_type_list"]= 133;
id2name[133]= "parameter_type_list";
name2id["AUTO"]= 134;
id2name[134]= "AUTO";
name2id["type_qualifier_list"]= 135;
id2name[135]= "type_qualifier_list";
name2id["AND_OP"]= 136;
id2name[136]= "AND_OP";
name2id["declaration_specifiers"]= 137;
id2name[137]= "declaration_specifiers";
name2id["identifier_list"]= 138;
id2name[138]= "identifier_list";
name2id["IF"]= 139;
id2name[139]= "IF";
name2id["function_definition"]= 140;
id2name[140]= "function_definition";
name2id["STRING_LITERAL"]= 141;
id2name[141]= "STRING_LITERAL";
name2id["enum_specifier"]= 142;
id2name[142]= "enum_specifier";
name2id["FLOAT"]= 143;
id2name[143]= "FLOAT";
name2id["')'"]= 144;
id2name[144]= "')'";
name2id["conditional_expression"]= 145;
id2name[145]= "conditional_expression";
name2id["LEFT_ASSIGN"]= 146;
id2name[146]= "LEFT_ASSIGN";
}

