//
// Created by Max on 9/4/2022.
//

#ifndef ONE_LEXER_PARSER_H
#define ONE_LEXER_PARSER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <str.h>

#include "../../builtins/io.h"
#include "../../builtins/array.h"
#include "../../builtins/str.h"
#include "../../builtins/error.h"

#include "../lexer/lexer.h"

#include "ast.h"

typedef struct {
    Lexer* lexer;
    Token** tokens;
    size_t token_count;

    AstProgram* ast;
} Parser;

Parser* parser_init(Lexer* lexer);

void parser_parse(Parser* parser);

char* parser_trace(Parser* parser);

AstStatement* parser_statement(Parser* parser);

Array* parser_statements(Parser* parser);

void parser_parse(Parser* parser);

#endif //ONE_LEXER_PARSER_H
