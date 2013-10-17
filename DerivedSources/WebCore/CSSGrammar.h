#ifndef CSSGRAMMAR_H
#define CSSGRAMMAR_H
/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_EOF = 0,
     LOWEST_PREC = 258,
     UNIMPORTANT_TOK = 259,
     WHITESPACE = 260,
     SGML_CD = 261,
     INCLUDES = 262,
     DASHMATCH = 263,
     BEGINSWITH = 264,
     ENDSWITH = 265,
     CONTAINS = 266,
     STRING = 267,
     IDENT = 268,
     NTH = 269,
     HEX = 270,
     IDSEL = 271,
     IMPORT_SYM = 272,
     PAGE_SYM = 273,
     MEDIA_SYM = 274,
     FONT_FACE_SYM = 275,
     CHARSET_SYM = 276,
     NAMESPACE_SYM = 277,
     VARFUNCTION = 278,
     WEBKIT_RULE_SYM = 279,
     WEBKIT_DECLS_SYM = 280,
     WEBKIT_KEYFRAME_RULE_SYM = 281,
     WEBKIT_KEYFRAMES_SYM = 282,
     WEBKIT_VALUE_SYM = 283,
     WEBKIT_MEDIAQUERY_SYM = 284,
     WEBKIT_SELECTOR_SYM = 285,
     WEBKIT_REGION_RULE_SYM = 286,
     WEBKIT_VIEWPORT_RULE_SYM = 287,
     WEBKIT_FILTER_RULE_SYM = 288,
     TOPLEFTCORNER_SYM = 289,
     TOPLEFT_SYM = 290,
     TOPCENTER_SYM = 291,
     TOPRIGHT_SYM = 292,
     TOPRIGHTCORNER_SYM = 293,
     BOTTOMLEFTCORNER_SYM = 294,
     BOTTOMLEFT_SYM = 295,
     BOTTOMCENTER_SYM = 296,
     BOTTOMRIGHT_SYM = 297,
     BOTTOMRIGHTCORNER_SYM = 298,
     LEFTTOP_SYM = 299,
     LEFTMIDDLE_SYM = 300,
     LEFTBOTTOM_SYM = 301,
     RIGHTTOP_SYM = 302,
     RIGHTMIDDLE_SYM = 303,
     RIGHTBOTTOM_SYM = 304,
     ATKEYWORD = 305,
     IMPORTANT_SYM = 306,
     MEDIA_ONLY = 307,
     MEDIA_NOT = 308,
     MEDIA_AND = 309,
     REMS = 310,
     CHS = 311,
     QEMS = 312,
     EMS = 313,
     EXS = 314,
     PXS = 315,
     CMS = 316,
     MMS = 317,
     INS = 318,
     PTS = 319,
     PCS = 320,
     DEGS = 321,
     RADS = 322,
     GRADS = 323,
     TURNS = 324,
     MSECS = 325,
     SECS = 326,
     HERTZ = 327,
     KHERTZ = 328,
     DIMEN = 329,
     INVALIDDIMEN = 330,
     PERCENTAGE = 331,
     FLOATTOKEN = 332,
     INTEGER = 333,
     VW = 334,
     VH = 335,
     VMIN = 336,
     VMAX = 337,
     DPPX = 338,
     DPI = 339,
     DPCM = 340,
     URI = 341,
     FUNCTION = 342,
     ANYFUNCTION = 343,
     NOTFUNCTION = 344,
     CALCFUNCTION = 345,
     MINFUNCTION = 346,
     MAXFUNCTION = 347,
     VAR_DEFINITION = 348,
     UNICODERANGE = 349
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 67 "DerivedSources/WebCore/CSSGrammar.y"

    bool boolean;
    char character;
    int integer;
    double number;
    CSSParserString string;

    StyleRuleBase* rule;
    Vector<RefPtr<StyleRuleBase> >* ruleList;
    CSSParserSelector* selector;
    Vector<OwnPtr<CSSParserSelector> >* selectorList;
    CSSSelector::MarginBoxType marginBox;
    CSSSelector::Relation relation;
    MediaQuerySet* mediaList;
    MediaQuery* mediaQuery;
    MediaQuery::Restrictor mediaQueryRestrictor;
    MediaQueryExp* mediaQueryExp;
    CSSParserValue value;
    CSSParserValueList* valueList;
    Vector<OwnPtr<MediaQueryExp> >* mediaQueryExpList;
    StyleKeyframe* keyframe;
    Vector<RefPtr<StyleKeyframe> >* keyframeRuleList;
    float val;
    CSSPropertyID id;
    CSSParser::Location location;



/* Line 1685 of yacc.c  */
#line 175 "DerivedSources/WebCore/CSSGrammar.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




#endif
