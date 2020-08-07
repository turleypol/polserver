


// Generated from lib/EscriptGrammar/EscriptParser.g4 by ANTLR 4.8


#include "EscriptParserListener.h"
#include "EscriptParserVisitor.h"

#include "EscriptParser.h"


using namespace antlrcpp;
using namespace EscriptGrammar;
using namespace antlr4;

EscriptParser::EscriptParser(antlr4::TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

EscriptParser::~EscriptParser() {
  delete _interpreter;
}

std::string EscriptParser::getGrammarFileName() const {
  return "EscriptParser.g4";
}

const std::vector<std::string>& EscriptParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& EscriptParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- UnambiguousCompilationUnitContext ------------------------------------------------------------------

EscriptParser::UnambiguousCompilationUnitContext::UnambiguousCompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousCompilationUnitContext::EOF() {
  return getToken(EscriptParser::EOF, 0);
}

std::vector<EscriptParser::UnambiguousTopLevelDeclarationContext *> EscriptParser::UnambiguousCompilationUnitContext::unambiguousTopLevelDeclaration() {
  return getRuleContexts<EscriptParser::UnambiguousTopLevelDeclarationContext>();
}

EscriptParser::UnambiguousTopLevelDeclarationContext* EscriptParser::UnambiguousCompilationUnitContext::unambiguousTopLevelDeclaration(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousTopLevelDeclarationContext>(i);
}


size_t EscriptParser::UnambiguousCompilationUnitContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousCompilationUnit;
}

void EscriptParser::UnambiguousCompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousCompilationUnit(this);
}

void EscriptParser::UnambiguousCompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousCompilationUnit(this);
}


antlrcpp::Any EscriptParser::UnambiguousCompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousCompilationUnitContext* EscriptParser::unambiguousCompilationUnit() {
  UnambiguousCompilationUnitContext *_localctx = _tracker.createInstance<UnambiguousCompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, EscriptParser::RuleUnambiguousCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::IF)
      | (1ULL << EscriptParser::RETURN)
      | (1ULL << EscriptParser::TOK_CONST)
      | (1ULL << EscriptParser::VAR)
      | (1ULL << EscriptParser::DO)
      | (1ULL << EscriptParser::WHILE)
      | (1ULL << EscriptParser::EXIT)
      | (1ULL << EscriptParser::FUNCTION)
      | (1ULL << EscriptParser::EXPORTED)
      | (1ULL << EscriptParser::USE)
      | (1ULL << EscriptParser::INCLUDE)
      | (1ULL << EscriptParser::BREAK)
      | (1ULL << EscriptParser::CONTINUE)
      | (1ULL << EscriptParser::FOR)
      | (1ULL << EscriptParser::FOREACH)
      | (1ULL << EscriptParser::REPEAT)
      | (1ULL << EscriptParser::PROGRAM)
      | (1ULL << EscriptParser::CASE)
      | (1ULL << EscriptParser::ENUM)
      | (1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::TOK_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::SEMI - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(326);
      unambiguousTopLevelDeclaration();
      setState(331);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(332);
    match(EscriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

EscriptParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::CompilationUnitContext::EOF() {
  return getToken(EscriptParser::EOF, 0);
}

std::vector<EscriptParser::TopLevelDeclarationContext *> EscriptParser::CompilationUnitContext::topLevelDeclaration() {
  return getRuleContexts<EscriptParser::TopLevelDeclarationContext>();
}

EscriptParser::TopLevelDeclarationContext* EscriptParser::CompilationUnitContext::topLevelDeclaration(size_t i) {
  return getRuleContext<EscriptParser::TopLevelDeclarationContext>(i);
}


size_t EscriptParser::CompilationUnitContext::getRuleIndex() const {
  return EscriptParser::RuleCompilationUnit;
}

void EscriptParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void EscriptParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any EscriptParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::CompilationUnitContext* EscriptParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 2, EscriptParser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::IF)
      | (1ULL << EscriptParser::GOTO)
      | (1ULL << EscriptParser::RETURN)
      | (1ULL << EscriptParser::TOK_CONST)
      | (1ULL << EscriptParser::VAR)
      | (1ULL << EscriptParser::DO)
      | (1ULL << EscriptParser::WHILE)
      | (1ULL << EscriptParser::EXIT)
      | (1ULL << EscriptParser::DECLARE)
      | (1ULL << EscriptParser::FUNCTION)
      | (1ULL << EscriptParser::EXPORTED)
      | (1ULL << EscriptParser::USE)
      | (1ULL << EscriptParser::INCLUDE)
      | (1ULL << EscriptParser::BREAK)
      | (1ULL << EscriptParser::CONTINUE)
      | (1ULL << EscriptParser::FOR)
      | (1ULL << EscriptParser::FOREACH)
      | (1ULL << EscriptParser::REPEAT)
      | (1ULL << EscriptParser::PROGRAM)
      | (1ULL << EscriptParser::CASE)
      | (1ULL << EscriptParser::ENUM)
      | (1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::TOK_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::SEMI - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(334);
      topLevelDeclaration();
      setState(339);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(340);
    match(EscriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleUnitContext ------------------------------------------------------------------

EscriptParser::ModuleUnitContext::ModuleUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ModuleUnitContext::EOF() {
  return getToken(EscriptParser::EOF, 0);
}

std::vector<EscriptParser::ModuleDeclarationStatementContext *> EscriptParser::ModuleUnitContext::moduleDeclarationStatement() {
  return getRuleContexts<EscriptParser::ModuleDeclarationStatementContext>();
}

EscriptParser::ModuleDeclarationStatementContext* EscriptParser::ModuleUnitContext::moduleDeclarationStatement(size_t i) {
  return getRuleContext<EscriptParser::ModuleDeclarationStatementContext>(i);
}


size_t EscriptParser::ModuleUnitContext::getRuleIndex() const {
  return EscriptParser::RuleModuleUnit;
}

void EscriptParser::ModuleUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleUnit(this);
}

void EscriptParser::ModuleUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleUnit(this);
}


antlrcpp::Any EscriptParser::ModuleUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitModuleUnit(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ModuleUnitContext* EscriptParser::moduleUnit() {
  ModuleUnitContext *_localctx = _tracker.createInstance<ModuleUnitContext>(_ctx, getState());
  enterRule(_localctx, 4, EscriptParser::RuleModuleUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::TOK_CONST || _la == EscriptParser::IDENTIFIER) {
      setState(342);
      moduleDeclarationStatement();
      setState(347);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(348);
    match(EscriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousModuleUnitContext ------------------------------------------------------------------

EscriptParser::UnambiguousModuleUnitContext::UnambiguousModuleUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousModuleUnitContext::EOF() {
  return getToken(EscriptParser::EOF, 0);
}

std::vector<EscriptParser::UnambiguousModuleDeclarationStatementContext *> EscriptParser::UnambiguousModuleUnitContext::unambiguousModuleDeclarationStatement() {
  return getRuleContexts<EscriptParser::UnambiguousModuleDeclarationStatementContext>();
}

EscriptParser::UnambiguousModuleDeclarationStatementContext* EscriptParser::UnambiguousModuleUnitContext::unambiguousModuleDeclarationStatement(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousModuleDeclarationStatementContext>(i);
}


size_t EscriptParser::UnambiguousModuleUnitContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousModuleUnit;
}

void EscriptParser::UnambiguousModuleUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousModuleUnit(this);
}

void EscriptParser::UnambiguousModuleUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousModuleUnit(this);
}


antlrcpp::Any EscriptParser::UnambiguousModuleUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousModuleUnit(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousModuleUnitContext* EscriptParser::unambiguousModuleUnit() {
  UnambiguousModuleUnitContext *_localctx = _tracker.createInstance<UnambiguousModuleUnitContext>(_ctx, getState());
  enterRule(_localctx, 6, EscriptParser::RuleUnambiguousModuleUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::TOK_CONST || _la == EscriptParser::IDENTIFIER) {
      setState(350);
      unambiguousModuleDeclarationStatement();
      setState(355);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(356);
    match(EscriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDeclarationStatementContext ------------------------------------------------------------------

EscriptParser::ModuleDeclarationStatementContext::ModuleDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::ModuleFunctionDeclarationContext* EscriptParser::ModuleDeclarationStatementContext::moduleFunctionDeclaration() {
  return getRuleContext<EscriptParser::ModuleFunctionDeclarationContext>(0);
}

EscriptParser::ConstStatementContext* EscriptParser::ModuleDeclarationStatementContext::constStatement() {
  return getRuleContext<EscriptParser::ConstStatementContext>(0);
}


size_t EscriptParser::ModuleDeclarationStatementContext::getRuleIndex() const {
  return EscriptParser::RuleModuleDeclarationStatement;
}

void EscriptParser::ModuleDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleDeclarationStatement(this);
}

void EscriptParser::ModuleDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleDeclarationStatement(this);
}


antlrcpp::Any EscriptParser::ModuleDeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitModuleDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ModuleDeclarationStatementContext* EscriptParser::moduleDeclarationStatement() {
  ModuleDeclarationStatementContext *_localctx = _tracker.createInstance<ModuleDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, EscriptParser::RuleModuleDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(360);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(358);
        moduleFunctionDeclaration();
        break;
      }

      case EscriptParser::TOK_CONST: {
        enterOuterAlt(_localctx, 2);
        setState(359);
        constStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousModuleDeclarationStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousModuleDeclarationStatementContext::UnambiguousModuleDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::UnambiguousModuleFunctionDeclarationContext* EscriptParser::UnambiguousModuleDeclarationStatementContext::unambiguousModuleFunctionDeclaration() {
  return getRuleContext<EscriptParser::UnambiguousModuleFunctionDeclarationContext>(0);
}

EscriptParser::UnambiguousConstStatementContext* EscriptParser::UnambiguousModuleDeclarationStatementContext::unambiguousConstStatement() {
  return getRuleContext<EscriptParser::UnambiguousConstStatementContext>(0);
}


size_t EscriptParser::UnambiguousModuleDeclarationStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousModuleDeclarationStatement;
}

void EscriptParser::UnambiguousModuleDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousModuleDeclarationStatement(this);
}

void EscriptParser::UnambiguousModuleDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousModuleDeclarationStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousModuleDeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousModuleDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousModuleDeclarationStatementContext* EscriptParser::unambiguousModuleDeclarationStatement() {
  UnambiguousModuleDeclarationStatementContext *_localctx = _tracker.createInstance<UnambiguousModuleDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, EscriptParser::RuleUnambiguousModuleDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(364);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(362);
        unambiguousModuleFunctionDeclaration();
        break;
      }

      case EscriptParser::TOK_CONST: {
        enterOuterAlt(_localctx, 2);
        setState(363);
        unambiguousConstStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleFunctionDeclarationContext ------------------------------------------------------------------

EscriptParser::ModuleFunctionDeclarationContext::ModuleFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ModuleFunctionDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::ModuleFunctionDeclarationContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::ModuleFunctionDeclarationContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

tree::TerminalNode* EscriptParser::ModuleFunctionDeclarationContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::ModuleFunctionParameterListContext* EscriptParser::ModuleFunctionDeclarationContext::moduleFunctionParameterList() {
  return getRuleContext<EscriptParser::ModuleFunctionParameterListContext>(0);
}


size_t EscriptParser::ModuleFunctionDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleModuleFunctionDeclaration;
}

void EscriptParser::ModuleFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleFunctionDeclaration(this);
}

void EscriptParser::ModuleFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleFunctionDeclaration(this);
}


antlrcpp::Any EscriptParser::ModuleFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitModuleFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ModuleFunctionDeclarationContext* EscriptParser::moduleFunctionDeclaration() {
  ModuleFunctionDeclarationContext *_localctx = _tracker.createInstance<ModuleFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, EscriptParser::RuleModuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    match(EscriptParser::IDENTIFIER);
    setState(367);
    match(EscriptParser::LPAREN);
    setState(369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(368);
      moduleFunctionParameterList();
    }
    setState(371);
    match(EscriptParser::RPAREN);
    setState(372);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousModuleFunctionDeclarationContext ------------------------------------------------------------------

EscriptParser::UnambiguousModuleFunctionDeclarationContext::UnambiguousModuleFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousModuleFunctionDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousModuleFunctionDeclarationContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousModuleFunctionDeclarationContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousModuleFunctionDeclarationContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::UnambiguousModuleFunctionParameterListContext* EscriptParser::UnambiguousModuleFunctionDeclarationContext::unambiguousModuleFunctionParameterList() {
  return getRuleContext<EscriptParser::UnambiguousModuleFunctionParameterListContext>(0);
}


size_t EscriptParser::UnambiguousModuleFunctionDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousModuleFunctionDeclaration;
}

void EscriptParser::UnambiguousModuleFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousModuleFunctionDeclaration(this);
}

void EscriptParser::UnambiguousModuleFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousModuleFunctionDeclaration(this);
}


antlrcpp::Any EscriptParser::UnambiguousModuleFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousModuleFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousModuleFunctionDeclarationContext* EscriptParser::unambiguousModuleFunctionDeclaration() {
  UnambiguousModuleFunctionDeclarationContext *_localctx = _tracker.createInstance<UnambiguousModuleFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, EscriptParser::RuleUnambiguousModuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    match(EscriptParser::IDENTIFIER);
    setState(375);
    match(EscriptParser::LPAREN);
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(376);
      unambiguousModuleFunctionParameterList();
    }
    setState(379);
    match(EscriptParser::RPAREN);
    setState(380);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleFunctionParameterListContext ------------------------------------------------------------------

EscriptParser::ModuleFunctionParameterListContext::ModuleFunctionParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::ModuleFunctionParameterContext *> EscriptParser::ModuleFunctionParameterListContext::moduleFunctionParameter() {
  return getRuleContexts<EscriptParser::ModuleFunctionParameterContext>();
}

EscriptParser::ModuleFunctionParameterContext* EscriptParser::ModuleFunctionParameterListContext::moduleFunctionParameter(size_t i) {
  return getRuleContext<EscriptParser::ModuleFunctionParameterContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::ModuleFunctionParameterListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::ModuleFunctionParameterListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::ModuleFunctionParameterListContext::getRuleIndex() const {
  return EscriptParser::RuleModuleFunctionParameterList;
}

void EscriptParser::ModuleFunctionParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleFunctionParameterList(this);
}

void EscriptParser::ModuleFunctionParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleFunctionParameterList(this);
}


antlrcpp::Any EscriptParser::ModuleFunctionParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitModuleFunctionParameterList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ModuleFunctionParameterListContext* EscriptParser::moduleFunctionParameterList() {
  ModuleFunctionParameterListContext *_localctx = _tracker.createInstance<ModuleFunctionParameterListContext>(_ctx, getState());
  enterRule(_localctx, 16, EscriptParser::RuleModuleFunctionParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    moduleFunctionParameter();
    setState(387);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(383);
      match(EscriptParser::COMMA);
      setState(384);
      moduleFunctionParameter();
      setState(389);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousModuleFunctionParameterListContext ------------------------------------------------------------------

EscriptParser::UnambiguousModuleFunctionParameterListContext::UnambiguousModuleFunctionParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousModuleFunctionParameterContext *> EscriptParser::UnambiguousModuleFunctionParameterListContext::unambiguousModuleFunctionParameter() {
  return getRuleContexts<EscriptParser::UnambiguousModuleFunctionParameterContext>();
}

EscriptParser::UnambiguousModuleFunctionParameterContext* EscriptParser::UnambiguousModuleFunctionParameterListContext::unambiguousModuleFunctionParameter(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousModuleFunctionParameterContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousModuleFunctionParameterListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::UnambiguousModuleFunctionParameterListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::UnambiguousModuleFunctionParameterListContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousModuleFunctionParameterList;
}

void EscriptParser::UnambiguousModuleFunctionParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousModuleFunctionParameterList(this);
}

void EscriptParser::UnambiguousModuleFunctionParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousModuleFunctionParameterList(this);
}


antlrcpp::Any EscriptParser::UnambiguousModuleFunctionParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousModuleFunctionParameterList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousModuleFunctionParameterListContext* EscriptParser::unambiguousModuleFunctionParameterList() {
  UnambiguousModuleFunctionParameterListContext *_localctx = _tracker.createInstance<UnambiguousModuleFunctionParameterListContext>(_ctx, getState());
  enterRule(_localctx, 18, EscriptParser::RuleUnambiguousModuleFunctionParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    unambiguousModuleFunctionParameter();
    setState(395);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(391);
      match(EscriptParser::COMMA);
      setState(392);
      unambiguousModuleFunctionParameter();
      setState(397);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleFunctionParameterContext ------------------------------------------------------------------

EscriptParser::ModuleFunctionParameterContext::ModuleFunctionParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ModuleFunctionParameterContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::ModuleFunctionParameterContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::ModuleFunctionParameterContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}


size_t EscriptParser::ModuleFunctionParameterContext::getRuleIndex() const {
  return EscriptParser::RuleModuleFunctionParameter;
}

void EscriptParser::ModuleFunctionParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleFunctionParameter(this);
}

void EscriptParser::ModuleFunctionParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleFunctionParameter(this);
}


antlrcpp::Any EscriptParser::ModuleFunctionParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitModuleFunctionParameter(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ModuleFunctionParameterContext* EscriptParser::moduleFunctionParameter() {
  ModuleFunctionParameterContext *_localctx = _tracker.createInstance<ModuleFunctionParameterContext>(_ctx, getState());
  enterRule(_localctx, 20, EscriptParser::RuleModuleFunctionParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    match(EscriptParser::IDENTIFIER);
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ASSIGN) {
      setState(399);
      match(EscriptParser::ASSIGN);
      setState(400);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousModuleFunctionParameterContext ------------------------------------------------------------------

EscriptParser::UnambiguousModuleFunctionParameterContext::UnambiguousModuleFunctionParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousModuleFunctionParameterContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousModuleFunctionParameterContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousModuleFunctionParameterContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}


size_t EscriptParser::UnambiguousModuleFunctionParameterContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousModuleFunctionParameter;
}

void EscriptParser::UnambiguousModuleFunctionParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousModuleFunctionParameter(this);
}

void EscriptParser::UnambiguousModuleFunctionParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousModuleFunctionParameter(this);
}


antlrcpp::Any EscriptParser::UnambiguousModuleFunctionParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousModuleFunctionParameter(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousModuleFunctionParameterContext* EscriptParser::unambiguousModuleFunctionParameter() {
  UnambiguousModuleFunctionParameterContext *_localctx = _tracker.createInstance<UnambiguousModuleFunctionParameterContext>(_ctx, getState());
  enterRule(_localctx, 22, EscriptParser::RuleUnambiguousModuleFunctionParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(EscriptParser::IDENTIFIER);
    setState(406);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ASSIGN) {
      setState(404);
      match(EscriptParser::ASSIGN);
      setState(405);
      unambiguousExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnitExpressionContext ------------------------------------------------------------------

EscriptParser::UnitExpressionContext::UnitExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::ExpressionContext* EscriptParser::UnitExpressionContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::UnitExpressionContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::UnitExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleUnitExpression;
}

void EscriptParser::UnitExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnitExpression(this);
}

void EscriptParser::UnitExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnitExpression(this);
}


antlrcpp::Any EscriptParser::UnitExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnitExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnitExpressionContext* EscriptParser::unitExpression() {
  UnitExpressionContext *_localctx = _tracker.createInstance<UnitExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, EscriptParser::RuleUnitExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    expression(0);
    setState(410);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::SEMI) {
      setState(409);
      match(EscriptParser::SEMI);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelDeclarationContext ------------------------------------------------------------------

EscriptParser::TopLevelDeclarationContext::TopLevelDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::UseDeclarationContext* EscriptParser::TopLevelDeclarationContext::useDeclaration() {
  return getRuleContext<EscriptParser::UseDeclarationContext>(0);
}

EscriptParser::IncludeDeclarationContext* EscriptParser::TopLevelDeclarationContext::includeDeclaration() {
  return getRuleContext<EscriptParser::IncludeDeclarationContext>(0);
}

EscriptParser::ProgramDeclarationContext* EscriptParser::TopLevelDeclarationContext::programDeclaration() {
  return getRuleContext<EscriptParser::ProgramDeclarationContext>(0);
}

EscriptParser::FunctionDeclarationContext* EscriptParser::TopLevelDeclarationContext::functionDeclaration() {
  return getRuleContext<EscriptParser::FunctionDeclarationContext>(0);
}

EscriptParser::StatementContext* EscriptParser::TopLevelDeclarationContext::statement() {
  return getRuleContext<EscriptParser::StatementContext>(0);
}


size_t EscriptParser::TopLevelDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleTopLevelDeclaration;
}

void EscriptParser::TopLevelDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelDeclaration(this);
}

void EscriptParser::TopLevelDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelDeclaration(this);
}


antlrcpp::Any EscriptParser::TopLevelDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitTopLevelDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::TopLevelDeclarationContext* EscriptParser::topLevelDeclaration() {
  TopLevelDeclarationContext *_localctx = _tracker.createInstance<TopLevelDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, EscriptParser::RuleTopLevelDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(417);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::USE: {
        enterOuterAlt(_localctx, 1);
        setState(412);
        useDeclaration();
        break;
      }

      case EscriptParser::INCLUDE: {
        enterOuterAlt(_localctx, 2);
        setState(413);
        includeDeclaration();
        break;
      }

      case EscriptParser::PROGRAM: {
        enterOuterAlt(_localctx, 3);
        setState(414);
        programDeclaration();
        break;
      }

      case EscriptParser::FUNCTION:
      case EscriptParser::EXPORTED: {
        enterOuterAlt(_localctx, 4);
        setState(415);
        functionDeclaration();
        break;
      }

      case EscriptParser::IF:
      case EscriptParser::GOTO:
      case EscriptParser::RETURN:
      case EscriptParser::TOK_CONST:
      case EscriptParser::VAR:
      case EscriptParser::DO:
      case EscriptParser::WHILE:
      case EscriptParser::EXIT:
      case EscriptParser::DECLARE:
      case EscriptParser::BREAK:
      case EscriptParser::CONTINUE:
      case EscriptParser::FOR:
      case EscriptParser::FOREACH:
      case EscriptParser::REPEAT:
      case EscriptParser::CASE:
      case EscriptParser::ENUM:
      case EscriptParser::BANG_A:
      case EscriptParser::BANG_B:
      case EscriptParser::TOK_ERROR:
      case EscriptParser::DICTIONARY:
      case EscriptParser::STRUCT:
      case EscriptParser::ARRAY:
      case EscriptParser::DECIMAL_LITERAL:
      case EscriptParser::HEX_LITERAL:
      case EscriptParser::OCT_LITERAL:
      case EscriptParser::BINARY_LITERAL:
      case EscriptParser::FLOAT_LITERAL:
      case EscriptParser::HEX_FLOAT_LITERAL:
      case EscriptParser::CHAR_LITERAL:
      case EscriptParser::STRING_LITERAL:
      case EscriptParser::NULL_LITERAL:
      case EscriptParser::LPAREN:
      case EscriptParser::LBRACE:
      case EscriptParser::ADD:
      case EscriptParser::SUB:
      case EscriptParser::SEMI:
      case EscriptParser::TILDE:
      case EscriptParser::AT:
      case EscriptParser::INC:
      case EscriptParser::DEC:
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 5);
        setState(416);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousTopLevelDeclarationContext ------------------------------------------------------------------

EscriptParser::UnambiguousTopLevelDeclarationContext::UnambiguousTopLevelDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::UseDeclarationContext* EscriptParser::UnambiguousTopLevelDeclarationContext::useDeclaration() {
  return getRuleContext<EscriptParser::UseDeclarationContext>(0);
}

EscriptParser::IncludeDeclarationContext* EscriptParser::UnambiguousTopLevelDeclarationContext::includeDeclaration() {
  return getRuleContext<EscriptParser::IncludeDeclarationContext>(0);
}

EscriptParser::UnambiguousProgramDeclarationContext* EscriptParser::UnambiguousTopLevelDeclarationContext::unambiguousProgramDeclaration() {
  return getRuleContext<EscriptParser::UnambiguousProgramDeclarationContext>(0);
}

EscriptParser::UnambiguousFunctionDeclarationContext* EscriptParser::UnambiguousTopLevelDeclarationContext::unambiguousFunctionDeclaration() {
  return getRuleContext<EscriptParser::UnambiguousFunctionDeclarationContext>(0);
}

EscriptParser::UnambiguousStatementContext* EscriptParser::UnambiguousTopLevelDeclarationContext::unambiguousStatement() {
  return getRuleContext<EscriptParser::UnambiguousStatementContext>(0);
}


size_t EscriptParser::UnambiguousTopLevelDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousTopLevelDeclaration;
}

void EscriptParser::UnambiguousTopLevelDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousTopLevelDeclaration(this);
}

void EscriptParser::UnambiguousTopLevelDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousTopLevelDeclaration(this);
}


antlrcpp::Any EscriptParser::UnambiguousTopLevelDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousTopLevelDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousTopLevelDeclarationContext* EscriptParser::unambiguousTopLevelDeclaration() {
  UnambiguousTopLevelDeclarationContext *_localctx = _tracker.createInstance<UnambiguousTopLevelDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, EscriptParser::RuleUnambiguousTopLevelDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(424);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::USE: {
        enterOuterAlt(_localctx, 1);
        setState(419);
        useDeclaration();
        break;
      }

      case EscriptParser::INCLUDE: {
        enterOuterAlt(_localctx, 2);
        setState(420);
        includeDeclaration();
        break;
      }

      case EscriptParser::PROGRAM: {
        enterOuterAlt(_localctx, 3);
        setState(421);
        unambiguousProgramDeclaration();
        break;
      }

      case EscriptParser::FUNCTION:
      case EscriptParser::EXPORTED: {
        enterOuterAlt(_localctx, 4);
        setState(422);
        unambiguousFunctionDeclaration();
        break;
      }

      case EscriptParser::IF:
      case EscriptParser::RETURN:
      case EscriptParser::TOK_CONST:
      case EscriptParser::VAR:
      case EscriptParser::DO:
      case EscriptParser::WHILE:
      case EscriptParser::EXIT:
      case EscriptParser::BREAK:
      case EscriptParser::CONTINUE:
      case EscriptParser::FOR:
      case EscriptParser::FOREACH:
      case EscriptParser::REPEAT:
      case EscriptParser::CASE:
      case EscriptParser::ENUM:
      case EscriptParser::BANG_A:
      case EscriptParser::BANG_B:
      case EscriptParser::TOK_ERROR:
      case EscriptParser::DICTIONARY:
      case EscriptParser::STRUCT:
      case EscriptParser::ARRAY:
      case EscriptParser::DECIMAL_LITERAL:
      case EscriptParser::HEX_LITERAL:
      case EscriptParser::OCT_LITERAL:
      case EscriptParser::BINARY_LITERAL:
      case EscriptParser::FLOAT_LITERAL:
      case EscriptParser::HEX_FLOAT_LITERAL:
      case EscriptParser::CHAR_LITERAL:
      case EscriptParser::STRING_LITERAL:
      case EscriptParser::NULL_LITERAL:
      case EscriptParser::LPAREN:
      case EscriptParser::LBRACE:
      case EscriptParser::ADD:
      case EscriptParser::SUB:
      case EscriptParser::SEMI:
      case EscriptParser::TILDE:
      case EscriptParser::AT:
      case EscriptParser::INC:
      case EscriptParser::DEC:
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 5);
        setState(423);
        unambiguousStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

EscriptParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::FunctionDeclarationContext::FUNCTION() {
  return getToken(EscriptParser::FUNCTION, 0);
}

tree::TerminalNode* EscriptParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::FunctionParametersContext* EscriptParser::FunctionDeclarationContext::functionParameters() {
  return getRuleContext<EscriptParser::FunctionParametersContext>(0);
}

EscriptParser::BlockContext* EscriptParser::FunctionDeclarationContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::FunctionDeclarationContext::ENDFUNCTION() {
  return getToken(EscriptParser::ENDFUNCTION, 0);
}

tree::TerminalNode* EscriptParser::FunctionDeclarationContext::EXPORTED() {
  return getToken(EscriptParser::EXPORTED, 0);
}


size_t EscriptParser::FunctionDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleFunctionDeclaration;
}

void EscriptParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void EscriptParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any EscriptParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FunctionDeclarationContext* EscriptParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 30, EscriptParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::EXPORTED) {
      setState(426);
      match(EscriptParser::EXPORTED);
    }
    setState(429);
    match(EscriptParser::FUNCTION);
    setState(430);
    match(EscriptParser::IDENTIFIER);
    setState(431);
    functionParameters();
    setState(432);
    block();
    setState(433);
    match(EscriptParser::ENDFUNCTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousFunctionDeclarationContext ------------------------------------------------------------------

EscriptParser::UnambiguousFunctionDeclarationContext::UnambiguousFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionDeclarationContext::FUNCTION() {
  return getToken(EscriptParser::FUNCTION, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::UnambiguousFunctionParametersContext* EscriptParser::UnambiguousFunctionDeclarationContext::unambiguousFunctionParameters() {
  return getRuleContext<EscriptParser::UnambiguousFunctionParametersContext>(0);
}

EscriptParser::UnambiguousBlockContext* EscriptParser::UnambiguousFunctionDeclarationContext::unambiguousBlock() {
  return getRuleContext<EscriptParser::UnambiguousBlockContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionDeclarationContext::ENDFUNCTION() {
  return getToken(EscriptParser::ENDFUNCTION, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionDeclarationContext::EXPORTED() {
  return getToken(EscriptParser::EXPORTED, 0);
}


size_t EscriptParser::UnambiguousFunctionDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousFunctionDeclaration;
}

void EscriptParser::UnambiguousFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousFunctionDeclaration(this);
}

void EscriptParser::UnambiguousFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousFunctionDeclaration(this);
}


antlrcpp::Any EscriptParser::UnambiguousFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousFunctionDeclarationContext* EscriptParser::unambiguousFunctionDeclaration() {
  UnambiguousFunctionDeclarationContext *_localctx = _tracker.createInstance<UnambiguousFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, EscriptParser::RuleUnambiguousFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::EXPORTED) {
      setState(435);
      match(EscriptParser::EXPORTED);
    }
    setState(438);
    match(EscriptParser::FUNCTION);
    setState(439);
    match(EscriptParser::IDENTIFIER);
    setState(440);
    unambiguousFunctionParameters();
    setState(441);
    unambiguousBlock();
    setState(442);
    match(EscriptParser::ENDFUNCTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringIdentifierContext ------------------------------------------------------------------

EscriptParser::StringIdentifierContext::StringIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::StringIdentifierContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::StringIdentifierContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}


size_t EscriptParser::StringIdentifierContext::getRuleIndex() const {
  return EscriptParser::RuleStringIdentifier;
}

void EscriptParser::StringIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringIdentifier(this);
}

void EscriptParser::StringIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringIdentifier(this);
}


antlrcpp::Any EscriptParser::StringIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStringIdentifier(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StringIdentifierContext* EscriptParser::stringIdentifier() {
  StringIdentifierContext *_localctx = _tracker.createInstance<StringIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 34, EscriptParser::RuleStringIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    _la = _input->LA(1);
    if (!(_la == EscriptParser::STRING_LITERAL

    || _la == EscriptParser::IDENTIFIER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UseDeclarationContext ------------------------------------------------------------------

EscriptParser::UseDeclarationContext::UseDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UseDeclarationContext::USE() {
  return getToken(EscriptParser::USE, 0);
}

EscriptParser::StringIdentifierContext* EscriptParser::UseDeclarationContext::stringIdentifier() {
  return getRuleContext<EscriptParser::StringIdentifierContext>(0);
}

tree::TerminalNode* EscriptParser::UseDeclarationContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::UseDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleUseDeclaration;
}

void EscriptParser::UseDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUseDeclaration(this);
}

void EscriptParser::UseDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUseDeclaration(this);
}


antlrcpp::Any EscriptParser::UseDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUseDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UseDeclarationContext* EscriptParser::useDeclaration() {
  UseDeclarationContext *_localctx = _tracker.createInstance<UseDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 36, EscriptParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    match(EscriptParser::USE);
    setState(447);
    stringIdentifier();
    setState(448);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeDeclarationContext ------------------------------------------------------------------

EscriptParser::IncludeDeclarationContext::IncludeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::IncludeDeclarationContext::INCLUDE() {
  return getToken(EscriptParser::INCLUDE, 0);
}

EscriptParser::StringIdentifierContext* EscriptParser::IncludeDeclarationContext::stringIdentifier() {
  return getRuleContext<EscriptParser::StringIdentifierContext>(0);
}

tree::TerminalNode* EscriptParser::IncludeDeclarationContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::IncludeDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleIncludeDeclaration;
}

void EscriptParser::IncludeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncludeDeclaration(this);
}

void EscriptParser::IncludeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncludeDeclaration(this);
}


antlrcpp::Any EscriptParser::IncludeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitIncludeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::IncludeDeclarationContext* EscriptParser::includeDeclaration() {
  IncludeDeclarationContext *_localctx = _tracker.createInstance<IncludeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 38, EscriptParser::RuleIncludeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    match(EscriptParser::INCLUDE);
    setState(451);
    stringIdentifier();
    setState(452);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramDeclarationContext ------------------------------------------------------------------

EscriptParser::ProgramDeclarationContext::ProgramDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ProgramDeclarationContext::PROGRAM() {
  return getToken(EscriptParser::PROGRAM, 0);
}

tree::TerminalNode* EscriptParser::ProgramDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::ProgramParametersContext* EscriptParser::ProgramDeclarationContext::programParameters() {
  return getRuleContext<EscriptParser::ProgramParametersContext>(0);
}

EscriptParser::BlockContext* EscriptParser::ProgramDeclarationContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::ProgramDeclarationContext::ENDPROGRAM() {
  return getToken(EscriptParser::ENDPROGRAM, 0);
}


size_t EscriptParser::ProgramDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleProgramDeclaration;
}

void EscriptParser::ProgramDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramDeclaration(this);
}

void EscriptParser::ProgramDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramDeclaration(this);
}


antlrcpp::Any EscriptParser::ProgramDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitProgramDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ProgramDeclarationContext* EscriptParser::programDeclaration() {
  ProgramDeclarationContext *_localctx = _tracker.createInstance<ProgramDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, EscriptParser::RuleProgramDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(454);
    match(EscriptParser::PROGRAM);
    setState(455);
    match(EscriptParser::IDENTIFIER);
    setState(456);
    programParameters();
    setState(457);
    block();
    setState(458);
    match(EscriptParser::ENDPROGRAM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousProgramDeclarationContext ------------------------------------------------------------------

EscriptParser::UnambiguousProgramDeclarationContext::UnambiguousProgramDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousProgramDeclarationContext::PROGRAM() {
  return getToken(EscriptParser::PROGRAM, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousProgramDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::UnambiguousProgramParametersContext* EscriptParser::UnambiguousProgramDeclarationContext::unambiguousProgramParameters() {
  return getRuleContext<EscriptParser::UnambiguousProgramParametersContext>(0);
}

EscriptParser::UnambiguousBlockContext* EscriptParser::UnambiguousProgramDeclarationContext::unambiguousBlock() {
  return getRuleContext<EscriptParser::UnambiguousBlockContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousProgramDeclarationContext::ENDPROGRAM() {
  return getToken(EscriptParser::ENDPROGRAM, 0);
}


size_t EscriptParser::UnambiguousProgramDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousProgramDeclaration;
}

void EscriptParser::UnambiguousProgramDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousProgramDeclaration(this);
}

void EscriptParser::UnambiguousProgramDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousProgramDeclaration(this);
}


antlrcpp::Any EscriptParser::UnambiguousProgramDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousProgramDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousProgramDeclarationContext* EscriptParser::unambiguousProgramDeclaration() {
  UnambiguousProgramDeclarationContext *_localctx = _tracker.createInstance<UnambiguousProgramDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 42, EscriptParser::RuleUnambiguousProgramDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(460);
    match(EscriptParser::PROGRAM);
    setState(461);
    match(EscriptParser::IDENTIFIER);
    setState(462);
    unambiguousProgramParameters();
    setState(463);
    unambiguousBlock();
    setState(464);
    match(EscriptParser::ENDPROGRAM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousStatementContext::UnambiguousStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::UnambiguousIfStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousIfStatement() {
  return getRuleContext<EscriptParser::UnambiguousIfStatementContext>(0);
}

EscriptParser::UnambiguousReturnStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousReturnStatement() {
  return getRuleContext<EscriptParser::UnambiguousReturnStatementContext>(0);
}

EscriptParser::UnambiguousConstStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousConstStatement() {
  return getRuleContext<EscriptParser::UnambiguousConstStatementContext>(0);
}

EscriptParser::UnambiguousVarStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousVarStatement() {
  return getRuleContext<EscriptParser::UnambiguousVarStatementContext>(0);
}

EscriptParser::UnambiguousDoStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousDoStatement() {
  return getRuleContext<EscriptParser::UnambiguousDoStatementContext>(0);
}

EscriptParser::UnambiguousWhileStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousWhileStatement() {
  return getRuleContext<EscriptParser::UnambiguousWhileStatementContext>(0);
}

EscriptParser::ExitStatementContext* EscriptParser::UnambiguousStatementContext::exitStatement() {
  return getRuleContext<EscriptParser::ExitStatementContext>(0);
}

EscriptParser::BreakStatementContext* EscriptParser::UnambiguousStatementContext::breakStatement() {
  return getRuleContext<EscriptParser::BreakStatementContext>(0);
}

EscriptParser::ContinueStatementContext* EscriptParser::UnambiguousStatementContext::continueStatement() {
  return getRuleContext<EscriptParser::ContinueStatementContext>(0);
}

EscriptParser::UnambiguousForStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousForStatement() {
  return getRuleContext<EscriptParser::UnambiguousForStatementContext>(0);
}

EscriptParser::UnambiguousForeachStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousForeachStatement() {
  return getRuleContext<EscriptParser::UnambiguousForeachStatementContext>(0);
}

EscriptParser::UnambiguousRepeatStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousRepeatStatement() {
  return getRuleContext<EscriptParser::UnambiguousRepeatStatementContext>(0);
}

EscriptParser::UnambiguousCaseStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousCaseStatement() {
  return getRuleContext<EscriptParser::UnambiguousCaseStatementContext>(0);
}

EscriptParser::UnambiguousEnumStatementContext* EscriptParser::UnambiguousStatementContext::unambiguousEnumStatement() {
  return getRuleContext<EscriptParser::UnambiguousEnumStatementContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousStatementContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}


size_t EscriptParser::UnambiguousStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousStatement;
}

void EscriptParser::UnambiguousStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousStatement(this);
}

void EscriptParser::UnambiguousStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousStatementContext* EscriptParser::unambiguousStatement() {
  UnambiguousStatementContext *_localctx = _tracker.createInstance<UnambiguousStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, EscriptParser::RuleUnambiguousStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(484);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(466);
      unambiguousIfStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(467);
      unambiguousReturnStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(468);
      unambiguousConstStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(469);
      unambiguousVarStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(470);
      unambiguousDoStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(471);
      unambiguousWhileStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(472);
      exitStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(473);
      breakStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(474);
      continueStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(475);
      unambiguousForStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(476);
      unambiguousForeachStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(477);
      unambiguousRepeatStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(478);
      unambiguousCaseStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(479);
      unambiguousEnumStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(480);
      match(EscriptParser::SEMI);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(481);
      dynamic_cast<UnambiguousStatementContext *>(_localctx)->statementUnambiguousExpression = unambiguousExpression();
      setState(482);
      match(EscriptParser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

EscriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::IfStatementContext* EscriptParser::StatementContext::ifStatement() {
  return getRuleContext<EscriptParser::IfStatementContext>(0);
}

EscriptParser::GotoStatementContext* EscriptParser::StatementContext::gotoStatement() {
  return getRuleContext<EscriptParser::GotoStatementContext>(0);
}

EscriptParser::ReturnStatementContext* EscriptParser::StatementContext::returnStatement() {
  return getRuleContext<EscriptParser::ReturnStatementContext>(0);
}

EscriptParser::ConstStatementContext* EscriptParser::StatementContext::constStatement() {
  return getRuleContext<EscriptParser::ConstStatementContext>(0);
}

EscriptParser::VarStatementContext* EscriptParser::StatementContext::varStatement() {
  return getRuleContext<EscriptParser::VarStatementContext>(0);
}

EscriptParser::DoStatementContext* EscriptParser::StatementContext::doStatement() {
  return getRuleContext<EscriptParser::DoStatementContext>(0);
}

EscriptParser::WhileStatementContext* EscriptParser::StatementContext::whileStatement() {
  return getRuleContext<EscriptParser::WhileStatementContext>(0);
}

EscriptParser::ExitStatementContext* EscriptParser::StatementContext::exitStatement() {
  return getRuleContext<EscriptParser::ExitStatementContext>(0);
}

EscriptParser::DeclareStatementContext* EscriptParser::StatementContext::declareStatement() {
  return getRuleContext<EscriptParser::DeclareStatementContext>(0);
}

EscriptParser::BreakStatementContext* EscriptParser::StatementContext::breakStatement() {
  return getRuleContext<EscriptParser::BreakStatementContext>(0);
}

EscriptParser::ContinueStatementContext* EscriptParser::StatementContext::continueStatement() {
  return getRuleContext<EscriptParser::ContinueStatementContext>(0);
}

EscriptParser::ForStatementContext* EscriptParser::StatementContext::forStatement() {
  return getRuleContext<EscriptParser::ForStatementContext>(0);
}

EscriptParser::ForeachStatementContext* EscriptParser::StatementContext::foreachStatement() {
  return getRuleContext<EscriptParser::ForeachStatementContext>(0);
}

EscriptParser::RepeatStatementContext* EscriptParser::StatementContext::repeatStatement() {
  return getRuleContext<EscriptParser::RepeatStatementContext>(0);
}

EscriptParser::CaseStatementContext* EscriptParser::StatementContext::caseStatement() {
  return getRuleContext<EscriptParser::CaseStatementContext>(0);
}

EscriptParser::EnumStatementContext* EscriptParser::StatementContext::enumStatement() {
  return getRuleContext<EscriptParser::EnumStatementContext>(0);
}

tree::TerminalNode* EscriptParser::StatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::ExpressionContext* EscriptParser::StatementContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}


size_t EscriptParser::StatementContext::getRuleIndex() const {
  return EscriptParser::RuleStatement;
}

void EscriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void EscriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any EscriptParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StatementContext* EscriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 46, EscriptParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(506);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(486);
      ifStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(487);
      gotoStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(488);
      returnStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(489);
      constStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(490);
      varStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(491);
      doStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(492);
      whileStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(493);
      exitStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(494);
      declareStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(495);
      breakStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(496);
      continueStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(497);
      forStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(498);
      foreachStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(499);
      repeatStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(500);
      caseStatement();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(501);
      enumStatement();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(502);
      match(EscriptParser::SEMI);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(503);
      dynamic_cast<StatementContext *>(_localctx)->statementExpression = expression(0);
      setState(504);
      match(EscriptParser::SEMI);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementLabelContext ------------------------------------------------------------------

EscriptParser::StatementLabelContext::StatementLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::StatementLabelContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::StatementLabelContext::COLON() {
  return getToken(EscriptParser::COLON, 0);
}


size_t EscriptParser::StatementLabelContext::getRuleIndex() const {
  return EscriptParser::RuleStatementLabel;
}

void EscriptParser::StatementLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementLabel(this);
}

void EscriptParser::StatementLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementLabel(this);
}


antlrcpp::Any EscriptParser::StatementLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStatementLabel(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StatementLabelContext* EscriptParser::statementLabel() {
  StatementLabelContext *_localctx = _tracker.createInstance<StatementLabelContext>(_ctx, getState());
  enterRule(_localctx, 48, EscriptParser::RuleStatementLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    match(EscriptParser::IDENTIFIER);
    setState(509);
    match(EscriptParser::COLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

EscriptParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::IfStatementContext::IF() {
  return getToken(EscriptParser::IF, 0);
}

std::vector<EscriptParser::ParExpressionContext *> EscriptParser::IfStatementContext::parExpression() {
  return getRuleContexts<EscriptParser::ParExpressionContext>();
}

EscriptParser::ParExpressionContext* EscriptParser::IfStatementContext::parExpression(size_t i) {
  return getRuleContext<EscriptParser::ParExpressionContext>(i);
}

std::vector<EscriptParser::BlockContext *> EscriptParser::IfStatementContext::block() {
  return getRuleContexts<EscriptParser::BlockContext>();
}

EscriptParser::BlockContext* EscriptParser::IfStatementContext::block(size_t i) {
  return getRuleContext<EscriptParser::BlockContext>(i);
}

tree::TerminalNode* EscriptParser::IfStatementContext::ENDIF() {
  return getToken(EscriptParser::ENDIF, 0);
}

tree::TerminalNode* EscriptParser::IfStatementContext::THEN() {
  return getToken(EscriptParser::THEN, 0);
}

std::vector<tree::TerminalNode *> EscriptParser::IfStatementContext::ELSEIF() {
  return getTokens(EscriptParser::ELSEIF);
}

tree::TerminalNode* EscriptParser::IfStatementContext::ELSEIF(size_t i) {
  return getToken(EscriptParser::ELSEIF, i);
}

tree::TerminalNode* EscriptParser::IfStatementContext::ELSE() {
  return getToken(EscriptParser::ELSE, 0);
}


size_t EscriptParser::IfStatementContext::getRuleIndex() const {
  return EscriptParser::RuleIfStatement;
}

void EscriptParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void EscriptParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any EscriptParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::IfStatementContext* EscriptParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, EscriptParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    match(EscriptParser::IF);
    setState(512);
    parExpression();
    setState(514);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::THEN) {
      setState(513);
      match(EscriptParser::THEN);
    }
    setState(516);
    block();
    setState(523);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::ELSEIF) {
      setState(517);
      match(EscriptParser::ELSEIF);
      setState(518);
      parExpression();
      setState(519);
      block();
      setState(525);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(528);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ELSE) {
      setState(526);
      match(EscriptParser::ELSE);
      setState(527);
      block();
    }
    setState(530);
    match(EscriptParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousIfStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousIfStatementContext::UnambiguousIfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousIfStatementContext::IF() {
  return getToken(EscriptParser::IF, 0);
}

std::vector<EscriptParser::ParenthesizedExpressionContext *> EscriptParser::UnambiguousIfStatementContext::parenthesizedExpression() {
  return getRuleContexts<EscriptParser::ParenthesizedExpressionContext>();
}

EscriptParser::ParenthesizedExpressionContext* EscriptParser::UnambiguousIfStatementContext::parenthesizedExpression(size_t i) {
  return getRuleContext<EscriptParser::ParenthesizedExpressionContext>(i);
}

std::vector<EscriptParser::UnambiguousBlockContext *> EscriptParser::UnambiguousIfStatementContext::unambiguousBlock() {
  return getRuleContexts<EscriptParser::UnambiguousBlockContext>();
}

EscriptParser::UnambiguousBlockContext* EscriptParser::UnambiguousIfStatementContext::unambiguousBlock(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousBlockContext>(i);
}

tree::TerminalNode* EscriptParser::UnambiguousIfStatementContext::ENDIF() {
  return getToken(EscriptParser::ENDIF, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousIfStatementContext::THEN() {
  return getToken(EscriptParser::THEN, 0);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousIfStatementContext::ELSEIF() {
  return getTokens(EscriptParser::ELSEIF);
}

tree::TerminalNode* EscriptParser::UnambiguousIfStatementContext::ELSEIF(size_t i) {
  return getToken(EscriptParser::ELSEIF, i);
}

tree::TerminalNode* EscriptParser::UnambiguousIfStatementContext::ELSE() {
  return getToken(EscriptParser::ELSE, 0);
}


size_t EscriptParser::UnambiguousIfStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousIfStatement;
}

void EscriptParser::UnambiguousIfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousIfStatement(this);
}

void EscriptParser::UnambiguousIfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousIfStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousIfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousIfStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousIfStatementContext* EscriptParser::unambiguousIfStatement() {
  UnambiguousIfStatementContext *_localctx = _tracker.createInstance<UnambiguousIfStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, EscriptParser::RuleUnambiguousIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(532);
    match(EscriptParser::IF);
    setState(533);
    parenthesizedExpression();
    setState(535);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::THEN) {
      setState(534);
      match(EscriptParser::THEN);
    }
    setState(537);
    unambiguousBlock();
    setState(544);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::ELSEIF) {
      setState(538);
      match(EscriptParser::ELSEIF);
      setState(539);
      parenthesizedExpression();
      setState(540);
      unambiguousBlock();
      setState(546);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(549);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ELSE) {
      setState(547);
      match(EscriptParser::ELSE);
      setState(548);
      unambiguousBlock();
    }
    setState(551);
    match(EscriptParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

EscriptParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::GotoStatementContext::GOTO() {
  return getToken(EscriptParser::GOTO, 0);
}

tree::TerminalNode* EscriptParser::GotoStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::GotoStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::GotoStatementContext::getRuleIndex() const {
  return EscriptParser::RuleGotoStatement;
}

void EscriptParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}

void EscriptParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}


antlrcpp::Any EscriptParser::GotoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitGotoStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::GotoStatementContext* EscriptParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, EscriptParser::RuleGotoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    match(EscriptParser::GOTO);
    setState(554);
    match(EscriptParser::IDENTIFIER);
    setState(555);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

EscriptParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ReturnStatementContext::RETURN() {
  return getToken(EscriptParser::RETURN, 0);
}

tree::TerminalNode* EscriptParser::ReturnStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::ExpressionContext* EscriptParser::ReturnStatementContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}


size_t EscriptParser::ReturnStatementContext::getRuleIndex() const {
  return EscriptParser::RuleReturnStatement;
}

void EscriptParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void EscriptParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any EscriptParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ReturnStatementContext* EscriptParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 56, EscriptParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(EscriptParser::RETURN);
    setState(559);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::TOK_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(558);
      expression(0);
    }
    setState(561);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousReturnStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousReturnStatementContext::UnambiguousReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousReturnStatementContext::RETURN() {
  return getToken(EscriptParser::RETURN, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousReturnStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousReturnStatementContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}


size_t EscriptParser::UnambiguousReturnStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousReturnStatement;
}

void EscriptParser::UnambiguousReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousReturnStatement(this);
}

void EscriptParser::UnambiguousReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousReturnStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousReturnStatementContext* EscriptParser::unambiguousReturnStatement() {
  UnambiguousReturnStatementContext *_localctx = _tracker.createInstance<UnambiguousReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 58, EscriptParser::RuleUnambiguousReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    match(EscriptParser::RETURN);
    setState(565);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::TOK_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(564);
      unambiguousExpression();
    }
    setState(567);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstStatementContext ------------------------------------------------------------------

EscriptParser::ConstStatementContext::ConstStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ConstStatementContext::TOK_CONST() {
  return getToken(EscriptParser::TOK_CONST, 0);
}

EscriptParser::VariableDeclarationContext* EscriptParser::ConstStatementContext::variableDeclaration() {
  return getRuleContext<EscriptParser::VariableDeclarationContext>(0);
}

tree::TerminalNode* EscriptParser::ConstStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::ConstStatementContext::getRuleIndex() const {
  return EscriptParser::RuleConstStatement;
}

void EscriptParser::ConstStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstStatement(this);
}

void EscriptParser::ConstStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstStatement(this);
}


antlrcpp::Any EscriptParser::ConstStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitConstStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ConstStatementContext* EscriptParser::constStatement() {
  ConstStatementContext *_localctx = _tracker.createInstance<ConstStatementContext>(_ctx, getState());
  enterRule(_localctx, 60, EscriptParser::RuleConstStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(569);
    match(EscriptParser::TOK_CONST);
    setState(570);
    variableDeclaration();
    setState(571);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousConstStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousConstStatementContext::UnambiguousConstStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousConstStatementContext::TOK_CONST() {
  return getToken(EscriptParser::TOK_CONST, 0);
}

EscriptParser::UnambiguousVariableDeclarationContext* EscriptParser::UnambiguousConstStatementContext::unambiguousVariableDeclaration() {
  return getRuleContext<EscriptParser::UnambiguousVariableDeclarationContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousConstStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::UnambiguousConstStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousConstStatement;
}

void EscriptParser::UnambiguousConstStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousConstStatement(this);
}

void EscriptParser::UnambiguousConstStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousConstStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousConstStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousConstStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousConstStatementContext* EscriptParser::unambiguousConstStatement() {
  UnambiguousConstStatementContext *_localctx = _tracker.createInstance<UnambiguousConstStatementContext>(_ctx, getState());
  enterRule(_localctx, 62, EscriptParser::RuleUnambiguousConstStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(573);
    match(EscriptParser::TOK_CONST);
    setState(574);
    unambiguousVariableDeclaration();
    setState(575);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarStatementContext ------------------------------------------------------------------

EscriptParser::VarStatementContext::VarStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::VarStatementContext::VAR() {
  return getToken(EscriptParser::VAR, 0);
}

EscriptParser::VariableDeclarationListContext* EscriptParser::VarStatementContext::variableDeclarationList() {
  return getRuleContext<EscriptParser::VariableDeclarationListContext>(0);
}

tree::TerminalNode* EscriptParser::VarStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::VarStatementContext::getRuleIndex() const {
  return EscriptParser::RuleVarStatement;
}

void EscriptParser::VarStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarStatement(this);
}

void EscriptParser::VarStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarStatement(this);
}


antlrcpp::Any EscriptParser::VarStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitVarStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::VarStatementContext* EscriptParser::varStatement() {
  VarStatementContext *_localctx = _tracker.createInstance<VarStatementContext>(_ctx, getState());
  enterRule(_localctx, 64, EscriptParser::RuleVarStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(577);
    match(EscriptParser::VAR);
    setState(578);
    variableDeclarationList();
    setState(579);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousVarStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousVarStatementContext::UnambiguousVarStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousVarStatementContext::VAR() {
  return getToken(EscriptParser::VAR, 0);
}

EscriptParser::UnambiguousVariableDeclarationListContext* EscriptParser::UnambiguousVarStatementContext::unambiguousVariableDeclarationList() {
  return getRuleContext<EscriptParser::UnambiguousVariableDeclarationListContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousVarStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::UnambiguousVarStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousVarStatement;
}

void EscriptParser::UnambiguousVarStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousVarStatement(this);
}

void EscriptParser::UnambiguousVarStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousVarStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousVarStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousVarStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousVarStatementContext* EscriptParser::unambiguousVarStatement() {
  UnambiguousVarStatementContext *_localctx = _tracker.createInstance<UnambiguousVarStatementContext>(_ctx, getState());
  enterRule(_localctx, 66, EscriptParser::RuleUnambiguousVarStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    match(EscriptParser::VAR);
    setState(582);
    unambiguousVariableDeclarationList();
    setState(583);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoStatementContext ------------------------------------------------------------------

EscriptParser::DoStatementContext::DoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::DoStatementContext::DO() {
  return getToken(EscriptParser::DO, 0);
}

EscriptParser::BlockContext* EscriptParser::DoStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::DoStatementContext::DOWHILE() {
  return getToken(EscriptParser::DOWHILE, 0);
}

EscriptParser::ParExpressionContext* EscriptParser::DoStatementContext::parExpression() {
  return getRuleContext<EscriptParser::ParExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::DoStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::DoStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}


size_t EscriptParser::DoStatementContext::getRuleIndex() const {
  return EscriptParser::RuleDoStatement;
}

void EscriptParser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}

void EscriptParser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}


antlrcpp::Any EscriptParser::DoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDoStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DoStatementContext* EscriptParser::doStatement() {
  DoStatementContext *_localctx = _tracker.createInstance<DoStatementContext>(_ctx, getState());
  enterRule(_localctx, 68, EscriptParser::RuleDoStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(586);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(585);
      statementLabel();
    }
    setState(588);
    match(EscriptParser::DO);
    setState(589);
    block();
    setState(590);
    match(EscriptParser::DOWHILE);
    setState(591);
    parExpression();
    setState(592);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousDoStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousDoStatementContext::UnambiguousDoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousDoStatementContext::DO() {
  return getToken(EscriptParser::DO, 0);
}

EscriptParser::UnambiguousBlockContext* EscriptParser::UnambiguousDoStatementContext::unambiguousBlock() {
  return getRuleContext<EscriptParser::UnambiguousBlockContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousDoStatementContext::DOWHILE() {
  return getToken(EscriptParser::DOWHILE, 0);
}

EscriptParser::ParenthesizedExpressionContext* EscriptParser::UnambiguousDoStatementContext::parenthesizedExpression() {
  return getRuleContext<EscriptParser::ParenthesizedExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousDoStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::UnambiguousDoStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}


size_t EscriptParser::UnambiguousDoStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousDoStatement;
}

void EscriptParser::UnambiguousDoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousDoStatement(this);
}

void EscriptParser::UnambiguousDoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousDoStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousDoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousDoStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousDoStatementContext* EscriptParser::unambiguousDoStatement() {
  UnambiguousDoStatementContext *_localctx = _tracker.createInstance<UnambiguousDoStatementContext>(_ctx, getState());
  enterRule(_localctx, 70, EscriptParser::RuleUnambiguousDoStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(595);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(594);
      statementLabel();
    }
    setState(597);
    match(EscriptParser::DO);
    setState(598);
    unambiguousBlock();
    setState(599);
    match(EscriptParser::DOWHILE);
    setState(600);
    parenthesizedExpression();
    setState(601);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

EscriptParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::WhileStatementContext::WHILE() {
  return getToken(EscriptParser::WHILE, 0);
}

EscriptParser::ParExpressionContext* EscriptParser::WhileStatementContext::parExpression() {
  return getRuleContext<EscriptParser::ParExpressionContext>(0);
}

EscriptParser::BlockContext* EscriptParser::WhileStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::WhileStatementContext::ENDWHILE() {
  return getToken(EscriptParser::ENDWHILE, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::WhileStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}


size_t EscriptParser::WhileStatementContext::getRuleIndex() const {
  return EscriptParser::RuleWhileStatement;
}

void EscriptParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void EscriptParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any EscriptParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::WhileStatementContext* EscriptParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 72, EscriptParser::RuleWhileStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(603);
      statementLabel();
    }
    setState(606);
    match(EscriptParser::WHILE);
    setState(607);
    parExpression();
    setState(608);
    block();
    setState(609);
    match(EscriptParser::ENDWHILE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousWhileStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousWhileStatementContext::UnambiguousWhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousWhileStatementContext::WHILE() {
  return getToken(EscriptParser::WHILE, 0);
}

EscriptParser::ParenthesizedExpressionContext* EscriptParser::UnambiguousWhileStatementContext::parenthesizedExpression() {
  return getRuleContext<EscriptParser::ParenthesizedExpressionContext>(0);
}

EscriptParser::UnambiguousBlockContext* EscriptParser::UnambiguousWhileStatementContext::unambiguousBlock() {
  return getRuleContext<EscriptParser::UnambiguousBlockContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousWhileStatementContext::ENDWHILE() {
  return getToken(EscriptParser::ENDWHILE, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::UnambiguousWhileStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}


size_t EscriptParser::UnambiguousWhileStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousWhileStatement;
}

void EscriptParser::UnambiguousWhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousWhileStatement(this);
}

void EscriptParser::UnambiguousWhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousWhileStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousWhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousWhileStatementContext* EscriptParser::unambiguousWhileStatement() {
  UnambiguousWhileStatementContext *_localctx = _tracker.createInstance<UnambiguousWhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 74, EscriptParser::RuleUnambiguousWhileStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(611);
      statementLabel();
    }
    setState(614);
    match(EscriptParser::WHILE);
    setState(615);
    parenthesizedExpression();
    setState(616);
    unambiguousBlock();
    setState(617);
    match(EscriptParser::ENDWHILE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExitStatementContext ------------------------------------------------------------------

EscriptParser::ExitStatementContext::ExitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ExitStatementContext::EXIT() {
  return getToken(EscriptParser::EXIT, 0);
}

tree::TerminalNode* EscriptParser::ExitStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::ExitStatementContext::getRuleIndex() const {
  return EscriptParser::RuleExitStatement;
}

void EscriptParser::ExitStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExitStatement(this);
}

void EscriptParser::ExitStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExitStatement(this);
}


antlrcpp::Any EscriptParser::ExitStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitExitStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ExitStatementContext* EscriptParser::exitStatement() {
  ExitStatementContext *_localctx = _tracker.createInstance<ExitStatementContext>(_ctx, getState());
  enterRule(_localctx, 76, EscriptParser::RuleExitStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(619);
    match(EscriptParser::EXIT);
    setState(620);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclareStatementContext ------------------------------------------------------------------

EscriptParser::DeclareStatementContext::DeclareStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::DeclareStatementContext::DECLARE() {
  return getToken(EscriptParser::DECLARE, 0);
}

tree::TerminalNode* EscriptParser::DeclareStatementContext::FUNCTION() {
  return getToken(EscriptParser::FUNCTION, 0);
}

EscriptParser::IdentifierListContext* EscriptParser::DeclareStatementContext::identifierList() {
  return getRuleContext<EscriptParser::IdentifierListContext>(0);
}

tree::TerminalNode* EscriptParser::DeclareStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::DeclareStatementContext::getRuleIndex() const {
  return EscriptParser::RuleDeclareStatement;
}

void EscriptParser::DeclareStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclareStatement(this);
}

void EscriptParser::DeclareStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclareStatement(this);
}


antlrcpp::Any EscriptParser::DeclareStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDeclareStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DeclareStatementContext* EscriptParser::declareStatement() {
  DeclareStatementContext *_localctx = _tracker.createInstance<DeclareStatementContext>(_ctx, getState());
  enterRule(_localctx, 78, EscriptParser::RuleDeclareStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(622);
    match(EscriptParser::DECLARE);
    setState(623);
    match(EscriptParser::FUNCTION);
    setState(624);
    identifierList();
    setState(625);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

EscriptParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::BreakStatementContext::BREAK() {
  return getToken(EscriptParser::BREAK, 0);
}

tree::TerminalNode* EscriptParser::BreakStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

tree::TerminalNode* EscriptParser::BreakStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}


size_t EscriptParser::BreakStatementContext::getRuleIndex() const {
  return EscriptParser::RuleBreakStatement;
}

void EscriptParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void EscriptParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}


antlrcpp::Any EscriptParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BreakStatementContext* EscriptParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 80, EscriptParser::RuleBreakStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(627);
    match(EscriptParser::BREAK);
    setState(629);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(628);
      match(EscriptParser::IDENTIFIER);
    }
    setState(631);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

EscriptParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ContinueStatementContext::CONTINUE() {
  return getToken(EscriptParser::CONTINUE, 0);
}

tree::TerminalNode* EscriptParser::ContinueStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

tree::TerminalNode* EscriptParser::ContinueStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}


size_t EscriptParser::ContinueStatementContext::getRuleIndex() const {
  return EscriptParser::RuleContinueStatement;
}

void EscriptParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void EscriptParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}


antlrcpp::Any EscriptParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ContinueStatementContext* EscriptParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 82, EscriptParser::RuleContinueStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(633);
    match(EscriptParser::CONTINUE);
    setState(635);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(634);
      match(EscriptParser::IDENTIFIER);
    }
    setState(637);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

EscriptParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ForStatementContext::FOR() {
  return getToken(EscriptParser::FOR, 0);
}

EscriptParser::ForGroupContext* EscriptParser::ForStatementContext::forGroup() {
  return getRuleContext<EscriptParser::ForGroupContext>(0);
}

tree::TerminalNode* EscriptParser::ForStatementContext::ENDFOR() {
  return getToken(EscriptParser::ENDFOR, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::ForStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}


size_t EscriptParser::ForStatementContext::getRuleIndex() const {
  return EscriptParser::RuleForStatement;
}

void EscriptParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void EscriptParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


antlrcpp::Any EscriptParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ForStatementContext* EscriptParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, EscriptParser::RuleForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(640);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(639);
      statementLabel();
    }
    setState(642);
    match(EscriptParser::FOR);
    setState(643);
    forGroup();
    setState(644);
    match(EscriptParser::ENDFOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousForStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousForStatementContext::UnambiguousForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousForStatementContext::FOR() {
  return getToken(EscriptParser::FOR, 0);
}

EscriptParser::UnambiguousForGroupContext* EscriptParser::UnambiguousForStatementContext::unambiguousForGroup() {
  return getRuleContext<EscriptParser::UnambiguousForGroupContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousForStatementContext::ENDFOR() {
  return getToken(EscriptParser::ENDFOR, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::UnambiguousForStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}


size_t EscriptParser::UnambiguousForStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousForStatement;
}

void EscriptParser::UnambiguousForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousForStatement(this);
}

void EscriptParser::UnambiguousForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousForStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousForStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousForStatementContext* EscriptParser::unambiguousForStatement() {
  UnambiguousForStatementContext *_localctx = _tracker.createInstance<UnambiguousForStatementContext>(_ctx, getState());
  enterRule(_localctx, 86, EscriptParser::RuleUnambiguousForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(647);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(646);
      statementLabel();
    }
    setState(649);
    match(EscriptParser::FOR);
    setState(650);
    unambiguousForGroup();
    setState(651);
    match(EscriptParser::ENDFOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachStatementContext ------------------------------------------------------------------

EscriptParser::ForeachStatementContext::ForeachStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ForeachStatementContext::FOREACH() {
  return getToken(EscriptParser::FOREACH, 0);
}

tree::TerminalNode* EscriptParser::ForeachStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::ForeachStatementContext::TOK_IN() {
  return getToken(EscriptParser::TOK_IN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::ForeachStatementContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

EscriptParser::BlockContext* EscriptParser::ForeachStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::ForeachStatementContext::ENDFOREACH() {
  return getToken(EscriptParser::ENDFOREACH, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::ForeachStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}


size_t EscriptParser::ForeachStatementContext::getRuleIndex() const {
  return EscriptParser::RuleForeachStatement;
}

void EscriptParser::ForeachStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeachStatement(this);
}

void EscriptParser::ForeachStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeachStatement(this);
}


antlrcpp::Any EscriptParser::ForeachStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitForeachStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ForeachStatementContext* EscriptParser::foreachStatement() {
  ForeachStatementContext *_localctx = _tracker.createInstance<ForeachStatementContext>(_ctx, getState());
  enterRule(_localctx, 88, EscriptParser::RuleForeachStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(654);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(653);
      statementLabel();
    }
    setState(656);
    match(EscriptParser::FOREACH);
    setState(657);
    match(EscriptParser::IDENTIFIER);
    setState(658);
    match(EscriptParser::TOK_IN);
    setState(659);
    expression(0);
    setState(660);
    block();
    setState(661);
    match(EscriptParser::ENDFOREACH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousForeachStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousForeachStatementContext::UnambiguousForeachStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousForeachStatementContext::FOREACH() {
  return getToken(EscriptParser::FOREACH, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousForeachStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousForeachStatementContext::TOK_IN() {
  return getToken(EscriptParser::TOK_IN, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousForeachStatementContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}

EscriptParser::UnambiguousBlockContext* EscriptParser::UnambiguousForeachStatementContext::unambiguousBlock() {
  return getRuleContext<EscriptParser::UnambiguousBlockContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousForeachStatementContext::ENDFOREACH() {
  return getToken(EscriptParser::ENDFOREACH, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::UnambiguousForeachStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}


size_t EscriptParser::UnambiguousForeachStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousForeachStatement;
}

void EscriptParser::UnambiguousForeachStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousForeachStatement(this);
}

void EscriptParser::UnambiguousForeachStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousForeachStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousForeachStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousForeachStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousForeachStatementContext* EscriptParser::unambiguousForeachStatement() {
  UnambiguousForeachStatementContext *_localctx = _tracker.createInstance<UnambiguousForeachStatementContext>(_ctx, getState());
  enterRule(_localctx, 90, EscriptParser::RuleUnambiguousForeachStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(664);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(663);
      statementLabel();
    }
    setState(666);
    match(EscriptParser::FOREACH);
    setState(667);
    match(EscriptParser::IDENTIFIER);
    setState(668);
    match(EscriptParser::TOK_IN);
    setState(669);
    unambiguousExpression();
    setState(670);
    unambiguousBlock();
    setState(671);
    match(EscriptParser::ENDFOREACH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatStatementContext ------------------------------------------------------------------

EscriptParser::RepeatStatementContext::RepeatStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::RepeatStatementContext::REPEAT() {
  return getToken(EscriptParser::REPEAT, 0);
}

EscriptParser::BlockContext* EscriptParser::RepeatStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::RepeatStatementContext::UNTIL() {
  return getToken(EscriptParser::UNTIL, 0);
}

EscriptParser::ExpressionContext* EscriptParser::RepeatStatementContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::RepeatStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::RepeatStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}


size_t EscriptParser::RepeatStatementContext::getRuleIndex() const {
  return EscriptParser::RuleRepeatStatement;
}

void EscriptParser::RepeatStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeatStatement(this);
}

void EscriptParser::RepeatStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeatStatement(this);
}


antlrcpp::Any EscriptParser::RepeatStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitRepeatStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::RepeatStatementContext* EscriptParser::repeatStatement() {
  RepeatStatementContext *_localctx = _tracker.createInstance<RepeatStatementContext>(_ctx, getState());
  enterRule(_localctx, 92, EscriptParser::RuleRepeatStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(674);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(673);
      statementLabel();
    }
    setState(676);
    match(EscriptParser::REPEAT);
    setState(677);
    block();
    setState(678);
    match(EscriptParser::UNTIL);
    setState(679);
    expression(0);
    setState(680);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousRepeatStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousRepeatStatementContext::UnambiguousRepeatStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousRepeatStatementContext::REPEAT() {
  return getToken(EscriptParser::REPEAT, 0);
}

EscriptParser::UnambiguousBlockContext* EscriptParser::UnambiguousRepeatStatementContext::unambiguousBlock() {
  return getRuleContext<EscriptParser::UnambiguousBlockContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousRepeatStatementContext::UNTIL() {
  return getToken(EscriptParser::UNTIL, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousRepeatStatementContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousRepeatStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::UnambiguousRepeatStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}


size_t EscriptParser::UnambiguousRepeatStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousRepeatStatement;
}

void EscriptParser::UnambiguousRepeatStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousRepeatStatement(this);
}

void EscriptParser::UnambiguousRepeatStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousRepeatStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousRepeatStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousRepeatStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousRepeatStatementContext* EscriptParser::unambiguousRepeatStatement() {
  UnambiguousRepeatStatementContext *_localctx = _tracker.createInstance<UnambiguousRepeatStatementContext>(_ctx, getState());
  enterRule(_localctx, 94, EscriptParser::RuleUnambiguousRepeatStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(683);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(682);
      statementLabel();
    }
    setState(685);
    match(EscriptParser::REPEAT);
    setState(686);
    unambiguousBlock();
    setState(687);
    match(EscriptParser::UNTIL);
    setState(688);
    unambiguousExpression();
    setState(689);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseStatementContext ------------------------------------------------------------------

EscriptParser::CaseStatementContext::CaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::CaseStatementContext::CASE() {
  return getToken(EscriptParser::CASE, 0);
}

tree::TerminalNode* EscriptParser::CaseStatementContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::CaseStatementContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::CaseStatementContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

tree::TerminalNode* EscriptParser::CaseStatementContext::ENDCASE() {
  return getToken(EscriptParser::ENDCASE, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::CaseStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}

std::vector<EscriptParser::SwitchBlockStatementGroupContext *> EscriptParser::CaseStatementContext::switchBlockStatementGroup() {
  return getRuleContexts<EscriptParser::SwitchBlockStatementGroupContext>();
}

EscriptParser::SwitchBlockStatementGroupContext* EscriptParser::CaseStatementContext::switchBlockStatementGroup(size_t i) {
  return getRuleContext<EscriptParser::SwitchBlockStatementGroupContext>(i);
}


size_t EscriptParser::CaseStatementContext::getRuleIndex() const {
  return EscriptParser::RuleCaseStatement;
}

void EscriptParser::CaseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseStatement(this);
}

void EscriptParser::CaseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseStatement(this);
}


antlrcpp::Any EscriptParser::CaseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitCaseStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::CaseStatementContext* EscriptParser::caseStatement() {
  CaseStatementContext *_localctx = _tracker.createInstance<CaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, EscriptParser::RuleCaseStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(692);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(691);
      statementLabel();
    }
    setState(694);
    match(EscriptParser::CASE);
    setState(695);
    match(EscriptParser::LPAREN);
    setState(696);
    expression(0);
    setState(697);
    match(EscriptParser::RPAREN);
    setState(699); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(698);
      switchBlockStatementGroup();
      setState(701); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == EscriptParser::DEFAULT || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (EscriptParser::DECIMAL_LITERAL - 68))
      | (1ULL << (EscriptParser::HEX_LITERAL - 68))
      | (1ULL << (EscriptParser::OCT_LITERAL - 68))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 68))
      | (1ULL << (EscriptParser::STRING_LITERAL - 68))
      | (1ULL << (EscriptParser::IDENTIFIER - 68)))) != 0));
    setState(703);
    match(EscriptParser::ENDCASE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousCaseStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousCaseStatementContext::UnambiguousCaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousCaseStatementContext::CASE() {
  return getToken(EscriptParser::CASE, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousCaseStatementContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousCaseStatementContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousCaseStatementContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousCaseStatementContext::ENDCASE() {
  return getToken(EscriptParser::ENDCASE, 0);
}

EscriptParser::StatementLabelContext* EscriptParser::UnambiguousCaseStatementContext::statementLabel() {
  return getRuleContext<EscriptParser::StatementLabelContext>(0);
}

std::vector<EscriptParser::UnambiguousSwitchBlockStatementGroupContext *> EscriptParser::UnambiguousCaseStatementContext::unambiguousSwitchBlockStatementGroup() {
  return getRuleContexts<EscriptParser::UnambiguousSwitchBlockStatementGroupContext>();
}

EscriptParser::UnambiguousSwitchBlockStatementGroupContext* EscriptParser::UnambiguousCaseStatementContext::unambiguousSwitchBlockStatementGroup(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousSwitchBlockStatementGroupContext>(i);
}


size_t EscriptParser::UnambiguousCaseStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousCaseStatement;
}

void EscriptParser::UnambiguousCaseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousCaseStatement(this);
}

void EscriptParser::UnambiguousCaseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousCaseStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousCaseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousCaseStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousCaseStatementContext* EscriptParser::unambiguousCaseStatement() {
  UnambiguousCaseStatementContext *_localctx = _tracker.createInstance<UnambiguousCaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 98, EscriptParser::RuleUnambiguousCaseStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(706);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(705);
      statementLabel();
    }
    setState(708);
    match(EscriptParser::CASE);
    setState(709);
    match(EscriptParser::LPAREN);
    setState(710);
    unambiguousExpression();
    setState(711);
    match(EscriptParser::RPAREN);
    setState(713); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(712);
      unambiguousSwitchBlockStatementGroup();
      setState(715); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == EscriptParser::DEFAULT || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (EscriptParser::DECIMAL_LITERAL - 68))
      | (1ULL << (EscriptParser::HEX_LITERAL - 68))
      | (1ULL << (EscriptParser::OCT_LITERAL - 68))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 68))
      | (1ULL << (EscriptParser::STRING_LITERAL - 68))
      | (1ULL << (EscriptParser::IDENTIFIER - 68)))) != 0));
    setState(717);
    match(EscriptParser::ENDCASE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumStatementContext ------------------------------------------------------------------

EscriptParser::EnumStatementContext::EnumStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::EnumStatementContext::ENUM() {
  return getToken(EscriptParser::ENUM, 0);
}

tree::TerminalNode* EscriptParser::EnumStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::EnumListContext* EscriptParser::EnumStatementContext::enumList() {
  return getRuleContext<EscriptParser::EnumListContext>(0);
}

tree::TerminalNode* EscriptParser::EnumStatementContext::ENDENUM() {
  return getToken(EscriptParser::ENDENUM, 0);
}


size_t EscriptParser::EnumStatementContext::getRuleIndex() const {
  return EscriptParser::RuleEnumStatement;
}

void EscriptParser::EnumStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumStatement(this);
}

void EscriptParser::EnumStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumStatement(this);
}


antlrcpp::Any EscriptParser::EnumStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitEnumStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::EnumStatementContext* EscriptParser::enumStatement() {
  EnumStatementContext *_localctx = _tracker.createInstance<EnumStatementContext>(_ctx, getState());
  enterRule(_localctx, 100, EscriptParser::RuleEnumStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(719);
    match(EscriptParser::ENUM);
    setState(720);
    match(EscriptParser::IDENTIFIER);
    setState(721);
    enumList();
    setState(722);
    match(EscriptParser::ENDENUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousEnumStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousEnumStatementContext::UnambiguousEnumStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousEnumStatementContext::ENUM() {
  return getToken(EscriptParser::ENUM, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousEnumStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::UnambiguousEnumListContext* EscriptParser::UnambiguousEnumStatementContext::unambiguousEnumList() {
  return getRuleContext<EscriptParser::UnambiguousEnumListContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousEnumStatementContext::ENDENUM() {
  return getToken(EscriptParser::ENDENUM, 0);
}


size_t EscriptParser::UnambiguousEnumStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousEnumStatement;
}

void EscriptParser::UnambiguousEnumStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousEnumStatement(this);
}

void EscriptParser::UnambiguousEnumStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousEnumStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousEnumStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousEnumStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousEnumStatementContext* EscriptParser::unambiguousEnumStatement() {
  UnambiguousEnumStatementContext *_localctx = _tracker.createInstance<UnambiguousEnumStatementContext>(_ctx, getState());
  enterRule(_localctx, 102, EscriptParser::RuleUnambiguousEnumStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(724);
    match(EscriptParser::ENUM);
    setState(725);
    match(EscriptParser::IDENTIFIER);
    setState(726);
    unambiguousEnumList();
    setState(727);
    match(EscriptParser::ENDENUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

EscriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::StatementContext *> EscriptParser::BlockContext::statement() {
  return getRuleContexts<EscriptParser::StatementContext>();
}

EscriptParser::StatementContext* EscriptParser::BlockContext::statement(size_t i) {
  return getRuleContext<EscriptParser::StatementContext>(i);
}


size_t EscriptParser::BlockContext::getRuleIndex() const {
  return EscriptParser::RuleBlock;
}

void EscriptParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void EscriptParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any EscriptParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BlockContext* EscriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 104, EscriptParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(732);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(729);
        statement(); 
      }
      setState(734);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousBlockContext ------------------------------------------------------------------

EscriptParser::UnambiguousBlockContext::UnambiguousBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousStatementContext *> EscriptParser::UnambiguousBlockContext::unambiguousStatement() {
  return getRuleContexts<EscriptParser::UnambiguousStatementContext>();
}

EscriptParser::UnambiguousStatementContext* EscriptParser::UnambiguousBlockContext::unambiguousStatement(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousStatementContext>(i);
}


size_t EscriptParser::UnambiguousBlockContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousBlock;
}

void EscriptParser::UnambiguousBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousBlock(this);
}

void EscriptParser::UnambiguousBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousBlock(this);
}


antlrcpp::Any EscriptParser::UnambiguousBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousBlock(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousBlockContext* EscriptParser::unambiguousBlock() {
  UnambiguousBlockContext *_localctx = _tracker.createInstance<UnambiguousBlockContext>(_ctx, getState());
  enterRule(_localctx, 106, EscriptParser::RuleUnambiguousBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(738);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(735);
        unambiguousStatement(); 
      }
      setState(740);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationInitializerContext ------------------------------------------------------------------

EscriptParser::VariableDeclarationInitializerContext::VariableDeclarationInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::VariableDeclarationInitializerContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::VariableDeclarationInitializerContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::VariableDeclarationInitializerContext::ARRAY() {
  return getToken(EscriptParser::ARRAY, 0);
}


size_t EscriptParser::VariableDeclarationInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleVariableDeclarationInitializer;
}

void EscriptParser::VariableDeclarationInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationInitializer(this);
}

void EscriptParser::VariableDeclarationInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationInitializer(this);
}


antlrcpp::Any EscriptParser::VariableDeclarationInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::VariableDeclarationInitializerContext* EscriptParser::variableDeclarationInitializer() {
  VariableDeclarationInitializerContext *_localctx = _tracker.createInstance<VariableDeclarationInitializerContext>(_ctx, getState());
  enterRule(_localctx, 108, EscriptParser::RuleVariableDeclarationInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(744);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::ASSIGN: {
        enterOuterAlt(_localctx, 1);
        setState(741);
        match(EscriptParser::ASSIGN);
        setState(742);
        expression(0);
        break;
      }

      case EscriptParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(743);
        match(EscriptParser::ARRAY);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousVariableDeclarationInitializerContext ------------------------------------------------------------------

EscriptParser::UnambiguousVariableDeclarationInitializerContext::UnambiguousVariableDeclarationInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousVariableDeclarationInitializerContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousVariableDeclarationInitializerContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousVariableDeclarationInitializerContext::EQUAL_DEPRECATED() {
  return getToken(EscriptParser::EQUAL_DEPRECATED, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousVariableDeclarationInitializerContext::ARRAY() {
  return getToken(EscriptParser::ARRAY, 0);
}


size_t EscriptParser::UnambiguousVariableDeclarationInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousVariableDeclarationInitializer;
}

void EscriptParser::UnambiguousVariableDeclarationInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousVariableDeclarationInitializer(this);
}

void EscriptParser::UnambiguousVariableDeclarationInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousVariableDeclarationInitializer(this);
}


antlrcpp::Any EscriptParser::UnambiguousVariableDeclarationInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousVariableDeclarationInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousVariableDeclarationInitializerContext* EscriptParser::unambiguousVariableDeclarationInitializer() {
  UnambiguousVariableDeclarationInitializerContext *_localctx = _tracker.createInstance<UnambiguousVariableDeclarationInitializerContext>(_ctx, getState());
  enterRule(_localctx, 110, EscriptParser::RuleUnambiguousVariableDeclarationInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(753);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::ASSIGN: {
        enterOuterAlt(_localctx, 1);
        setState(746);
        match(EscriptParser::ASSIGN);
        setState(747);
        unambiguousExpression();
        break;
      }

      case EscriptParser::EQUAL_DEPRECATED: {
        enterOuterAlt(_localctx, 2);
        setState(748);
        match(EscriptParser::EQUAL_DEPRECATED);
        setState(749);
        unambiguousExpression();
        notifyErrorListeners("Unexpected token: '='. Did you mean := for assign?");
        break;
      }

      case EscriptParser::ARRAY: {
        enterOuterAlt(_localctx, 3);
        setState(752);
        match(EscriptParser::ARRAY);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumListContext ------------------------------------------------------------------

EscriptParser::EnumListContext::EnumListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::EnumListEntryContext *> EscriptParser::EnumListContext::enumListEntry() {
  return getRuleContexts<EscriptParser::EnumListEntryContext>();
}

EscriptParser::EnumListEntryContext* EscriptParser::EnumListContext::enumListEntry(size_t i) {
  return getRuleContext<EscriptParser::EnumListEntryContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::EnumListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::EnumListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::EnumListContext::getRuleIndex() const {
  return EscriptParser::RuleEnumList;
}

void EscriptParser::EnumListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumList(this);
}

void EscriptParser::EnumListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumList(this);
}


antlrcpp::Any EscriptParser::EnumListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitEnumList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::EnumListContext* EscriptParser::enumList() {
  EnumListContext *_localctx = _tracker.createInstance<EnumListContext>(_ctx, getState());
  enterRule(_localctx, 112, EscriptParser::RuleEnumList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(755);
    enumListEntry();
    setState(760);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(756);
        match(EscriptParser::COMMA);
        setState(757);
        enumListEntry(); 
      }
      setState(762);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
    setState(764);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::COMMA) {
      setState(763);
      match(EscriptParser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousEnumListContext ------------------------------------------------------------------

EscriptParser::UnambiguousEnumListContext::UnambiguousEnumListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousEnumListEntryContext *> EscriptParser::UnambiguousEnumListContext::unambiguousEnumListEntry() {
  return getRuleContexts<EscriptParser::UnambiguousEnumListEntryContext>();
}

EscriptParser::UnambiguousEnumListEntryContext* EscriptParser::UnambiguousEnumListContext::unambiguousEnumListEntry(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousEnumListEntryContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousEnumListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::UnambiguousEnumListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::UnambiguousEnumListContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousEnumList;
}

void EscriptParser::UnambiguousEnumListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousEnumList(this);
}

void EscriptParser::UnambiguousEnumListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousEnumList(this);
}


antlrcpp::Any EscriptParser::UnambiguousEnumListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousEnumList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousEnumListContext* EscriptParser::unambiguousEnumList() {
  UnambiguousEnumListContext *_localctx = _tracker.createInstance<UnambiguousEnumListContext>(_ctx, getState());
  enterRule(_localctx, 114, EscriptParser::RuleUnambiguousEnumList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(766);
    unambiguousEnumListEntry();
    setState(771);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(767);
        match(EscriptParser::COMMA);
        setState(768);
        unambiguousEnumListEntry(); 
      }
      setState(773);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
    setState(775);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::COMMA) {
      setState(774);
      match(EscriptParser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumListEntryContext ------------------------------------------------------------------

EscriptParser::EnumListEntryContext::EnumListEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::EnumListEntryContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::EnumListEntryContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::EnumListEntryContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}


size_t EscriptParser::EnumListEntryContext::getRuleIndex() const {
  return EscriptParser::RuleEnumListEntry;
}

void EscriptParser::EnumListEntryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumListEntry(this);
}

void EscriptParser::EnumListEntryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumListEntry(this);
}


antlrcpp::Any EscriptParser::EnumListEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitEnumListEntry(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::EnumListEntryContext* EscriptParser::enumListEntry() {
  EnumListEntryContext *_localctx = _tracker.createInstance<EnumListEntryContext>(_ctx, getState());
  enterRule(_localctx, 116, EscriptParser::RuleEnumListEntry);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(777);
    match(EscriptParser::IDENTIFIER);
    setState(780);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ASSIGN) {
      setState(778);
      match(EscriptParser::ASSIGN);
      setState(779);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousEnumListEntryContext ------------------------------------------------------------------

EscriptParser::UnambiguousEnumListEntryContext::UnambiguousEnumListEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousEnumListEntryContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousEnumListEntryContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousEnumListEntryContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}


size_t EscriptParser::UnambiguousEnumListEntryContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousEnumListEntry;
}

void EscriptParser::UnambiguousEnumListEntryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousEnumListEntry(this);
}

void EscriptParser::UnambiguousEnumListEntryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousEnumListEntry(this);
}


antlrcpp::Any EscriptParser::UnambiguousEnumListEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousEnumListEntry(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousEnumListEntryContext* EscriptParser::unambiguousEnumListEntry() {
  UnambiguousEnumListEntryContext *_localctx = _tracker.createInstance<UnambiguousEnumListEntryContext>(_ctx, getState());
  enterRule(_localctx, 118, EscriptParser::RuleUnambiguousEnumListEntry);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(782);
    match(EscriptParser::IDENTIFIER);
    setState(785);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ASSIGN) {
      setState(783);
      match(EscriptParser::ASSIGN);
      setState(784);
      unambiguousExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockStatementGroupContext ------------------------------------------------------------------

EscriptParser::SwitchBlockStatementGroupContext::SwitchBlockStatementGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::BlockContext* EscriptParser::SwitchBlockStatementGroupContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

std::vector<EscriptParser::SwitchLabelContext *> EscriptParser::SwitchBlockStatementGroupContext::switchLabel() {
  return getRuleContexts<EscriptParser::SwitchLabelContext>();
}

EscriptParser::SwitchLabelContext* EscriptParser::SwitchBlockStatementGroupContext::switchLabel(size_t i) {
  return getRuleContext<EscriptParser::SwitchLabelContext>(i);
}


size_t EscriptParser::SwitchBlockStatementGroupContext::getRuleIndex() const {
  return EscriptParser::RuleSwitchBlockStatementGroup;
}

void EscriptParser::SwitchBlockStatementGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBlockStatementGroup(this);
}

void EscriptParser::SwitchBlockStatementGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBlockStatementGroup(this);
}


antlrcpp::Any EscriptParser::SwitchBlockStatementGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitSwitchBlockStatementGroup(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::SwitchBlockStatementGroupContext* EscriptParser::switchBlockStatementGroup() {
  SwitchBlockStatementGroupContext *_localctx = _tracker.createInstance<SwitchBlockStatementGroupContext>(_ctx, getState());
  enterRule(_localctx, 120, EscriptParser::RuleSwitchBlockStatementGroup);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(788); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(787);
              switchLabel();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(790); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(792);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousSwitchBlockStatementGroupContext ------------------------------------------------------------------

EscriptParser::UnambiguousSwitchBlockStatementGroupContext::UnambiguousSwitchBlockStatementGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::SwitchLabelContext *> EscriptParser::UnambiguousSwitchBlockStatementGroupContext::switchLabel() {
  return getRuleContexts<EscriptParser::SwitchLabelContext>();
}

EscriptParser::SwitchLabelContext* EscriptParser::UnambiguousSwitchBlockStatementGroupContext::switchLabel(size_t i) {
  return getRuleContext<EscriptParser::SwitchLabelContext>(i);
}

EscriptParser::UnambiguousBlockContext* EscriptParser::UnambiguousSwitchBlockStatementGroupContext::unambiguousBlock() {
  return getRuleContext<EscriptParser::UnambiguousBlockContext>(0);
}


size_t EscriptParser::UnambiguousSwitchBlockStatementGroupContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousSwitchBlockStatementGroup;
}

void EscriptParser::UnambiguousSwitchBlockStatementGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousSwitchBlockStatementGroup(this);
}

void EscriptParser::UnambiguousSwitchBlockStatementGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousSwitchBlockStatementGroup(this);
}


antlrcpp::Any EscriptParser::UnambiguousSwitchBlockStatementGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousSwitchBlockStatementGroup(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousSwitchBlockStatementGroupContext* EscriptParser::unambiguousSwitchBlockStatementGroup() {
  UnambiguousSwitchBlockStatementGroupContext *_localctx = _tracker.createInstance<UnambiguousSwitchBlockStatementGroupContext>(_ctx, getState());
  enterRule(_localctx, 122, EscriptParser::RuleUnambiguousSwitchBlockStatementGroup);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(794);
    switchLabel();
    setState(798);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(795);
        switchLabel(); 
      }
      setState(800);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
    setState(801);
    unambiguousBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

EscriptParser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::SwitchLabelContext::COLON() {
  return getToken(EscriptParser::COLON, 0);
}

EscriptParser::IntegerLiteralContext* EscriptParser::SwitchLabelContext::integerLiteral() {
  return getRuleContext<EscriptParser::IntegerLiteralContext>(0);
}

tree::TerminalNode* EscriptParser::SwitchLabelContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::SwitchLabelContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::SwitchLabelContext::DEFAULT() {
  return getToken(EscriptParser::DEFAULT, 0);
}


size_t EscriptParser::SwitchLabelContext::getRuleIndex() const {
  return EscriptParser::RuleSwitchLabel;
}

void EscriptParser::SwitchLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchLabel(this);
}

void EscriptParser::SwitchLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchLabel(this);
}


antlrcpp::Any EscriptParser::SwitchLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitSwitchLabel(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::SwitchLabelContext* EscriptParser::switchLabel() {
  SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
  enterRule(_localctx, 124, EscriptParser::RuleSwitchLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(811);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::DECIMAL_LITERAL:
      case EscriptParser::HEX_LITERAL:
      case EscriptParser::OCT_LITERAL:
      case EscriptParser::BINARY_LITERAL:
      case EscriptParser::STRING_LITERAL:
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(806);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case EscriptParser::DECIMAL_LITERAL:
          case EscriptParser::HEX_LITERAL:
          case EscriptParser::OCT_LITERAL:
          case EscriptParser::BINARY_LITERAL: {
            setState(803);
            integerLiteral();
            break;
          }

          case EscriptParser::IDENTIFIER: {
            setState(804);
            match(EscriptParser::IDENTIFIER);
            break;
          }

          case EscriptParser::STRING_LITERAL: {
            setState(805);
            match(EscriptParser::STRING_LITERAL);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(808);
        match(EscriptParser::COLON);
        break;
      }

      case EscriptParser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(809);
        match(EscriptParser::DEFAULT);
        setState(810);
        match(EscriptParser::COLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForGroupContext ------------------------------------------------------------------

EscriptParser::ForGroupContext::ForGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::CstyleForStatementContext* EscriptParser::ForGroupContext::cstyleForStatement() {
  return getRuleContext<EscriptParser::CstyleForStatementContext>(0);
}

EscriptParser::BasicForStatementContext* EscriptParser::ForGroupContext::basicForStatement() {
  return getRuleContext<EscriptParser::BasicForStatementContext>(0);
}


size_t EscriptParser::ForGroupContext::getRuleIndex() const {
  return EscriptParser::RuleForGroup;
}

void EscriptParser::ForGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForGroup(this);
}

void EscriptParser::ForGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForGroup(this);
}


antlrcpp::Any EscriptParser::ForGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitForGroup(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ForGroupContext* EscriptParser::forGroup() {
  ForGroupContext *_localctx = _tracker.createInstance<ForGroupContext>(_ctx, getState());
  enterRule(_localctx, 126, EscriptParser::RuleForGroup);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(815);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(813);
        cstyleForStatement();
        break;
      }

      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(814);
        basicForStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousForGroupContext ------------------------------------------------------------------

EscriptParser::UnambiguousForGroupContext::UnambiguousForGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::UnambiguousCstyleForStatementContext* EscriptParser::UnambiguousForGroupContext::unambiguousCstyleForStatement() {
  return getRuleContext<EscriptParser::UnambiguousCstyleForStatementContext>(0);
}

EscriptParser::UnambiguousBasicForStatementContext* EscriptParser::UnambiguousForGroupContext::unambiguousBasicForStatement() {
  return getRuleContext<EscriptParser::UnambiguousBasicForStatementContext>(0);
}


size_t EscriptParser::UnambiguousForGroupContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousForGroup;
}

void EscriptParser::UnambiguousForGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousForGroup(this);
}

void EscriptParser::UnambiguousForGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousForGroup(this);
}


antlrcpp::Any EscriptParser::UnambiguousForGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousForGroup(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousForGroupContext* EscriptParser::unambiguousForGroup() {
  UnambiguousForGroupContext *_localctx = _tracker.createInstance<UnambiguousForGroupContext>(_ctx, getState());
  enterRule(_localctx, 128, EscriptParser::RuleUnambiguousForGroup);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(819);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(817);
        unambiguousCstyleForStatement();
        break;
      }

      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(818);
        unambiguousBasicForStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicForStatementContext ------------------------------------------------------------------

EscriptParser::BasicForStatementContext::BasicForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::BasicForStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::BasicForStatementContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

std::vector<EscriptParser::ExpressionContext *> EscriptParser::BasicForStatementContext::expression() {
  return getRuleContexts<EscriptParser::ExpressionContext>();
}

EscriptParser::ExpressionContext* EscriptParser::BasicForStatementContext::expression(size_t i) {
  return getRuleContext<EscriptParser::ExpressionContext>(i);
}

tree::TerminalNode* EscriptParser::BasicForStatementContext::TO() {
  return getToken(EscriptParser::TO, 0);
}

EscriptParser::BlockContext* EscriptParser::BasicForStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}


size_t EscriptParser::BasicForStatementContext::getRuleIndex() const {
  return EscriptParser::RuleBasicForStatement;
}

void EscriptParser::BasicForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicForStatement(this);
}

void EscriptParser::BasicForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicForStatement(this);
}


antlrcpp::Any EscriptParser::BasicForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBasicForStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BasicForStatementContext* EscriptParser::basicForStatement() {
  BasicForStatementContext *_localctx = _tracker.createInstance<BasicForStatementContext>(_ctx, getState());
  enterRule(_localctx, 130, EscriptParser::RuleBasicForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    match(EscriptParser::IDENTIFIER);
    setState(822);
    match(EscriptParser::ASSIGN);
    setState(823);
    expression(0);
    setState(824);
    match(EscriptParser::TO);
    setState(825);
    expression(0);
    setState(826);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousBasicForStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousBasicForStatementContext::UnambiguousBasicForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousBasicForStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousBasicForStatementContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

std::vector<EscriptParser::UnambiguousExpressionContext *> EscriptParser::UnambiguousBasicForStatementContext::unambiguousExpression() {
  return getRuleContexts<EscriptParser::UnambiguousExpressionContext>();
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousBasicForStatementContext::unambiguousExpression(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(i);
}

tree::TerminalNode* EscriptParser::UnambiguousBasicForStatementContext::TO() {
  return getToken(EscriptParser::TO, 0);
}

EscriptParser::UnambiguousBlockContext* EscriptParser::UnambiguousBasicForStatementContext::unambiguousBlock() {
  return getRuleContext<EscriptParser::UnambiguousBlockContext>(0);
}


size_t EscriptParser::UnambiguousBasicForStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousBasicForStatement;
}

void EscriptParser::UnambiguousBasicForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousBasicForStatement(this);
}

void EscriptParser::UnambiguousBasicForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousBasicForStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousBasicForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousBasicForStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousBasicForStatementContext* EscriptParser::unambiguousBasicForStatement() {
  UnambiguousBasicForStatementContext *_localctx = _tracker.createInstance<UnambiguousBasicForStatementContext>(_ctx, getState());
  enterRule(_localctx, 132, EscriptParser::RuleUnambiguousBasicForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(828);
    match(EscriptParser::IDENTIFIER);
    setState(829);
    match(EscriptParser::ASSIGN);
    setState(830);
    unambiguousExpression();
    setState(831);
    match(EscriptParser::TO);
    setState(832);
    unambiguousExpression();
    setState(833);
    unambiguousBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CstyleForStatementContext ------------------------------------------------------------------

EscriptParser::CstyleForStatementContext::CstyleForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::CstyleForStatementContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

std::vector<EscriptParser::ExpressionContext *> EscriptParser::CstyleForStatementContext::expression() {
  return getRuleContexts<EscriptParser::ExpressionContext>();
}

EscriptParser::ExpressionContext* EscriptParser::CstyleForStatementContext::expression(size_t i) {
  return getRuleContext<EscriptParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::CstyleForStatementContext::SEMI() {
  return getTokens(EscriptParser::SEMI);
}

tree::TerminalNode* EscriptParser::CstyleForStatementContext::SEMI(size_t i) {
  return getToken(EscriptParser::SEMI, i);
}

tree::TerminalNode* EscriptParser::CstyleForStatementContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::BlockContext* EscriptParser::CstyleForStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}


size_t EscriptParser::CstyleForStatementContext::getRuleIndex() const {
  return EscriptParser::RuleCstyleForStatement;
}

void EscriptParser::CstyleForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCstyleForStatement(this);
}

void EscriptParser::CstyleForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCstyleForStatement(this);
}


antlrcpp::Any EscriptParser::CstyleForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitCstyleForStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::CstyleForStatementContext* EscriptParser::cstyleForStatement() {
  CstyleForStatementContext *_localctx = _tracker.createInstance<CstyleForStatementContext>(_ctx, getState());
  enterRule(_localctx, 134, EscriptParser::RuleCstyleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(835);
    match(EscriptParser::LPAREN);
    setState(836);
    expression(0);
    setState(837);
    match(EscriptParser::SEMI);
    setState(838);
    expression(0);
    setState(839);
    match(EscriptParser::SEMI);
    setState(840);
    expression(0);
    setState(841);
    match(EscriptParser::RPAREN);
    setState(842);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousCstyleForStatementContext ------------------------------------------------------------------

EscriptParser::UnambiguousCstyleForStatementContext::UnambiguousCstyleForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousCstyleForStatementContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

std::vector<EscriptParser::UnambiguousExpressionContext *> EscriptParser::UnambiguousCstyleForStatementContext::unambiguousExpression() {
  return getRuleContexts<EscriptParser::UnambiguousExpressionContext>();
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousCstyleForStatementContext::unambiguousExpression(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousCstyleForStatementContext::SEMI() {
  return getTokens(EscriptParser::SEMI);
}

tree::TerminalNode* EscriptParser::UnambiguousCstyleForStatementContext::SEMI(size_t i) {
  return getToken(EscriptParser::SEMI, i);
}

tree::TerminalNode* EscriptParser::UnambiguousCstyleForStatementContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::UnambiguousBlockContext* EscriptParser::UnambiguousCstyleForStatementContext::unambiguousBlock() {
  return getRuleContext<EscriptParser::UnambiguousBlockContext>(0);
}


size_t EscriptParser::UnambiguousCstyleForStatementContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousCstyleForStatement;
}

void EscriptParser::UnambiguousCstyleForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousCstyleForStatement(this);
}

void EscriptParser::UnambiguousCstyleForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousCstyleForStatement(this);
}


antlrcpp::Any EscriptParser::UnambiguousCstyleForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousCstyleForStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousCstyleForStatementContext* EscriptParser::unambiguousCstyleForStatement() {
  UnambiguousCstyleForStatementContext *_localctx = _tracker.createInstance<UnambiguousCstyleForStatementContext>(_ctx, getState());
  enterRule(_localctx, 136, EscriptParser::RuleUnambiguousCstyleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(844);
    match(EscriptParser::LPAREN);
    setState(845);
    unambiguousExpression();
    setState(846);
    match(EscriptParser::SEMI);
    setState(847);
    unambiguousExpression();
    setState(848);
    match(EscriptParser::SEMI);
    setState(849);
    unambiguousExpression();
    setState(850);
    match(EscriptParser::RPAREN);
    setState(851);
    unambiguousBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

EscriptParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::IdentifierListContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::IdentifierListContext::COMMA() {
  return getToken(EscriptParser::COMMA, 0);
}

EscriptParser::IdentifierListContext* EscriptParser::IdentifierListContext::identifierList() {
  return getRuleContext<EscriptParser::IdentifierListContext>(0);
}


size_t EscriptParser::IdentifierListContext::getRuleIndex() const {
  return EscriptParser::RuleIdentifierList;
}

void EscriptParser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void EscriptParser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}


antlrcpp::Any EscriptParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::IdentifierListContext* EscriptParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 138, EscriptParser::RuleIdentifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(853);
    match(EscriptParser::IDENTIFIER);
    setState(856);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::COMMA) {
      setState(854);
      match(EscriptParser::COMMA);
      setState(855);
      identifierList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationListContext ------------------------------------------------------------------

EscriptParser::VariableDeclarationListContext::VariableDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::VariableDeclarationContext *> EscriptParser::VariableDeclarationListContext::variableDeclaration() {
  return getRuleContexts<EscriptParser::VariableDeclarationContext>();
}

EscriptParser::VariableDeclarationContext* EscriptParser::VariableDeclarationListContext::variableDeclaration(size_t i) {
  return getRuleContext<EscriptParser::VariableDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::VariableDeclarationListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::VariableDeclarationListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::VariableDeclarationListContext::getRuleIndex() const {
  return EscriptParser::RuleVariableDeclarationList;
}

void EscriptParser::VariableDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationList(this);
}

void EscriptParser::VariableDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationList(this);
}


antlrcpp::Any EscriptParser::VariableDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::VariableDeclarationListContext* EscriptParser::variableDeclarationList() {
  VariableDeclarationListContext *_localctx = _tracker.createInstance<VariableDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 140, EscriptParser::RuleVariableDeclarationList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(858);
    variableDeclaration();
    setState(863);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(859);
      match(EscriptParser::COMMA);
      setState(860);
      variableDeclaration();
      setState(865);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousVariableDeclarationListContext ------------------------------------------------------------------

EscriptParser::UnambiguousVariableDeclarationListContext::UnambiguousVariableDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousVariableDeclarationContext *> EscriptParser::UnambiguousVariableDeclarationListContext::unambiguousVariableDeclaration() {
  return getRuleContexts<EscriptParser::UnambiguousVariableDeclarationContext>();
}

EscriptParser::UnambiguousVariableDeclarationContext* EscriptParser::UnambiguousVariableDeclarationListContext::unambiguousVariableDeclaration(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousVariableDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousVariableDeclarationListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::UnambiguousVariableDeclarationListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::UnambiguousVariableDeclarationListContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousVariableDeclarationList;
}

void EscriptParser::UnambiguousVariableDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousVariableDeclarationList(this);
}

void EscriptParser::UnambiguousVariableDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousVariableDeclarationList(this);
}


antlrcpp::Any EscriptParser::UnambiguousVariableDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousVariableDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousVariableDeclarationListContext* EscriptParser::unambiguousVariableDeclarationList() {
  UnambiguousVariableDeclarationListContext *_localctx = _tracker.createInstance<UnambiguousVariableDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 142, EscriptParser::RuleUnambiguousVariableDeclarationList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(866);
    unambiguousVariableDeclaration();
    setState(871);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(867);
      match(EscriptParser::COMMA);
      setState(868);
      unambiguousVariableDeclaration();
      setState(873);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

EscriptParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::VariableDeclarationInitializerContext* EscriptParser::VariableDeclarationContext::variableDeclarationInitializer() {
  return getRuleContext<EscriptParser::VariableDeclarationInitializerContext>(0);
}


size_t EscriptParser::VariableDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleVariableDeclaration;
}

void EscriptParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void EscriptParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


antlrcpp::Any EscriptParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::VariableDeclarationContext* EscriptParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 144, EscriptParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(874);
    match(EscriptParser::IDENTIFIER);
    setState(876);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ARRAY

    || _la == EscriptParser::ASSIGN) {
      setState(875);
      variableDeclarationInitializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousVariableDeclarationContext ------------------------------------------------------------------

EscriptParser::UnambiguousVariableDeclarationContext::UnambiguousVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousVariableDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::UnambiguousVariableDeclarationInitializerContext* EscriptParser::UnambiguousVariableDeclarationContext::unambiguousVariableDeclarationInitializer() {
  return getRuleContext<EscriptParser::UnambiguousVariableDeclarationInitializerContext>(0);
}


size_t EscriptParser::UnambiguousVariableDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousVariableDeclaration;
}

void EscriptParser::UnambiguousVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousVariableDeclaration(this);
}

void EscriptParser::UnambiguousVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousVariableDeclaration(this);
}


antlrcpp::Any EscriptParser::UnambiguousVariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousVariableDeclarationContext* EscriptParser::unambiguousVariableDeclaration() {
  UnambiguousVariableDeclarationContext *_localctx = _tracker.createInstance<UnambiguousVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 146, EscriptParser::RuleUnambiguousVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(878);
    match(EscriptParser::IDENTIFIER);
    setState(880);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (EscriptParser::ARRAY - 65))
      | (1ULL << (EscriptParser::EQUAL_DEPRECATED - 65))
      | (1ULL << (EscriptParser::ASSIGN - 65)))) != 0)) {
      setState(879);
      unambiguousVariableDeclarationInitializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramParametersContext ------------------------------------------------------------------

EscriptParser::ProgramParametersContext::ProgramParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ProgramParametersContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::ProgramParametersContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::ProgramParameterListContext* EscriptParser::ProgramParametersContext::programParameterList() {
  return getRuleContext<EscriptParser::ProgramParameterListContext>(0);
}


size_t EscriptParser::ProgramParametersContext::getRuleIndex() const {
  return EscriptParser::RuleProgramParameters;
}

void EscriptParser::ProgramParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramParameters(this);
}

void EscriptParser::ProgramParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramParameters(this);
}


antlrcpp::Any EscriptParser::ProgramParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitProgramParameters(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ProgramParametersContext* EscriptParser::programParameters() {
  ProgramParametersContext *_localctx = _tracker.createInstance<ProgramParametersContext>(_ctx, getState());
  enterRule(_localctx, 148, EscriptParser::RuleProgramParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(882);
    match(EscriptParser::LPAREN);
    setState(884);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::UNUSED || _la == EscriptParser::IDENTIFIER) {
      setState(883);
      programParameterList();
    }
    setState(886);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramParameterListContext ------------------------------------------------------------------

EscriptParser::ProgramParameterListContext::ProgramParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::ProgramParameterContext *> EscriptParser::ProgramParameterListContext::programParameter() {
  return getRuleContexts<EscriptParser::ProgramParameterContext>();
}

EscriptParser::ProgramParameterContext* EscriptParser::ProgramParameterListContext::programParameter(size_t i) {
  return getRuleContext<EscriptParser::ProgramParameterContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::ProgramParameterListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::ProgramParameterListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::ProgramParameterListContext::getRuleIndex() const {
  return EscriptParser::RuleProgramParameterList;
}

void EscriptParser::ProgramParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramParameterList(this);
}

void EscriptParser::ProgramParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramParameterList(this);
}


antlrcpp::Any EscriptParser::ProgramParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitProgramParameterList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ProgramParameterListContext* EscriptParser::programParameterList() {
  ProgramParameterListContext *_localctx = _tracker.createInstance<ProgramParameterListContext>(_ctx, getState());
  enterRule(_localctx, 150, EscriptParser::RuleProgramParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(888);
    programParameter();
    setState(895);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::UNUSED || _la == EscriptParser::COMMA

    || _la == EscriptParser::IDENTIFIER) {
      setState(890);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == EscriptParser::COMMA) {
        setState(889);
        match(EscriptParser::COMMA);
      }
      setState(892);
      programParameter();
      setState(897);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramParameterContext ------------------------------------------------------------------

EscriptParser::ProgramParameterContext::ProgramParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ProgramParameterContext::UNUSED() {
  return getToken(EscriptParser::UNUSED, 0);
}

tree::TerminalNode* EscriptParser::ProgramParameterContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::ProgramParameterContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::ProgramParameterContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}


size_t EscriptParser::ProgramParameterContext::getRuleIndex() const {
  return EscriptParser::RuleProgramParameter;
}

void EscriptParser::ProgramParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramParameter(this);
}

void EscriptParser::ProgramParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramParameter(this);
}


antlrcpp::Any EscriptParser::ProgramParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitProgramParameter(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ProgramParameterContext* EscriptParser::programParameter() {
  ProgramParameterContext *_localctx = _tracker.createInstance<ProgramParameterContext>(_ctx, getState());
  enterRule(_localctx, 152, EscriptParser::RuleProgramParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(905);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::UNUSED: {
        enterOuterAlt(_localctx, 1);
        setState(898);
        match(EscriptParser::UNUSED);
        setState(899);
        match(EscriptParser::IDENTIFIER);
        break;
      }

      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(900);
        match(EscriptParser::IDENTIFIER);
        setState(903);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::ASSIGN) {
          setState(901);
          match(EscriptParser::ASSIGN);
          setState(902);
          expression(0);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousProgramParametersContext ------------------------------------------------------------------

EscriptParser::UnambiguousProgramParametersContext::UnambiguousProgramParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousProgramParametersContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousProgramParametersContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::UnambiguousProgramParameterListContext* EscriptParser::UnambiguousProgramParametersContext::unambiguousProgramParameterList() {
  return getRuleContext<EscriptParser::UnambiguousProgramParameterListContext>(0);
}


size_t EscriptParser::UnambiguousProgramParametersContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousProgramParameters;
}

void EscriptParser::UnambiguousProgramParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousProgramParameters(this);
}

void EscriptParser::UnambiguousProgramParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousProgramParameters(this);
}


antlrcpp::Any EscriptParser::UnambiguousProgramParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousProgramParameters(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousProgramParametersContext* EscriptParser::unambiguousProgramParameters() {
  UnambiguousProgramParametersContext *_localctx = _tracker.createInstance<UnambiguousProgramParametersContext>(_ctx, getState());
  enterRule(_localctx, 154, EscriptParser::RuleUnambiguousProgramParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(907);
    match(EscriptParser::LPAREN);
    setState(909);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::UNUSED || _la == EscriptParser::IDENTIFIER) {
      setState(908);
      unambiguousProgramParameterList();
    }
    setState(911);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousProgramParameterListContext ------------------------------------------------------------------

EscriptParser::UnambiguousProgramParameterListContext::UnambiguousProgramParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousProgramParameterContext *> EscriptParser::UnambiguousProgramParameterListContext::unambiguousProgramParameter() {
  return getRuleContexts<EscriptParser::UnambiguousProgramParameterContext>();
}

EscriptParser::UnambiguousProgramParameterContext* EscriptParser::UnambiguousProgramParameterListContext::unambiguousProgramParameter(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousProgramParameterContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousProgramParameterListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::UnambiguousProgramParameterListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::UnambiguousProgramParameterListContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousProgramParameterList;
}

void EscriptParser::UnambiguousProgramParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousProgramParameterList(this);
}

void EscriptParser::UnambiguousProgramParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousProgramParameterList(this);
}


antlrcpp::Any EscriptParser::UnambiguousProgramParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousProgramParameterList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousProgramParameterListContext* EscriptParser::unambiguousProgramParameterList() {
  UnambiguousProgramParameterListContext *_localctx = _tracker.createInstance<UnambiguousProgramParameterListContext>(_ctx, getState());
  enterRule(_localctx, 156, EscriptParser::RuleUnambiguousProgramParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(913);
    unambiguousProgramParameter();
    setState(920);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::UNUSED || _la == EscriptParser::COMMA

    || _la == EscriptParser::IDENTIFIER) {
      setState(915);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == EscriptParser::COMMA) {
        setState(914);
        match(EscriptParser::COMMA);
      }
      setState(917);
      unambiguousProgramParameter();
      setState(922);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousProgramParameterContext ------------------------------------------------------------------

EscriptParser::UnambiguousProgramParameterContext::UnambiguousProgramParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousProgramParameterContext::UNUSED() {
  return getToken(EscriptParser::UNUSED, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousProgramParameterContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousProgramParameterContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousProgramParameterContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}


size_t EscriptParser::UnambiguousProgramParameterContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousProgramParameter;
}

void EscriptParser::UnambiguousProgramParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousProgramParameter(this);
}

void EscriptParser::UnambiguousProgramParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousProgramParameter(this);
}


antlrcpp::Any EscriptParser::UnambiguousProgramParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousProgramParameter(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousProgramParameterContext* EscriptParser::unambiguousProgramParameter() {
  UnambiguousProgramParameterContext *_localctx = _tracker.createInstance<UnambiguousProgramParameterContext>(_ctx, getState());
  enterRule(_localctx, 158, EscriptParser::RuleUnambiguousProgramParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(930);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::UNUSED: {
        enterOuterAlt(_localctx, 1);
        setState(923);
        match(EscriptParser::UNUSED);
        setState(924);
        match(EscriptParser::IDENTIFIER);
        break;
      }

      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(925);
        match(EscriptParser::IDENTIFIER);
        setState(928);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::ASSIGN) {
          setState(926);
          match(EscriptParser::ASSIGN);
          setState(927);
          unambiguousExpression();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParametersContext ------------------------------------------------------------------

EscriptParser::FunctionParametersContext::FunctionParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::FunctionParametersContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::FunctionParametersContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::FunctionParameterListContext* EscriptParser::FunctionParametersContext::functionParameterList() {
  return getRuleContext<EscriptParser::FunctionParameterListContext>(0);
}


size_t EscriptParser::FunctionParametersContext::getRuleIndex() const {
  return EscriptParser::RuleFunctionParameters;
}

void EscriptParser::FunctionParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameters(this);
}

void EscriptParser::FunctionParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameters(this);
}


antlrcpp::Any EscriptParser::FunctionParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParameters(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FunctionParametersContext* EscriptParser::functionParameters() {
  FunctionParametersContext *_localctx = _tracker.createInstance<FunctionParametersContext>(_ctx, getState());
  enterRule(_localctx, 160, EscriptParser::RuleFunctionParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(932);
    match(EscriptParser::LPAREN);
    setState(934);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::BYREF

    || _la == EscriptParser::UNUSED || _la == EscriptParser::IDENTIFIER) {
      setState(933);
      functionParameterList();
    }
    setState(936);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParameterListContext ------------------------------------------------------------------

EscriptParser::FunctionParameterListContext::FunctionParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::FunctionParameterContext *> EscriptParser::FunctionParameterListContext::functionParameter() {
  return getRuleContexts<EscriptParser::FunctionParameterContext>();
}

EscriptParser::FunctionParameterContext* EscriptParser::FunctionParameterListContext::functionParameter(size_t i) {
  return getRuleContext<EscriptParser::FunctionParameterContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::FunctionParameterListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::FunctionParameterListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::FunctionParameterListContext::getRuleIndex() const {
  return EscriptParser::RuleFunctionParameterList;
}

void EscriptParser::FunctionParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameterList(this);
}

void EscriptParser::FunctionParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameterList(this);
}


antlrcpp::Any EscriptParser::FunctionParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParameterList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FunctionParameterListContext* EscriptParser::functionParameterList() {
  FunctionParameterListContext *_localctx = _tracker.createInstance<FunctionParameterListContext>(_ctx, getState());
  enterRule(_localctx, 162, EscriptParser::RuleFunctionParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(938);
    functionParameter();
    setState(943);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(939);
      match(EscriptParser::COMMA);
      setState(940);
      functionParameter();
      setState(945);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParameterContext ------------------------------------------------------------------

EscriptParser::FunctionParameterContext::FunctionParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::FunctionParameterContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::FunctionParameterContext::BYREF() {
  return getToken(EscriptParser::BYREF, 0);
}

tree::TerminalNode* EscriptParser::FunctionParameterContext::UNUSED() {
  return getToken(EscriptParser::UNUSED, 0);
}

tree::TerminalNode* EscriptParser::FunctionParameterContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::FunctionParameterContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}


size_t EscriptParser::FunctionParameterContext::getRuleIndex() const {
  return EscriptParser::RuleFunctionParameter;
}

void EscriptParser::FunctionParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameter(this);
}

void EscriptParser::FunctionParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameter(this);
}


antlrcpp::Any EscriptParser::FunctionParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParameter(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FunctionParameterContext* EscriptParser::functionParameter() {
  FunctionParameterContext *_localctx = _tracker.createInstance<FunctionParameterContext>(_ctx, getState());
  enterRule(_localctx, 164, EscriptParser::RuleFunctionParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(947);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::BYREF) {
      setState(946);
      match(EscriptParser::BYREF);
    }
    setState(950);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::UNUSED) {
      setState(949);
      match(EscriptParser::UNUSED);
    }
    setState(952);
    match(EscriptParser::IDENTIFIER);
    setState(955);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ASSIGN) {
      setState(953);
      match(EscriptParser::ASSIGN);
      setState(954);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousFunctionParametersContext ------------------------------------------------------------------

EscriptParser::UnambiguousFunctionParametersContext::UnambiguousFunctionParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionParametersContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionParametersContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::UnambiguousFunctionParameterListContext* EscriptParser::UnambiguousFunctionParametersContext::unambiguousFunctionParameterList() {
  return getRuleContext<EscriptParser::UnambiguousFunctionParameterListContext>(0);
}


size_t EscriptParser::UnambiguousFunctionParametersContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousFunctionParameters;
}

void EscriptParser::UnambiguousFunctionParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousFunctionParameters(this);
}

void EscriptParser::UnambiguousFunctionParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousFunctionParameters(this);
}


antlrcpp::Any EscriptParser::UnambiguousFunctionParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousFunctionParameters(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousFunctionParametersContext* EscriptParser::unambiguousFunctionParameters() {
  UnambiguousFunctionParametersContext *_localctx = _tracker.createInstance<UnambiguousFunctionParametersContext>(_ctx, getState());
  enterRule(_localctx, 166, EscriptParser::RuleUnambiguousFunctionParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(957);
    match(EscriptParser::LPAREN);
    setState(959);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::BYREF

    || _la == EscriptParser::UNUSED || _la == EscriptParser::IDENTIFIER) {
      setState(958);
      unambiguousFunctionParameterList();
    }
    setState(961);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousFunctionParameterListContext ------------------------------------------------------------------

EscriptParser::UnambiguousFunctionParameterListContext::UnambiguousFunctionParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousFunctionParameterContext *> EscriptParser::UnambiguousFunctionParameterListContext::unambiguousFunctionParameter() {
  return getRuleContexts<EscriptParser::UnambiguousFunctionParameterContext>();
}

EscriptParser::UnambiguousFunctionParameterContext* EscriptParser::UnambiguousFunctionParameterListContext::unambiguousFunctionParameter(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousFunctionParameterContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousFunctionParameterListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionParameterListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::UnambiguousFunctionParameterListContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousFunctionParameterList;
}

void EscriptParser::UnambiguousFunctionParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousFunctionParameterList(this);
}

void EscriptParser::UnambiguousFunctionParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousFunctionParameterList(this);
}


antlrcpp::Any EscriptParser::UnambiguousFunctionParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousFunctionParameterList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousFunctionParameterListContext* EscriptParser::unambiguousFunctionParameterList() {
  UnambiguousFunctionParameterListContext *_localctx = _tracker.createInstance<UnambiguousFunctionParameterListContext>(_ctx, getState());
  enterRule(_localctx, 168, EscriptParser::RuleUnambiguousFunctionParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(963);
    unambiguousFunctionParameter();
    setState(968);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(964);
      match(EscriptParser::COMMA);
      setState(965);
      unambiguousFunctionParameter();
      setState(970);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousFunctionParameterContext ------------------------------------------------------------------

EscriptParser::UnambiguousFunctionParameterContext::UnambiguousFunctionParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionParameterContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionParameterContext::BYREF() {
  return getToken(EscriptParser::BYREF, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionParameterContext::UNUSED() {
  return getToken(EscriptParser::UNUSED, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionParameterContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousFunctionParameterContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}


size_t EscriptParser::UnambiguousFunctionParameterContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousFunctionParameter;
}

void EscriptParser::UnambiguousFunctionParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousFunctionParameter(this);
}

void EscriptParser::UnambiguousFunctionParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousFunctionParameter(this);
}


antlrcpp::Any EscriptParser::UnambiguousFunctionParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousFunctionParameter(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousFunctionParameterContext* EscriptParser::unambiguousFunctionParameter() {
  UnambiguousFunctionParameterContext *_localctx = _tracker.createInstance<UnambiguousFunctionParameterContext>(_ctx, getState());
  enterRule(_localctx, 170, EscriptParser::RuleUnambiguousFunctionParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(972);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::BYREF) {
      setState(971);
      match(EscriptParser::BYREF);
    }
    setState(975);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::UNUSED) {
      setState(974);
      match(EscriptParser::UNUSED);
    }
    setState(977);
    match(EscriptParser::IDENTIFIER);
    setState(980);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ASSIGN) {
      setState(978);
      match(EscriptParser::ASSIGN);
      setState(979);
      unambiguousExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopedMethodCallContext ------------------------------------------------------------------

EscriptParser::ScopedMethodCallContext::ScopedMethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ScopedMethodCallContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::ScopedMethodCallContext::COLONCOLON() {
  return getToken(EscriptParser::COLONCOLON, 0);
}

EscriptParser::MethodCallContext* EscriptParser::ScopedMethodCallContext::methodCall() {
  return getRuleContext<EscriptParser::MethodCallContext>(0);
}


size_t EscriptParser::ScopedMethodCallContext::getRuleIndex() const {
  return EscriptParser::RuleScopedMethodCall;
}

void EscriptParser::ScopedMethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScopedMethodCall(this);
}

void EscriptParser::ScopedMethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScopedMethodCall(this);
}


antlrcpp::Any EscriptParser::ScopedMethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitScopedMethodCall(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ScopedMethodCallContext* EscriptParser::scopedMethodCall() {
  ScopedMethodCallContext *_localctx = _tracker.createInstance<ScopedMethodCallContext>(_ctx, getState());
  enterRule(_localctx, 172, EscriptParser::RuleScopedMethodCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(982);
    match(EscriptParser::IDENTIFIER);
    setState(983);
    match(EscriptParser::COLONCOLON);
    setState(984);
    methodCall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousExpressionContext ------------------------------------------------------------------

EscriptParser::UnambiguousExpressionContext::UnambiguousExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::MembershipContext *> EscriptParser::UnambiguousExpressionContext::membership() {
  return getRuleContexts<EscriptParser::MembershipContext>();
}

EscriptParser::MembershipContext* EscriptParser::UnambiguousExpressionContext::membership(size_t i) {
  return getRuleContext<EscriptParser::MembershipContext>(i);
}

std::vector<EscriptParser::AssignmentOperatorContext *> EscriptParser::UnambiguousExpressionContext::assignmentOperator() {
  return getRuleContexts<EscriptParser::AssignmentOperatorContext>();
}

EscriptParser::AssignmentOperatorContext* EscriptParser::UnambiguousExpressionContext::assignmentOperator(size_t i) {
  return getRuleContext<EscriptParser::AssignmentOperatorContext>(i);
}


size_t EscriptParser::UnambiguousExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousExpression;
}

void EscriptParser::UnambiguousExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousExpression(this);
}

void EscriptParser::UnambiguousExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousExpression(this);
}


antlrcpp::Any EscriptParser::UnambiguousExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::unambiguousExpression() {
  UnambiguousExpressionContext *_localctx = _tracker.createInstance<UnambiguousExpressionContext>(_ctx, getState());
  enterRule(_localctx, 174, EscriptParser::RuleUnambiguousExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(986);
    membership();
    setState(992);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 90) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 90)) & ((1ULL << (EscriptParser::ADD_ASSIGN - 90))
      | (1ULL << (EscriptParser::SUB_ASSIGN - 90))
      | (1ULL << (EscriptParser::MUL_ASSIGN - 90))
      | (1ULL << (EscriptParser::DIV_ASSIGN - 90))
      | (1ULL << (EscriptParser::MOD_ASSIGN - 90))
      | (1ULL << (EscriptParser::ASSIGN - 90)))) != 0)) {
      setState(987);
      assignmentOperator();
      setState(988);
      membership();
      setState(994);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

EscriptParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::AssignmentOperatorContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::AssignmentOperatorContext::ADD_ASSIGN() {
  return getToken(EscriptParser::ADD_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::AssignmentOperatorContext::SUB_ASSIGN() {
  return getToken(EscriptParser::SUB_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::AssignmentOperatorContext::MUL_ASSIGN() {
  return getToken(EscriptParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::AssignmentOperatorContext::DIV_ASSIGN() {
  return getToken(EscriptParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::AssignmentOperatorContext::MOD_ASSIGN() {
  return getToken(EscriptParser::MOD_ASSIGN, 0);
}


size_t EscriptParser::AssignmentOperatorContext::getRuleIndex() const {
  return EscriptParser::RuleAssignmentOperator;
}

void EscriptParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void EscriptParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


antlrcpp::Any EscriptParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::AssignmentOperatorContext* EscriptParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 176, EscriptParser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(995);
    _la = _input->LA(1);
    if (!(((((_la - 90) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 90)) & ((1ULL << (EscriptParser::ADD_ASSIGN - 90))
      | (1ULL << (EscriptParser::SUB_ASSIGN - 90))
      | (1ULL << (EscriptParser::MUL_ASSIGN - 90))
      | (1ULL << (EscriptParser::DIV_ASSIGN - 90))
      | (1ULL << (EscriptParser::MOD_ASSIGN - 90))
      | (1ULL << (EscriptParser::ASSIGN - 90)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MembershipContext ------------------------------------------------------------------

EscriptParser::MembershipContext::MembershipContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::DisjunctionContext *> EscriptParser::MembershipContext::disjunction() {
  return getRuleContexts<EscriptParser::DisjunctionContext>();
}

EscriptParser::DisjunctionContext* EscriptParser::MembershipContext::disjunction(size_t i) {
  return getRuleContext<EscriptParser::DisjunctionContext>(i);
}

std::vector<EscriptParser::MembershipOperatorContext *> EscriptParser::MembershipContext::membershipOperator() {
  return getRuleContexts<EscriptParser::MembershipOperatorContext>();
}

EscriptParser::MembershipOperatorContext* EscriptParser::MembershipContext::membershipOperator(size_t i) {
  return getRuleContext<EscriptParser::MembershipOperatorContext>(i);
}


size_t EscriptParser::MembershipContext::getRuleIndex() const {
  return EscriptParser::RuleMembership;
}

void EscriptParser::MembershipContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMembership(this);
}

void EscriptParser::MembershipContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMembership(this);
}


antlrcpp::Any EscriptParser::MembershipContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMembership(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MembershipContext* EscriptParser::membership() {
  MembershipContext *_localctx = _tracker.createInstance<MembershipContext>(_ctx, getState());
  enterRule(_localctx, 178, EscriptParser::RuleMembership);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(997);
    disjunction();
    setState(1003);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 109) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 109)) & ((1ULL << (EscriptParser::ADDMEMBER - 109))
      | (1ULL << (EscriptParser::DELMEMBER - 109))
      | (1ULL << (EscriptParser::CHKMEMBER - 109)))) != 0)) {
      setState(998);
      membershipOperator();
      setState(999);
      disjunction();
      setState(1005);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MembershipOperatorContext ------------------------------------------------------------------

EscriptParser::MembershipOperatorContext::MembershipOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::MembershipOperatorContext::ADDMEMBER() {
  return getToken(EscriptParser::ADDMEMBER, 0);
}

tree::TerminalNode* EscriptParser::MembershipOperatorContext::DELMEMBER() {
  return getToken(EscriptParser::DELMEMBER, 0);
}

tree::TerminalNode* EscriptParser::MembershipOperatorContext::CHKMEMBER() {
  return getToken(EscriptParser::CHKMEMBER, 0);
}


size_t EscriptParser::MembershipOperatorContext::getRuleIndex() const {
  return EscriptParser::RuleMembershipOperator;
}

void EscriptParser::MembershipOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMembershipOperator(this);
}

void EscriptParser::MembershipOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMembershipOperator(this);
}


antlrcpp::Any EscriptParser::MembershipOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMembershipOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MembershipOperatorContext* EscriptParser::membershipOperator() {
  MembershipOperatorContext *_localctx = _tracker.createInstance<MembershipOperatorContext>(_ctx, getState());
  enterRule(_localctx, 180, EscriptParser::RuleMembershipOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1006);
    _la = _input->LA(1);
    if (!(((((_la - 109) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 109)) & ((1ULL << (EscriptParser::ADDMEMBER - 109))
      | (1ULL << (EscriptParser::DELMEMBER - 109))
      | (1ULL << (EscriptParser::CHKMEMBER - 109)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DisjunctionContext ------------------------------------------------------------------

EscriptParser::DisjunctionContext::DisjunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::ConjunctionContext *> EscriptParser::DisjunctionContext::conjunction() {
  return getRuleContexts<EscriptParser::ConjunctionContext>();
}

EscriptParser::ConjunctionContext* EscriptParser::DisjunctionContext::conjunction(size_t i) {
  return getRuleContext<EscriptParser::ConjunctionContext>(i);
}

std::vector<EscriptParser::DisjunctionOperatorContext *> EscriptParser::DisjunctionContext::disjunctionOperator() {
  return getRuleContexts<EscriptParser::DisjunctionOperatorContext>();
}

EscriptParser::DisjunctionOperatorContext* EscriptParser::DisjunctionContext::disjunctionOperator(size_t i) {
  return getRuleContext<EscriptParser::DisjunctionOperatorContext>(i);
}


size_t EscriptParser::DisjunctionContext::getRuleIndex() const {
  return EscriptParser::RuleDisjunction;
}

void EscriptParser::DisjunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDisjunction(this);
}

void EscriptParser::DisjunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDisjunction(this);
}


antlrcpp::Any EscriptParser::DisjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDisjunction(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DisjunctionContext* EscriptParser::disjunction() {
  DisjunctionContext *_localctx = _tracker.createInstance<DisjunctionContext>(_ctx, getState());
  enterRule(_localctx, 182, EscriptParser::RuleDisjunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1008);
    conjunction();
    setState(1014);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::OR_A

    || _la == EscriptParser::OR_B) {
      setState(1009);
      disjunctionOperator();
      setState(1010);
      conjunction();
      setState(1016);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DisjunctionOperatorContext ------------------------------------------------------------------

EscriptParser::DisjunctionOperatorContext::DisjunctionOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::DisjunctionOperatorContext::OR_A() {
  return getToken(EscriptParser::OR_A, 0);
}

tree::TerminalNode* EscriptParser::DisjunctionOperatorContext::OR_B() {
  return getToken(EscriptParser::OR_B, 0);
}


size_t EscriptParser::DisjunctionOperatorContext::getRuleIndex() const {
  return EscriptParser::RuleDisjunctionOperator;
}

void EscriptParser::DisjunctionOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDisjunctionOperator(this);
}

void EscriptParser::DisjunctionOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDisjunctionOperator(this);
}


antlrcpp::Any EscriptParser::DisjunctionOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDisjunctionOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DisjunctionOperatorContext* EscriptParser::disjunctionOperator() {
  DisjunctionOperatorContext *_localctx = _tracker.createInstance<DisjunctionOperatorContext>(_ctx, getState());
  enterRule(_localctx, 184, EscriptParser::RuleDisjunctionOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1017);
    _la = _input->LA(1);
    if (!(_la == EscriptParser::OR_A

    || _la == EscriptParser::OR_B)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConjunctionContext ------------------------------------------------------------------

EscriptParser::ConjunctionContext::ConjunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::EqualityContext *> EscriptParser::ConjunctionContext::equality() {
  return getRuleContexts<EscriptParser::EqualityContext>();
}

EscriptParser::EqualityContext* EscriptParser::ConjunctionContext::equality(size_t i) {
  return getRuleContext<EscriptParser::EqualityContext>(i);
}

std::vector<EscriptParser::ConjunctionOperatorContext *> EscriptParser::ConjunctionContext::conjunctionOperator() {
  return getRuleContexts<EscriptParser::ConjunctionOperatorContext>();
}

EscriptParser::ConjunctionOperatorContext* EscriptParser::ConjunctionContext::conjunctionOperator(size_t i) {
  return getRuleContext<EscriptParser::ConjunctionOperatorContext>(i);
}


size_t EscriptParser::ConjunctionContext::getRuleIndex() const {
  return EscriptParser::RuleConjunction;
}

void EscriptParser::ConjunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConjunction(this);
}

void EscriptParser::ConjunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConjunction(this);
}


antlrcpp::Any EscriptParser::ConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitConjunction(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ConjunctionContext* EscriptParser::conjunction() {
  ConjunctionContext *_localctx = _tracker.createInstance<ConjunctionContext>(_ctx, getState());
  enterRule(_localctx, 186, EscriptParser::RuleConjunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1019);
    equality();
    setState(1025);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::AND_A

    || _la == EscriptParser::AND_B) {
      setState(1020);
      conjunctionOperator();
      setState(1021);
      equality();
      setState(1027);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConjunctionOperatorContext ------------------------------------------------------------------

EscriptParser::ConjunctionOperatorContext::ConjunctionOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ConjunctionOperatorContext::AND_A() {
  return getToken(EscriptParser::AND_A, 0);
}

tree::TerminalNode* EscriptParser::ConjunctionOperatorContext::AND_B() {
  return getToken(EscriptParser::AND_B, 0);
}


size_t EscriptParser::ConjunctionOperatorContext::getRuleIndex() const {
  return EscriptParser::RuleConjunctionOperator;
}

void EscriptParser::ConjunctionOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConjunctionOperator(this);
}

void EscriptParser::ConjunctionOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConjunctionOperator(this);
}


antlrcpp::Any EscriptParser::ConjunctionOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitConjunctionOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ConjunctionOperatorContext* EscriptParser::conjunctionOperator() {
  ConjunctionOperatorContext *_localctx = _tracker.createInstance<ConjunctionOperatorContext>(_ctx, getState());
  enterRule(_localctx, 188, EscriptParser::RuleConjunctionOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1028);
    _la = _input->LA(1);
    if (!(_la == EscriptParser::AND_A

    || _la == EscriptParser::AND_B)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityContext ------------------------------------------------------------------

EscriptParser::EqualityContext::EqualityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::BitwiseDisjunctionContext *> EscriptParser::EqualityContext::bitwiseDisjunction() {
  return getRuleContexts<EscriptParser::BitwiseDisjunctionContext>();
}

EscriptParser::BitwiseDisjunctionContext* EscriptParser::EqualityContext::bitwiseDisjunction(size_t i) {
  return getRuleContext<EscriptParser::BitwiseDisjunctionContext>(i);
}

std::vector<EscriptParser::EqualityOperatorContext *> EscriptParser::EqualityContext::equalityOperator() {
  return getRuleContexts<EscriptParser::EqualityOperatorContext>();
}

EscriptParser::EqualityOperatorContext* EscriptParser::EqualityContext::equalityOperator(size_t i) {
  return getRuleContext<EscriptParser::EqualityOperatorContext>(i);
}


size_t EscriptParser::EqualityContext::getRuleIndex() const {
  return EscriptParser::RuleEquality;
}

void EscriptParser::EqualityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality(this);
}

void EscriptParser::EqualityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality(this);
}


antlrcpp::Any EscriptParser::EqualityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitEquality(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::EqualityContext* EscriptParser::equality() {
  EqualityContext *_localctx = _tracker.createInstance<EqualityContext>(_ctx, getState());
  enterRule(_localctx, 190, EscriptParser::RuleEquality);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1030);
    bitwiseDisjunction();
    setState(1036);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 104) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 104)) & ((1ULL << (EscriptParser::NOTEQUAL_A - 104))
      | (1ULL << (EscriptParser::NOTEQUAL_B - 104))
      | (1ULL << (EscriptParser::EQUAL_DEPRECATED - 104))
      | (1ULL << (EscriptParser::EQUAL - 104)))) != 0)) {
      setState(1031);
      equalityOperator();
      setState(1032);
      bitwiseDisjunction();
      setState(1038);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityOperatorContext ------------------------------------------------------------------

EscriptParser::EqualityOperatorContext::EqualityOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::EqualityOperatorContext::EQUAL() {
  return getToken(EscriptParser::EQUAL, 0);
}

tree::TerminalNode* EscriptParser::EqualityOperatorContext::EQUAL_DEPRECATED() {
  return getToken(EscriptParser::EQUAL_DEPRECATED, 0);
}

tree::TerminalNode* EscriptParser::EqualityOperatorContext::NOTEQUAL_A() {
  return getToken(EscriptParser::NOTEQUAL_A, 0);
}

tree::TerminalNode* EscriptParser::EqualityOperatorContext::NOTEQUAL_B() {
  return getToken(EscriptParser::NOTEQUAL_B, 0);
}


size_t EscriptParser::EqualityOperatorContext::getRuleIndex() const {
  return EscriptParser::RuleEqualityOperator;
}

void EscriptParser::EqualityOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityOperator(this);
}

void EscriptParser::EqualityOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityOperator(this);
}


antlrcpp::Any EscriptParser::EqualityOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitEqualityOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::EqualityOperatorContext* EscriptParser::equalityOperator() {
  EqualityOperatorContext *_localctx = _tracker.createInstance<EqualityOperatorContext>(_ctx, getState());
  enterRule(_localctx, 192, EscriptParser::RuleEqualityOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1039);
    _la = _input->LA(1);
    if (!(((((_la - 104) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 104)) & ((1ULL << (EscriptParser::NOTEQUAL_A - 104))
      | (1ULL << (EscriptParser::NOTEQUAL_B - 104))
      | (1ULL << (EscriptParser::EQUAL_DEPRECATED - 104))
      | (1ULL << (EscriptParser::EQUAL - 104)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitwiseDisjunctionContext ------------------------------------------------------------------

EscriptParser::BitwiseDisjunctionContext::BitwiseDisjunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::BitwiseXorContext *> EscriptParser::BitwiseDisjunctionContext::bitwiseXor() {
  return getRuleContexts<EscriptParser::BitwiseXorContext>();
}

EscriptParser::BitwiseXorContext* EscriptParser::BitwiseDisjunctionContext::bitwiseXor(size_t i) {
  return getRuleContext<EscriptParser::BitwiseXorContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::BitwiseDisjunctionContext::BITOR() {
  return getTokens(EscriptParser::BITOR);
}

tree::TerminalNode* EscriptParser::BitwiseDisjunctionContext::BITOR(size_t i) {
  return getToken(EscriptParser::BITOR, i);
}


size_t EscriptParser::BitwiseDisjunctionContext::getRuleIndex() const {
  return EscriptParser::RuleBitwiseDisjunction;
}

void EscriptParser::BitwiseDisjunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitwiseDisjunction(this);
}

void EscriptParser::BitwiseDisjunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitwiseDisjunction(this);
}


antlrcpp::Any EscriptParser::BitwiseDisjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBitwiseDisjunction(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BitwiseDisjunctionContext* EscriptParser::bitwiseDisjunction() {
  BitwiseDisjunctionContext *_localctx = _tracker.createInstance<BitwiseDisjunctionContext>(_ctx, getState());
  enterRule(_localctx, 194, EscriptParser::RuleBitwiseDisjunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1041);
    bitwiseXor();
    setState(1046);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::BITOR) {
      setState(1042);
      match(EscriptParser::BITOR);
      setState(1043);
      bitwiseXor();
      setState(1048);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitwiseXorContext ------------------------------------------------------------------

EscriptParser::BitwiseXorContext::BitwiseXorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::BitwiseConjunctionContext *> EscriptParser::BitwiseXorContext::bitwiseConjunction() {
  return getRuleContexts<EscriptParser::BitwiseConjunctionContext>();
}

EscriptParser::BitwiseConjunctionContext* EscriptParser::BitwiseXorContext::bitwiseConjunction(size_t i) {
  return getRuleContext<EscriptParser::BitwiseConjunctionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::BitwiseXorContext::CARET() {
  return getTokens(EscriptParser::CARET);
}

tree::TerminalNode* EscriptParser::BitwiseXorContext::CARET(size_t i) {
  return getToken(EscriptParser::CARET, i);
}


size_t EscriptParser::BitwiseXorContext::getRuleIndex() const {
  return EscriptParser::RuleBitwiseXor;
}

void EscriptParser::BitwiseXorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitwiseXor(this);
}

void EscriptParser::BitwiseXorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitwiseXor(this);
}


antlrcpp::Any EscriptParser::BitwiseXorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBitwiseXor(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BitwiseXorContext* EscriptParser::bitwiseXor() {
  BitwiseXorContext *_localctx = _tracker.createInstance<BitwiseXorContext>(_ctx, getState());
  enterRule(_localctx, 196, EscriptParser::RuleBitwiseXor);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1049);
    bitwiseConjunction();
    setState(1054);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::CARET) {
      setState(1050);
      match(EscriptParser::CARET);
      setState(1051);
      bitwiseConjunction();
      setState(1056);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitwiseConjunctionContext ------------------------------------------------------------------

EscriptParser::BitwiseConjunctionContext::BitwiseConjunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::BitshiftRightContext *> EscriptParser::BitwiseConjunctionContext::bitshiftRight() {
  return getRuleContexts<EscriptParser::BitshiftRightContext>();
}

EscriptParser::BitshiftRightContext* EscriptParser::BitwiseConjunctionContext::bitshiftRight(size_t i) {
  return getRuleContext<EscriptParser::BitshiftRightContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::BitwiseConjunctionContext::BITAND() {
  return getTokens(EscriptParser::BITAND);
}

tree::TerminalNode* EscriptParser::BitwiseConjunctionContext::BITAND(size_t i) {
  return getToken(EscriptParser::BITAND, i);
}


size_t EscriptParser::BitwiseConjunctionContext::getRuleIndex() const {
  return EscriptParser::RuleBitwiseConjunction;
}

void EscriptParser::BitwiseConjunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitwiseConjunction(this);
}

void EscriptParser::BitwiseConjunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitwiseConjunction(this);
}


antlrcpp::Any EscriptParser::BitwiseConjunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBitwiseConjunction(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BitwiseConjunctionContext* EscriptParser::bitwiseConjunction() {
  BitwiseConjunctionContext *_localctx = _tracker.createInstance<BitwiseConjunctionContext>(_ctx, getState());
  enterRule(_localctx, 198, EscriptParser::RuleBitwiseConjunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1057);
    bitshiftRight();
    setState(1062);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::BITAND) {
      setState(1058);
      match(EscriptParser::BITAND);
      setState(1059);
      bitshiftRight();
      setState(1064);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitshiftRightContext ------------------------------------------------------------------

EscriptParser::BitshiftRightContext::BitshiftRightContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::BitshiftLeftContext *> EscriptParser::BitshiftRightContext::bitshiftLeft() {
  return getRuleContexts<EscriptParser::BitshiftLeftContext>();
}

EscriptParser::BitshiftLeftContext* EscriptParser::BitshiftRightContext::bitshiftLeft(size_t i) {
  return getRuleContext<EscriptParser::BitshiftLeftContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::BitshiftRightContext::RSHIFT() {
  return getTokens(EscriptParser::RSHIFT);
}

tree::TerminalNode* EscriptParser::BitshiftRightContext::RSHIFT(size_t i) {
  return getToken(EscriptParser::RSHIFT, i);
}


size_t EscriptParser::BitshiftRightContext::getRuleIndex() const {
  return EscriptParser::RuleBitshiftRight;
}

void EscriptParser::BitshiftRightContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitshiftRight(this);
}

void EscriptParser::BitshiftRightContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitshiftRight(this);
}


antlrcpp::Any EscriptParser::BitshiftRightContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBitshiftRight(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BitshiftRightContext* EscriptParser::bitshiftRight() {
  BitshiftRightContext *_localctx = _tracker.createInstance<BitshiftRightContext>(_ctx, getState());
  enterRule(_localctx, 200, EscriptParser::RuleBitshiftRight);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1065);
    bitshiftLeft();
    setState(1070);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::RSHIFT) {
      setState(1066);
      match(EscriptParser::RSHIFT);
      setState(1067);
      bitshiftLeft();
      setState(1072);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitshiftLeftContext ------------------------------------------------------------------

EscriptParser::BitshiftLeftContext::BitshiftLeftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::ComparisonContext *> EscriptParser::BitshiftLeftContext::comparison() {
  return getRuleContexts<EscriptParser::ComparisonContext>();
}

EscriptParser::ComparisonContext* EscriptParser::BitshiftLeftContext::comparison(size_t i) {
  return getRuleContext<EscriptParser::ComparisonContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::BitshiftLeftContext::LSHIFT() {
  return getTokens(EscriptParser::LSHIFT);
}

tree::TerminalNode* EscriptParser::BitshiftLeftContext::LSHIFT(size_t i) {
  return getToken(EscriptParser::LSHIFT, i);
}


size_t EscriptParser::BitshiftLeftContext::getRuleIndex() const {
  return EscriptParser::RuleBitshiftLeft;
}

void EscriptParser::BitshiftLeftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitshiftLeft(this);
}

void EscriptParser::BitshiftLeftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitshiftLeft(this);
}


antlrcpp::Any EscriptParser::BitshiftLeftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBitshiftLeft(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BitshiftLeftContext* EscriptParser::bitshiftLeft() {
  BitshiftLeftContext *_localctx = _tracker.createInstance<BitshiftLeftContext>(_ctx, getState());
  enterRule(_localctx, 202, EscriptParser::RuleBitshiftLeft);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1073);
    comparison();
    setState(1078);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::LSHIFT) {
      setState(1074);
      match(EscriptParser::LSHIFT);
      setState(1075);
      comparison();
      setState(1080);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

EscriptParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::InfixOperationContext *> EscriptParser::ComparisonContext::infixOperation() {
  return getRuleContexts<EscriptParser::InfixOperationContext>();
}

EscriptParser::InfixOperationContext* EscriptParser::ComparisonContext::infixOperation(size_t i) {
  return getRuleContext<EscriptParser::InfixOperationContext>(i);
}

std::vector<EscriptParser::ComparisonOperatorContext *> EscriptParser::ComparisonContext::comparisonOperator() {
  return getRuleContexts<EscriptParser::ComparisonOperatorContext>();
}

EscriptParser::ComparisonOperatorContext* EscriptParser::ComparisonContext::comparisonOperator(size_t i) {
  return getRuleContext<EscriptParser::ComparisonOperatorContext>(i);
}


size_t EscriptParser::ComparisonContext::getRuleIndex() const {
  return EscriptParser::RuleComparison;
}

void EscriptParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}

void EscriptParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}


antlrcpp::Any EscriptParser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ComparisonContext* EscriptParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 204, EscriptParser::RuleComparison);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1081);
    infixOperation();
    setState(1087);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (EscriptParser::LE - 95))
      | (1ULL << (EscriptParser::LT - 95))
      | (1ULL << (EscriptParser::GE - 95))
      | (1ULL << (EscriptParser::GT - 95)))) != 0)) {
      setState(1082);
      comparisonOperator();
      setState(1083);
      infixOperation();
      setState(1089);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

EscriptParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ComparisonOperatorContext::LE() {
  return getToken(EscriptParser::LE, 0);
}

tree::TerminalNode* EscriptParser::ComparisonOperatorContext::LT() {
  return getToken(EscriptParser::LT, 0);
}

tree::TerminalNode* EscriptParser::ComparisonOperatorContext::GE() {
  return getToken(EscriptParser::GE, 0);
}

tree::TerminalNode* EscriptParser::ComparisonOperatorContext::GT() {
  return getToken(EscriptParser::GT, 0);
}


size_t EscriptParser::ComparisonOperatorContext::getRuleIndex() const {
  return EscriptParser::RuleComparisonOperator;
}

void EscriptParser::ComparisonOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOperator(this);
}

void EscriptParser::ComparisonOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOperator(this);
}


antlrcpp::Any EscriptParser::ComparisonOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitComparisonOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ComparisonOperatorContext* EscriptParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 206, EscriptParser::RuleComparisonOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1090);
    _la = _input->LA(1);
    if (!(((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (EscriptParser::LE - 95))
      | (1ULL << (EscriptParser::LT - 95))
      | (1ULL << (EscriptParser::GE - 95))
      | (1ULL << (EscriptParser::GT - 95)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InfixOperationContext ------------------------------------------------------------------

EscriptParser::InfixOperationContext::InfixOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::ElvisExpressionContext *> EscriptParser::InfixOperationContext::elvisExpression() {
  return getRuleContexts<EscriptParser::ElvisExpressionContext>();
}

EscriptParser::ElvisExpressionContext* EscriptParser::InfixOperationContext::elvisExpression(size_t i) {
  return getRuleContext<EscriptParser::ElvisExpressionContext>(i);
}

std::vector<EscriptParser::InfixOperatorContext *> EscriptParser::InfixOperationContext::infixOperator() {
  return getRuleContexts<EscriptParser::InfixOperatorContext>();
}

EscriptParser::InfixOperatorContext* EscriptParser::InfixOperationContext::infixOperator(size_t i) {
  return getRuleContext<EscriptParser::InfixOperatorContext>(i);
}


size_t EscriptParser::InfixOperationContext::getRuleIndex() const {
  return EscriptParser::RuleInfixOperation;
}

void EscriptParser::InfixOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfixOperation(this);
}

void EscriptParser::InfixOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfixOperation(this);
}


antlrcpp::Any EscriptParser::InfixOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitInfixOperation(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::InfixOperationContext* EscriptParser::infixOperation() {
  InfixOperationContext *_localctx = _tracker.createInstance<InfixOperationContext>(_ctx, getState());
  enterRule(_localctx, 208, EscriptParser::RuleInfixOperation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1092);
    elvisExpression();
    setState(1098);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::TOK_IN) {
      setState(1093);
      infixOperator();
      setState(1094);
      elvisExpression();
      setState(1100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InfixOperatorContext ------------------------------------------------------------------

EscriptParser::InfixOperatorContext::InfixOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::InfixOperatorContext::TOK_IN() {
  return getToken(EscriptParser::TOK_IN, 0);
}


size_t EscriptParser::InfixOperatorContext::getRuleIndex() const {
  return EscriptParser::RuleInfixOperator;
}

void EscriptParser::InfixOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfixOperator(this);
}

void EscriptParser::InfixOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfixOperator(this);
}


antlrcpp::Any EscriptParser::InfixOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitInfixOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::InfixOperatorContext* EscriptParser::infixOperator() {
  InfixOperatorContext *_localctx = _tracker.createInstance<InfixOperatorContext>(_ctx, getState());
  enterRule(_localctx, 210, EscriptParser::RuleInfixOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1101);
    match(EscriptParser::TOK_IN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElvisExpressionContext ------------------------------------------------------------------

EscriptParser::ElvisExpressionContext::ElvisExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::AdditiveExpressionContext *> EscriptParser::ElvisExpressionContext::additiveExpression() {
  return getRuleContexts<EscriptParser::AdditiveExpressionContext>();
}

EscriptParser::AdditiveExpressionContext* EscriptParser::ElvisExpressionContext::additiveExpression(size_t i) {
  return getRuleContext<EscriptParser::AdditiveExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::ElvisExpressionContext::ELVIS() {
  return getTokens(EscriptParser::ELVIS);
}

tree::TerminalNode* EscriptParser::ElvisExpressionContext::ELVIS(size_t i) {
  return getToken(EscriptParser::ELVIS, i);
}


size_t EscriptParser::ElvisExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleElvisExpression;
}

void EscriptParser::ElvisExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElvisExpression(this);
}

void EscriptParser::ElvisExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElvisExpression(this);
}


antlrcpp::Any EscriptParser::ElvisExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitElvisExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ElvisExpressionContext* EscriptParser::elvisExpression() {
  ElvisExpressionContext *_localctx = _tracker.createInstance<ElvisExpressionContext>(_ctx, getState());
  enterRule(_localctx, 212, EscriptParser::RuleElvisExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1103);
    additiveExpression();
    setState(1108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::ELVIS) {
      setState(1104);
      match(EscriptParser::ELVIS);
      setState(1105);
      additiveExpression();
      setState(1110);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

EscriptParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::MultiplicativeExpressionContext *> EscriptParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContexts<EscriptParser::MultiplicativeExpressionContext>();
}

EscriptParser::MultiplicativeExpressionContext* EscriptParser::AdditiveExpressionContext::multiplicativeExpression(size_t i) {
  return getRuleContext<EscriptParser::MultiplicativeExpressionContext>(i);
}

std::vector<EscriptParser::AdditiveOperatorContext *> EscriptParser::AdditiveExpressionContext::additiveOperator() {
  return getRuleContexts<EscriptParser::AdditiveOperatorContext>();
}

EscriptParser::AdditiveOperatorContext* EscriptParser::AdditiveExpressionContext::additiveOperator(size_t i) {
  return getRuleContext<EscriptParser::AdditiveOperatorContext>(i);
}


size_t EscriptParser::AdditiveExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleAdditiveExpression;
}

void EscriptParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void EscriptParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


antlrcpp::Any EscriptParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::AdditiveExpressionContext* EscriptParser::additiveExpression() {
  AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, getState());
  enterRule(_localctx, 214, EscriptParser::RuleAdditiveExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1111);
    multiplicativeExpression();
    setState(1117);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1112);
        additiveOperator();
        setState(1113);
        multiplicativeExpression(); 
      }
      setState(1119);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveOperatorContext ------------------------------------------------------------------

EscriptParser::AdditiveOperatorContext::AdditiveOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::AdditiveOperatorContext::ADD() {
  return getToken(EscriptParser::ADD, 0);
}

tree::TerminalNode* EscriptParser::AdditiveOperatorContext::SUB() {
  return getToken(EscriptParser::SUB, 0);
}


size_t EscriptParser::AdditiveOperatorContext::getRuleIndex() const {
  return EscriptParser::RuleAdditiveOperator;
}

void EscriptParser::AdditiveOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveOperator(this);
}

void EscriptParser::AdditiveOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveOperator(this);
}


antlrcpp::Any EscriptParser::AdditiveOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitAdditiveOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::AdditiveOperatorContext* EscriptParser::additiveOperator() {
  AdditiveOperatorContext *_localctx = _tracker.createInstance<AdditiveOperatorContext>(_ctx, getState());
  enterRule(_localctx, 216, EscriptParser::RuleAdditiveOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1120);
    _la = _input->LA(1);
    if (!(_la == EscriptParser::ADD

    || _la == EscriptParser::SUB)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

EscriptParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::PrefixUnaryInversionExpressionContext *> EscriptParser::MultiplicativeExpressionContext::prefixUnaryInversionExpression() {
  return getRuleContexts<EscriptParser::PrefixUnaryInversionExpressionContext>();
}

EscriptParser::PrefixUnaryInversionExpressionContext* EscriptParser::MultiplicativeExpressionContext::prefixUnaryInversionExpression(size_t i) {
  return getRuleContext<EscriptParser::PrefixUnaryInversionExpressionContext>(i);
}

std::vector<EscriptParser::MultiplicativeOperatorContext *> EscriptParser::MultiplicativeExpressionContext::multiplicativeOperator() {
  return getRuleContexts<EscriptParser::MultiplicativeOperatorContext>();
}

EscriptParser::MultiplicativeOperatorContext* EscriptParser::MultiplicativeExpressionContext::multiplicativeOperator(size_t i) {
  return getRuleContext<EscriptParser::MultiplicativeOperatorContext>(i);
}


size_t EscriptParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleMultiplicativeExpression;
}

void EscriptParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void EscriptParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


antlrcpp::Any EscriptParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MultiplicativeExpressionContext* EscriptParser::multiplicativeExpression() {
  MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 218, EscriptParser::RuleMultiplicativeExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1122);
    prefixUnaryInversionExpression();
    setState(1128);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (EscriptParser::MUL - 85))
      | (1ULL << (EscriptParser::DIV - 85))
      | (1ULL << (EscriptParser::MOD - 85)))) != 0)) {
      setState(1123);
      multiplicativeOperator();
      setState(1124);
      prefixUnaryInversionExpression();
      setState(1130);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeOperatorContext ------------------------------------------------------------------

EscriptParser::MultiplicativeOperatorContext::MultiplicativeOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::MultiplicativeOperatorContext::MUL() {
  return getToken(EscriptParser::MUL, 0);
}

tree::TerminalNode* EscriptParser::MultiplicativeOperatorContext::DIV() {
  return getToken(EscriptParser::DIV, 0);
}

tree::TerminalNode* EscriptParser::MultiplicativeOperatorContext::MOD() {
  return getToken(EscriptParser::MOD, 0);
}


size_t EscriptParser::MultiplicativeOperatorContext::getRuleIndex() const {
  return EscriptParser::RuleMultiplicativeOperator;
}

void EscriptParser::MultiplicativeOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeOperator(this);
}

void EscriptParser::MultiplicativeOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeOperator(this);
}


antlrcpp::Any EscriptParser::MultiplicativeOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MultiplicativeOperatorContext* EscriptParser::multiplicativeOperator() {
  MultiplicativeOperatorContext *_localctx = _tracker.createInstance<MultiplicativeOperatorContext>(_ctx, getState());
  enterRule(_localctx, 220, EscriptParser::RuleMultiplicativeOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1131);
    _la = _input->LA(1);
    if (!(((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (EscriptParser::MUL - 85))
      | (1ULL << (EscriptParser::DIV - 85))
      | (1ULL << (EscriptParser::MOD - 85)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixUnaryInversionExpressionContext ------------------------------------------------------------------

EscriptParser::PrefixUnaryInversionExpressionContext::PrefixUnaryInversionExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::PrefixUnaryArithmeticExpressionContext* EscriptParser::PrefixUnaryInversionExpressionContext::prefixUnaryArithmeticExpression() {
  return getRuleContext<EscriptParser::PrefixUnaryArithmeticExpressionContext>(0);
}

std::vector<EscriptParser::PrefixUnaryInversionOperatorContext *> EscriptParser::PrefixUnaryInversionExpressionContext::prefixUnaryInversionOperator() {
  return getRuleContexts<EscriptParser::PrefixUnaryInversionOperatorContext>();
}

EscriptParser::PrefixUnaryInversionOperatorContext* EscriptParser::PrefixUnaryInversionExpressionContext::prefixUnaryInversionOperator(size_t i) {
  return getRuleContext<EscriptParser::PrefixUnaryInversionOperatorContext>(i);
}


size_t EscriptParser::PrefixUnaryInversionExpressionContext::getRuleIndex() const {
  return EscriptParser::RulePrefixUnaryInversionExpression;
}

void EscriptParser::PrefixUnaryInversionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixUnaryInversionExpression(this);
}

void EscriptParser::PrefixUnaryInversionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixUnaryInversionExpression(this);
}


antlrcpp::Any EscriptParser::PrefixUnaryInversionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitPrefixUnaryInversionExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::PrefixUnaryInversionExpressionContext* EscriptParser::prefixUnaryInversionExpression() {
  PrefixUnaryInversionExpressionContext *_localctx = _tracker.createInstance<PrefixUnaryInversionExpressionContext>(_ctx, getState());
  enterRule(_localctx, 222, EscriptParser::RulePrefixUnaryInversionExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 57) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 57)) & ((1ULL << (EscriptParser::BANG_A - 57))
      | (1ULL << (EscriptParser::BANG_B - 57))
      | (1ULL << (EscriptParser::TILDE - 57)))) != 0)) {
      setState(1133);
      prefixUnaryInversionOperator();
      setState(1138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1139);
    prefixUnaryArithmeticExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixUnaryInversionOperatorContext ------------------------------------------------------------------

EscriptParser::PrefixUnaryInversionOperatorContext::PrefixUnaryInversionOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::PrefixUnaryInversionOperatorContext::TILDE() {
  return getToken(EscriptParser::TILDE, 0);
}

tree::TerminalNode* EscriptParser::PrefixUnaryInversionOperatorContext::BANG_A() {
  return getToken(EscriptParser::BANG_A, 0);
}

tree::TerminalNode* EscriptParser::PrefixUnaryInversionOperatorContext::BANG_B() {
  return getToken(EscriptParser::BANG_B, 0);
}


size_t EscriptParser::PrefixUnaryInversionOperatorContext::getRuleIndex() const {
  return EscriptParser::RulePrefixUnaryInversionOperator;
}

void EscriptParser::PrefixUnaryInversionOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixUnaryInversionOperator(this);
}

void EscriptParser::PrefixUnaryInversionOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixUnaryInversionOperator(this);
}


antlrcpp::Any EscriptParser::PrefixUnaryInversionOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitPrefixUnaryInversionOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::PrefixUnaryInversionOperatorContext* EscriptParser::prefixUnaryInversionOperator() {
  PrefixUnaryInversionOperatorContext *_localctx = _tracker.createInstance<PrefixUnaryInversionOperatorContext>(_ctx, getState());
  enterRule(_localctx, 224, EscriptParser::RulePrefixUnaryInversionOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1141);
    _la = _input->LA(1);
    if (!(((((_la - 57) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 57)) & ((1ULL << (EscriptParser::BANG_A - 57))
      | (1ULL << (EscriptParser::BANG_B - 57))
      | (1ULL << (EscriptParser::TILDE - 57)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixUnaryArithmeticExpressionContext ------------------------------------------------------------------

EscriptParser::PrefixUnaryArithmeticExpressionContext::PrefixUnaryArithmeticExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::PostfixUnaryExpressionContext* EscriptParser::PrefixUnaryArithmeticExpressionContext::postfixUnaryExpression() {
  return getRuleContext<EscriptParser::PostfixUnaryExpressionContext>(0);
}

std::vector<EscriptParser::PrefixUnaryArithmeticOperatorContext *> EscriptParser::PrefixUnaryArithmeticExpressionContext::prefixUnaryArithmeticOperator() {
  return getRuleContexts<EscriptParser::PrefixUnaryArithmeticOperatorContext>();
}

EscriptParser::PrefixUnaryArithmeticOperatorContext* EscriptParser::PrefixUnaryArithmeticExpressionContext::prefixUnaryArithmeticOperator(size_t i) {
  return getRuleContext<EscriptParser::PrefixUnaryArithmeticOperatorContext>(i);
}


size_t EscriptParser::PrefixUnaryArithmeticExpressionContext::getRuleIndex() const {
  return EscriptParser::RulePrefixUnaryArithmeticExpression;
}

void EscriptParser::PrefixUnaryArithmeticExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixUnaryArithmeticExpression(this);
}

void EscriptParser::PrefixUnaryArithmeticExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixUnaryArithmeticExpression(this);
}


antlrcpp::Any EscriptParser::PrefixUnaryArithmeticExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitPrefixUnaryArithmeticExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::PrefixUnaryArithmeticExpressionContext* EscriptParser::prefixUnaryArithmeticExpression() {
  PrefixUnaryArithmeticExpressionContext *_localctx = _tracker.createInstance<PrefixUnaryArithmeticExpressionContext>(_ctx, getState());
  enterRule(_localctx, 226, EscriptParser::RulePrefixUnaryArithmeticExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 88) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 88)) & ((1ULL << (EscriptParser::ADD - 88))
      | (1ULL << (EscriptParser::SUB - 88))
      | (1ULL << (EscriptParser::INC - 88))
      | (1ULL << (EscriptParser::DEC - 88)))) != 0)) {
      setState(1143);
      prefixUnaryArithmeticOperator();
      setState(1148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1149);
    postfixUnaryExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixUnaryArithmeticOperatorContext ------------------------------------------------------------------

EscriptParser::PrefixUnaryArithmeticOperatorContext::PrefixUnaryArithmeticOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::PrefixUnaryArithmeticOperatorContext::INC() {
  return getToken(EscriptParser::INC, 0);
}

tree::TerminalNode* EscriptParser::PrefixUnaryArithmeticOperatorContext::DEC() {
  return getToken(EscriptParser::DEC, 0);
}

tree::TerminalNode* EscriptParser::PrefixUnaryArithmeticOperatorContext::ADD() {
  return getToken(EscriptParser::ADD, 0);
}

tree::TerminalNode* EscriptParser::PrefixUnaryArithmeticOperatorContext::SUB() {
  return getToken(EscriptParser::SUB, 0);
}


size_t EscriptParser::PrefixUnaryArithmeticOperatorContext::getRuleIndex() const {
  return EscriptParser::RulePrefixUnaryArithmeticOperator;
}

void EscriptParser::PrefixUnaryArithmeticOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixUnaryArithmeticOperator(this);
}

void EscriptParser::PrefixUnaryArithmeticOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixUnaryArithmeticOperator(this);
}


antlrcpp::Any EscriptParser::PrefixUnaryArithmeticOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitPrefixUnaryArithmeticOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::PrefixUnaryArithmeticOperatorContext* EscriptParser::prefixUnaryArithmeticOperator() {
  PrefixUnaryArithmeticOperatorContext *_localctx = _tracker.createInstance<PrefixUnaryArithmeticOperatorContext>(_ctx, getState());
  enterRule(_localctx, 228, EscriptParser::RulePrefixUnaryArithmeticOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1151);
    _la = _input->LA(1);
    if (!(((((_la - 88) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 88)) & ((1ULL << (EscriptParser::ADD - 88))
      | (1ULL << (EscriptParser::SUB - 88))
      | (1ULL << (EscriptParser::INC - 88))
      | (1ULL << (EscriptParser::DEC - 88)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixUnaryExpressionContext ------------------------------------------------------------------

EscriptParser::PostfixUnaryExpressionContext::PostfixUnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::AtomicExpressionContext* EscriptParser::PostfixUnaryExpressionContext::atomicExpression() {
  return getRuleContext<EscriptParser::AtomicExpressionContext>(0);
}

std::vector<EscriptParser::PostfixUnaryOperatorContext *> EscriptParser::PostfixUnaryExpressionContext::postfixUnaryOperator() {
  return getRuleContexts<EscriptParser::PostfixUnaryOperatorContext>();
}

EscriptParser::PostfixUnaryOperatorContext* EscriptParser::PostfixUnaryExpressionContext::postfixUnaryOperator(size_t i) {
  return getRuleContext<EscriptParser::PostfixUnaryOperatorContext>(i);
}


size_t EscriptParser::PostfixUnaryExpressionContext::getRuleIndex() const {
  return EscriptParser::RulePostfixUnaryExpression;
}

void EscriptParser::PostfixUnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixUnaryExpression(this);
}

void EscriptParser::PostfixUnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixUnaryExpression(this);
}


antlrcpp::Any EscriptParser::PostfixUnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitPostfixUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::PostfixUnaryExpressionContext* EscriptParser::postfixUnaryExpression() {
  PostfixUnaryExpressionContext *_localctx = _tracker.createInstance<PostfixUnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 230, EscriptParser::RulePostfixUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1153);
    atomicExpression();
    setState(1157);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1154);
        postfixUnaryOperator(); 
      }
      setState(1159);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixUnaryOperatorContext ------------------------------------------------------------------

EscriptParser::PostfixUnaryOperatorContext::PostfixUnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::PostfixUnaryOperatorContext::INC() {
  return getToken(EscriptParser::INC, 0);
}

tree::TerminalNode* EscriptParser::PostfixUnaryOperatorContext::DEC() {
  return getToken(EscriptParser::DEC, 0);
}

EscriptParser::IndexingSuffixContext* EscriptParser::PostfixUnaryOperatorContext::indexingSuffix() {
  return getRuleContext<EscriptParser::IndexingSuffixContext>(0);
}

EscriptParser::NavigationSuffixContext* EscriptParser::PostfixUnaryOperatorContext::navigationSuffix() {
  return getRuleContext<EscriptParser::NavigationSuffixContext>(0);
}

EscriptParser::MemberCallSuffixContext* EscriptParser::PostfixUnaryOperatorContext::memberCallSuffix() {
  return getRuleContext<EscriptParser::MemberCallSuffixContext>(0);
}


size_t EscriptParser::PostfixUnaryOperatorContext::getRuleIndex() const {
  return EscriptParser::RulePostfixUnaryOperator;
}

void EscriptParser::PostfixUnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixUnaryOperator(this);
}

void EscriptParser::PostfixUnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixUnaryOperator(this);
}


antlrcpp::Any EscriptParser::PostfixUnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitPostfixUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::PostfixUnaryOperatorContext* EscriptParser::postfixUnaryOperator() {
  PostfixUnaryOperatorContext *_localctx = _tracker.createInstance<PostfixUnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 232, EscriptParser::RulePostfixUnaryOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1160);
      match(EscriptParser::INC);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1161);
      match(EscriptParser::DEC);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1162);
      indexingSuffix();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1163);
      navigationSuffix();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1164);
      memberCallSuffix();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexingSuffixContext ------------------------------------------------------------------

EscriptParser::IndexingSuffixContext::IndexingSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::IndexingSuffixContext::LBRACK() {
  return getToken(EscriptParser::LBRACK, 0);
}

EscriptParser::UnambiguousExpressionListContext* EscriptParser::IndexingSuffixContext::unambiguousExpressionList() {
  return getRuleContext<EscriptParser::UnambiguousExpressionListContext>(0);
}

tree::TerminalNode* EscriptParser::IndexingSuffixContext::RBRACK() {
  return getToken(EscriptParser::RBRACK, 0);
}


size_t EscriptParser::IndexingSuffixContext::getRuleIndex() const {
  return EscriptParser::RuleIndexingSuffix;
}

void EscriptParser::IndexingSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexingSuffix(this);
}

void EscriptParser::IndexingSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexingSuffix(this);
}


antlrcpp::Any EscriptParser::IndexingSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitIndexingSuffix(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::IndexingSuffixContext* EscriptParser::indexingSuffix() {
  IndexingSuffixContext *_localctx = _tracker.createInstance<IndexingSuffixContext>(_ctx, getState());
  enterRule(_localctx, 234, EscriptParser::RuleIndexingSuffix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1167);
    match(EscriptParser::LBRACK);
    setState(1168);
    unambiguousExpressionList();
    setState(1169);
    match(EscriptParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NavigationSuffixContext ------------------------------------------------------------------

EscriptParser::NavigationSuffixContext::NavigationSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::MemberAccessOperatorContext* EscriptParser::NavigationSuffixContext::memberAccessOperator() {
  return getRuleContext<EscriptParser::MemberAccessOperatorContext>(0);
}

tree::TerminalNode* EscriptParser::NavigationSuffixContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::NavigationSuffixContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}


size_t EscriptParser::NavigationSuffixContext::getRuleIndex() const {
  return EscriptParser::RuleNavigationSuffix;
}

void EscriptParser::NavigationSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNavigationSuffix(this);
}

void EscriptParser::NavigationSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNavigationSuffix(this);
}


antlrcpp::Any EscriptParser::NavigationSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitNavigationSuffix(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::NavigationSuffixContext* EscriptParser::navigationSuffix() {
  NavigationSuffixContext *_localctx = _tracker.createInstance<NavigationSuffixContext>(_ctx, getState());
  enterRule(_localctx, 236, EscriptParser::RuleNavigationSuffix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1171);
    memberAccessOperator();
    setState(1172);
    _la = _input->LA(1);
    if (!(_la == EscriptParser::STRING_LITERAL

    || _la == EscriptParser::IDENTIFIER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MembershipSuffixContext ------------------------------------------------------------------

EscriptParser::MembershipSuffixContext::MembershipSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::MembershipOperatorContext* EscriptParser::MembershipSuffixContext::membershipOperator() {
  return getRuleContext<EscriptParser::MembershipOperatorContext>(0);
}

tree::TerminalNode* EscriptParser::MembershipSuffixContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::MembershipSuffixContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::MembershipSuffixContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}


size_t EscriptParser::MembershipSuffixContext::getRuleIndex() const {
  return EscriptParser::RuleMembershipSuffix;
}

void EscriptParser::MembershipSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMembershipSuffix(this);
}

void EscriptParser::MembershipSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMembershipSuffix(this);
}


antlrcpp::Any EscriptParser::MembershipSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMembershipSuffix(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MembershipSuffixContext* EscriptParser::membershipSuffix() {
  MembershipSuffixContext *_localctx = _tracker.createInstance<MembershipSuffixContext>(_ctx, getState());
  enterRule(_localctx, 238, EscriptParser::RuleMembershipSuffix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1174);
    membershipOperator();
    setState(1178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
    case 1: {
      setState(1175);
      match(EscriptParser::IDENTIFIER);
      break;
    }

    case 2: {
      setState(1176);
      match(EscriptParser::STRING_LITERAL);
      break;
    }

    case 3: {
      setState(1177);
      unambiguousExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberCallSuffixContext ------------------------------------------------------------------

EscriptParser::MemberCallSuffixContext::MemberCallSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::MemberAccessOperatorContext* EscriptParser::MemberCallSuffixContext::memberAccessOperator() {
  return getRuleContext<EscriptParser::MemberAccessOperatorContext>(0);
}

tree::TerminalNode* EscriptParser::MemberCallSuffixContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::MemberCallSuffixContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::MemberCallSuffixContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::UnambiguousExpressionListContext* EscriptParser::MemberCallSuffixContext::unambiguousExpressionList() {
  return getRuleContext<EscriptParser::UnambiguousExpressionListContext>(0);
}


size_t EscriptParser::MemberCallSuffixContext::getRuleIndex() const {
  return EscriptParser::RuleMemberCallSuffix;
}

void EscriptParser::MemberCallSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberCallSuffix(this);
}

void EscriptParser::MemberCallSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberCallSuffix(this);
}


antlrcpp::Any EscriptParser::MemberCallSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMemberCallSuffix(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MemberCallSuffixContext* EscriptParser::memberCallSuffix() {
  MemberCallSuffixContext *_localctx = _tracker.createInstance<MemberCallSuffixContext>(_ctx, getState());
  enterRule(_localctx, 240, EscriptParser::RuleMemberCallSuffix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1180);
    memberAccessOperator();
    setState(1181);
    match(EscriptParser::IDENTIFIER);
    setState(1182);
    match(EscriptParser::LPAREN);
    setState(1184);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::TOK_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(1183);
      unambiguousExpressionList();
    }
    setState(1186);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberAccessOperatorContext ------------------------------------------------------------------

EscriptParser::MemberAccessOperatorContext::MemberAccessOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::MemberAccessOperatorContext::DOT() {
  return getToken(EscriptParser::DOT, 0);
}


size_t EscriptParser::MemberAccessOperatorContext::getRuleIndex() const {
  return EscriptParser::RuleMemberAccessOperator;
}

void EscriptParser::MemberAccessOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccessOperator(this);
}

void EscriptParser::MemberAccessOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccessOperator(this);
}


antlrcpp::Any EscriptParser::MemberAccessOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMemberAccessOperator(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MemberAccessOperatorContext* EscriptParser::memberAccessOperator() {
  MemberAccessOperatorContext *_localctx = _tracker.createInstance<MemberAccessOperatorContext>(_ctx, getState());
  enterRule(_localctx, 242, EscriptParser::RuleMemberAccessOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1188);
    match(EscriptParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallSuffixContext ------------------------------------------------------------------

EscriptParser::CallSuffixContext::CallSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::ValueArgumentsContext* EscriptParser::CallSuffixContext::valueArguments() {
  return getRuleContext<EscriptParser::ValueArgumentsContext>(0);
}


size_t EscriptParser::CallSuffixContext::getRuleIndex() const {
  return EscriptParser::RuleCallSuffix;
}

void EscriptParser::CallSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallSuffix(this);
}

void EscriptParser::CallSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallSuffix(this);
}


antlrcpp::Any EscriptParser::CallSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitCallSuffix(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::CallSuffixContext* EscriptParser::callSuffix() {
  CallSuffixContext *_localctx = _tracker.createInstance<CallSuffixContext>(_ctx, getState());
  enterRule(_localctx, 244, EscriptParser::RuleCallSuffix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1190);
    valueArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomicExpressionContext ------------------------------------------------------------------

EscriptParser::AtomicExpressionContext::AtomicExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::LiteralContext* EscriptParser::AtomicExpressionContext::literal() {
  return getRuleContext<EscriptParser::LiteralContext>(0);
}

EscriptParser::ParenthesizedExpressionContext* EscriptParser::AtomicExpressionContext::parenthesizedExpression() {
  return getRuleContext<EscriptParser::ParenthesizedExpressionContext>(0);
}

EscriptParser::UnambiguousFunctionCallContext* EscriptParser::AtomicExpressionContext::unambiguousFunctionCall() {
  return getRuleContext<EscriptParser::UnambiguousFunctionCallContext>(0);
}

tree::TerminalNode* EscriptParser::AtomicExpressionContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::FunctionReferenceContext* EscriptParser::AtomicExpressionContext::functionReference() {
  return getRuleContext<EscriptParser::FunctionReferenceContext>(0);
}

EscriptParser::UnambiguousScopedFunctionCallContext* EscriptParser::AtomicExpressionContext::unambiguousScopedFunctionCall() {
  return getRuleContext<EscriptParser::UnambiguousScopedFunctionCallContext>(0);
}

EscriptParser::UnambiguousExplicitArrayInitializerContext* EscriptParser::AtomicExpressionContext::unambiguousExplicitArrayInitializer() {
  return getRuleContext<EscriptParser::UnambiguousExplicitArrayInitializerContext>(0);
}

EscriptParser::UnambiguousExplicitStructInitializerContext* EscriptParser::AtomicExpressionContext::unambiguousExplicitStructInitializer() {
  return getRuleContext<EscriptParser::UnambiguousExplicitStructInitializerContext>(0);
}

EscriptParser::UnambiguousExplicitDictInitializerContext* EscriptParser::AtomicExpressionContext::unambiguousExplicitDictInitializer() {
  return getRuleContext<EscriptParser::UnambiguousExplicitDictInitializerContext>(0);
}

EscriptParser::UnambiguousExplicitErrorInitializerContext* EscriptParser::AtomicExpressionContext::unambiguousExplicitErrorInitializer() {
  return getRuleContext<EscriptParser::UnambiguousExplicitErrorInitializerContext>(0);
}

EscriptParser::UnambiguousBareArrayInitializerContext* EscriptParser::AtomicExpressionContext::unambiguousBareArrayInitializer() {
  return getRuleContext<EscriptParser::UnambiguousBareArrayInitializerContext>(0);
}


size_t EscriptParser::AtomicExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleAtomicExpression;
}

void EscriptParser::AtomicExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomicExpression(this);
}

void EscriptParser::AtomicExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomicExpression(this);
}


antlrcpp::Any EscriptParser::AtomicExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitAtomicExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::AtomicExpressionContext* EscriptParser::atomicExpression() {
  AtomicExpressionContext *_localctx = _tracker.createInstance<AtomicExpressionContext>(_ctx, getState());
  enterRule(_localctx, 246, EscriptParser::RuleAtomicExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1203);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1192);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1193);
      parenthesizedExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1194);
      unambiguousFunctionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1195);
      match(EscriptParser::IDENTIFIER);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1196);
      functionReference();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1197);
      unambiguousScopedFunctionCall();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1198);
      unambiguousExplicitArrayInitializer();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1199);
      unambiguousExplicitStructInitializer();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1200);
      unambiguousExplicitDictInitializer();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1201);
      unambiguousExplicitErrorInitializer();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1202);
      unambiguousBareArrayInitializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionReferenceContext ------------------------------------------------------------------

EscriptParser::FunctionReferenceContext::FunctionReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::FunctionReferenceContext::AT() {
  return getToken(EscriptParser::AT, 0);
}

tree::TerminalNode* EscriptParser::FunctionReferenceContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}


size_t EscriptParser::FunctionReferenceContext::getRuleIndex() const {
  return EscriptParser::RuleFunctionReference;
}

void EscriptParser::FunctionReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionReference(this);
}

void EscriptParser::FunctionReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionReference(this);
}


antlrcpp::Any EscriptParser::FunctionReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionReference(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FunctionReferenceContext* EscriptParser::functionReference() {
  FunctionReferenceContext *_localctx = _tracker.createInstance<FunctionReferenceContext>(_ctx, getState());
  enterRule(_localctx, 248, EscriptParser::RuleFunctionReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1205);
    match(EscriptParser::AT);
    setState(1206);
    match(EscriptParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousExplicitArrayInitializerContext ------------------------------------------------------------------

EscriptParser::UnambiguousExplicitArrayInitializerContext::UnambiguousExplicitArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousExplicitArrayInitializerContext::ARRAY() {
  return getToken(EscriptParser::ARRAY, 0);
}

EscriptParser::UnambiguousArrayInitializerContext* EscriptParser::UnambiguousExplicitArrayInitializerContext::unambiguousArrayInitializer() {
  return getRuleContext<EscriptParser::UnambiguousArrayInitializerContext>(0);
}


size_t EscriptParser::UnambiguousExplicitArrayInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousExplicitArrayInitializer;
}

void EscriptParser::UnambiguousExplicitArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousExplicitArrayInitializer(this);
}

void EscriptParser::UnambiguousExplicitArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousExplicitArrayInitializer(this);
}


antlrcpp::Any EscriptParser::UnambiguousExplicitArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousExplicitArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousExplicitArrayInitializerContext* EscriptParser::unambiguousExplicitArrayInitializer() {
  UnambiguousExplicitArrayInitializerContext *_localctx = _tracker.createInstance<UnambiguousExplicitArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 250, EscriptParser::RuleUnambiguousExplicitArrayInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1208);
    match(EscriptParser::ARRAY);
    setState(1210);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      setState(1209);
      unambiguousArrayInitializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousExplicitStructInitializerContext ------------------------------------------------------------------

EscriptParser::UnambiguousExplicitStructInitializerContext::UnambiguousExplicitStructInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousExplicitStructInitializerContext::STRUCT() {
  return getToken(EscriptParser::STRUCT, 0);
}

EscriptParser::UnambiguousStructInitializerContext* EscriptParser::UnambiguousExplicitStructInitializerContext::unambiguousStructInitializer() {
  return getRuleContext<EscriptParser::UnambiguousStructInitializerContext>(0);
}


size_t EscriptParser::UnambiguousExplicitStructInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousExplicitStructInitializer;
}

void EscriptParser::UnambiguousExplicitStructInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousExplicitStructInitializer(this);
}

void EscriptParser::UnambiguousExplicitStructInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousExplicitStructInitializer(this);
}


antlrcpp::Any EscriptParser::UnambiguousExplicitStructInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousExplicitStructInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousExplicitStructInitializerContext* EscriptParser::unambiguousExplicitStructInitializer() {
  UnambiguousExplicitStructInitializerContext *_localctx = _tracker.createInstance<UnambiguousExplicitStructInitializerContext>(_ctx, getState());
  enterRule(_localctx, 252, EscriptParser::RuleUnambiguousExplicitStructInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1212);
    match(EscriptParser::STRUCT);
    setState(1214);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
    case 1: {
      setState(1213);
      unambiguousStructInitializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousExplicitDictInitializerContext ------------------------------------------------------------------

EscriptParser::UnambiguousExplicitDictInitializerContext::UnambiguousExplicitDictInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousExplicitDictInitializerContext::DICTIONARY() {
  return getToken(EscriptParser::DICTIONARY, 0);
}

EscriptParser::UnambiguousDictInitializerContext* EscriptParser::UnambiguousExplicitDictInitializerContext::unambiguousDictInitializer() {
  return getRuleContext<EscriptParser::UnambiguousDictInitializerContext>(0);
}


size_t EscriptParser::UnambiguousExplicitDictInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousExplicitDictInitializer;
}

void EscriptParser::UnambiguousExplicitDictInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousExplicitDictInitializer(this);
}

void EscriptParser::UnambiguousExplicitDictInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousExplicitDictInitializer(this);
}


antlrcpp::Any EscriptParser::UnambiguousExplicitDictInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousExplicitDictInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousExplicitDictInitializerContext* EscriptParser::unambiguousExplicitDictInitializer() {
  UnambiguousExplicitDictInitializerContext *_localctx = _tracker.createInstance<UnambiguousExplicitDictInitializerContext>(_ctx, getState());
  enterRule(_localctx, 254, EscriptParser::RuleUnambiguousExplicitDictInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1216);
    match(EscriptParser::DICTIONARY);
    setState(1218);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      setState(1217);
      unambiguousDictInitializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousExplicitErrorInitializerContext ------------------------------------------------------------------

EscriptParser::UnambiguousExplicitErrorInitializerContext::UnambiguousExplicitErrorInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousExplicitErrorInitializerContext::TOK_ERROR() {
  return getToken(EscriptParser::TOK_ERROR, 0);
}

EscriptParser::UnambiguousStructInitializerContext* EscriptParser::UnambiguousExplicitErrorInitializerContext::unambiguousStructInitializer() {
  return getRuleContext<EscriptParser::UnambiguousStructInitializerContext>(0);
}


size_t EscriptParser::UnambiguousExplicitErrorInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousExplicitErrorInitializer;
}

void EscriptParser::UnambiguousExplicitErrorInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousExplicitErrorInitializer(this);
}

void EscriptParser::UnambiguousExplicitErrorInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousExplicitErrorInitializer(this);
}


antlrcpp::Any EscriptParser::UnambiguousExplicitErrorInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousExplicitErrorInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousExplicitErrorInitializerContext* EscriptParser::unambiguousExplicitErrorInitializer() {
  UnambiguousExplicitErrorInitializerContext *_localctx = _tracker.createInstance<UnambiguousExplicitErrorInitializerContext>(_ctx, getState());
  enterRule(_localctx, 256, EscriptParser::RuleUnambiguousExplicitErrorInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1220);
    match(EscriptParser::TOK_ERROR);
    setState(1222);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
    case 1: {
      setState(1221);
      unambiguousStructInitializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousBareArrayInitializerContext ------------------------------------------------------------------

EscriptParser::UnambiguousBareArrayInitializerContext::UnambiguousBareArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousBareArrayInitializerContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousBareArrayInitializerContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

EscriptParser::UnambiguousExpressionListContext* EscriptParser::UnambiguousBareArrayInitializerContext::unambiguousExpressionList() {
  return getRuleContext<EscriptParser::UnambiguousExpressionListContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousBareArrayInitializerContext::COMMA() {
  return getToken(EscriptParser::COMMA, 0);
}


size_t EscriptParser::UnambiguousBareArrayInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousBareArrayInitializer;
}

void EscriptParser::UnambiguousBareArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousBareArrayInitializer(this);
}

void EscriptParser::UnambiguousBareArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousBareArrayInitializer(this);
}


antlrcpp::Any EscriptParser::UnambiguousBareArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousBareArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousBareArrayInitializerContext* EscriptParser::unambiguousBareArrayInitializer() {
  UnambiguousBareArrayInitializerContext *_localctx = _tracker.createInstance<UnambiguousBareArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 258, EscriptParser::RuleUnambiguousBareArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1236);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1224);
      match(EscriptParser::LBRACE);
      setState(1226);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1225);
        unambiguousExpressionList();
      }
      setState(1228);
      match(EscriptParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1229);
      match(EscriptParser::LBRACE);
      setState(1231);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1230);
        unambiguousExpressionList();
      }
      setState(1233);
      match(EscriptParser::COMMA);
      setState(1234);
      match(EscriptParser::RBRACE);
      notifyErrorListeners("Expected expression following comma before right-brace in array initializer list");
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenthesizedExpressionContext ------------------------------------------------------------------

EscriptParser::ParenthesizedExpressionContext::ParenthesizedExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ParenthesizedExpressionContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::ParenthesizedExpressionContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::ParenthesizedExpressionContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}


size_t EscriptParser::ParenthesizedExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleParenthesizedExpression;
}

void EscriptParser::ParenthesizedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedExpression(this);
}

void EscriptParser::ParenthesizedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedExpression(this);
}


antlrcpp::Any EscriptParser::ParenthesizedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitParenthesizedExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ParenthesizedExpressionContext* EscriptParser::parenthesizedExpression() {
  ParenthesizedExpressionContext *_localctx = _tracker.createInstance<ParenthesizedExpressionContext>(_ctx, getState());
  enterRule(_localctx, 260, EscriptParser::RuleParenthesizedExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1238);
    match(EscriptParser::LPAREN);
    setState(1239);
    unambiguousExpression();
    setState(1240);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

EscriptParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::PrimaryContext* EscriptParser::ExpressionContext::primary() {
  return getRuleContext<EscriptParser::PrimaryContext>(0);
}

EscriptParser::MethodCallContext* EscriptParser::ExpressionContext::methodCall() {
  return getRuleContext<EscriptParser::MethodCallContext>(0);
}

EscriptParser::ScopedMethodCallContext* EscriptParser::ExpressionContext::scopedMethodCall() {
  return getRuleContext<EscriptParser::ScopedMethodCallContext>(0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ARRAY() {
  return getToken(EscriptParser::ARRAY, 0);
}

EscriptParser::ArrayInitializerContext* EscriptParser::ExpressionContext::arrayInitializer() {
  return getRuleContext<EscriptParser::ArrayInitializerContext>(0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::STRUCT() {
  return getToken(EscriptParser::STRUCT, 0);
}

EscriptParser::StructInitializerContext* EscriptParser::ExpressionContext::structInitializer() {
  return getRuleContext<EscriptParser::StructInitializerContext>(0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DICTIONARY() {
  return getToken(EscriptParser::DICTIONARY, 0);
}

EscriptParser::DictInitializerContext* EscriptParser::ExpressionContext::dictInitializer() {
  return getRuleContext<EscriptParser::DictInitializerContext>(0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::TOK_ERROR() {
  return getToken(EscriptParser::TOK_ERROR, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

EscriptParser::ExpressionListContext* EscriptParser::ExpressionContext::expressionList() {
  return getRuleContext<EscriptParser::ExpressionListContext>(0);
}

EscriptParser::FunctionReferenceContext* EscriptParser::ExpressionContext::functionReference() {
  return getRuleContext<EscriptParser::FunctionReferenceContext>(0);
}

std::vector<EscriptParser::ExpressionContext *> EscriptParser::ExpressionContext::expression() {
  return getRuleContexts<EscriptParser::ExpressionContext>();
}

EscriptParser::ExpressionContext* EscriptParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<EscriptParser::ExpressionContext>(i);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ADD() {
  return getToken(EscriptParser::ADD, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::SUB() {
  return getToken(EscriptParser::SUB, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::INC() {
  return getToken(EscriptParser::INC, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DEC() {
  return getToken(EscriptParser::DEC, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::TILDE() {
  return getToken(EscriptParser::TILDE, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::BANG_A() {
  return getToken(EscriptParser::BANG_A, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::BANG_B() {
  return getToken(EscriptParser::BANG_B, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::MUL() {
  return getToken(EscriptParser::MUL, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DIV() {
  return getToken(EscriptParser::DIV, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::MOD() {
  return getToken(EscriptParser::MOD, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::LSHIFT() {
  return getToken(EscriptParser::LSHIFT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::RSHIFT() {
  return getToken(EscriptParser::RSHIFT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ELVIS() {
  return getToken(EscriptParser::ELVIS, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::LE() {
  return getToken(EscriptParser::LE, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::GE() {
  return getToken(EscriptParser::GE, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::GT() {
  return getToken(EscriptParser::GT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::LT() {
  return getToken(EscriptParser::LT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::EQUAL() {
  return getToken(EscriptParser::EQUAL, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::EQUAL_DEPRECATED() {
  return getToken(EscriptParser::EQUAL_DEPRECATED, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::NOTEQUAL_B() {
  return getToken(EscriptParser::NOTEQUAL_B, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::NOTEQUAL_A() {
  return getToken(EscriptParser::NOTEQUAL_A, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::BITAND() {
  return getToken(EscriptParser::BITAND, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::CARET() {
  return getToken(EscriptParser::CARET, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::BITOR() {
  return getToken(EscriptParser::BITOR, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::TOK_IN() {
  return getToken(EscriptParser::TOK_IN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::AND_A() {
  return getToken(EscriptParser::AND_A, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::AND_B() {
  return getToken(EscriptParser::AND_B, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::OR_A() {
  return getToken(EscriptParser::OR_A, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::OR_B() {
  return getToken(EscriptParser::OR_B, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ADD_ASSIGN() {
  return getToken(EscriptParser::ADD_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::SUB_ASSIGN() {
  return getToken(EscriptParser::SUB_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::MUL_ASSIGN() {
  return getToken(EscriptParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DIV_ASSIGN() {
  return getToken(EscriptParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::MOD_ASSIGN() {
  return getToken(EscriptParser::MOD_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DOT() {
  return getToken(EscriptParser::DOT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}

EscriptParser::MemberCallContext* EscriptParser::ExpressionContext::memberCall() {
  return getRuleContext<EscriptParser::MemberCallContext>(0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::LBRACK() {
  return getToken(EscriptParser::LBRACK, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::RBRACK() {
  return getToken(EscriptParser::RBRACK, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ADDMEMBER() {
  return getToken(EscriptParser::ADDMEMBER, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DELMEMBER() {
  return getToken(EscriptParser::DELMEMBER, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::CHKMEMBER() {
  return getToken(EscriptParser::CHKMEMBER, 0);
}


size_t EscriptParser::ExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleExpression;
}

void EscriptParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void EscriptParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any EscriptParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


EscriptParser::ExpressionContext* EscriptParser::expression() {
   return expression(0);
}

EscriptParser::ExpressionContext* EscriptParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  EscriptParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  EscriptParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 262;
  enterRecursionRule(_localctx, 262, EscriptParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1272);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      setState(1243);
      primary();
      break;
    }

    case 2: {
      setState(1244);
      methodCall();
      break;
    }

    case 3: {
      setState(1245);
      scopedMethodCall();
      break;
    }

    case 4: {
      setState(1246);
      match(EscriptParser::ARRAY);
      setState(1248);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
      case 1: {
        setState(1247);
        arrayInitializer();
        break;
      }

      }
      break;
    }

    case 5: {
      setState(1250);
      match(EscriptParser::STRUCT);
      setState(1252);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
      case 1: {
        setState(1251);
        structInitializer();
        break;
      }

      }
      break;
    }

    case 6: {
      setState(1254);
      match(EscriptParser::DICTIONARY);
      setState(1256);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
      case 1: {
        setState(1255);
        dictInitializer();
        break;
      }

      }
      break;
    }

    case 7: {
      setState(1258);
      match(EscriptParser::TOK_ERROR);
      setState(1260);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
      case 1: {
        setState(1259);
        structInitializer();
        break;
      }

      }
      break;
    }

    case 8: {
      setState(1262);
      match(EscriptParser::LBRACE);
      setState(1264);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1263);
        expressionList();
      }
      setState(1266);
      match(EscriptParser::RBRACE);
      break;
    }

    case 9: {
      setState(1267);
      functionReference();
      break;
    }

    case 10: {
      setState(1268);
      dynamic_cast<ExpressionContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 88) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 88)) & ((1ULL << (EscriptParser::ADD - 88))
        | (1ULL << (EscriptParser::SUB - 88))
        | (1ULL << (EscriptParser::INC - 88))
        | (1ULL << (EscriptParser::DEC - 88)))) != 0))) {
        dynamic_cast<ExpressionContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1269);
      expression(16);
      break;
    }

    case 11: {
      setState(1270);
      dynamic_cast<ExpressionContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 57) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 57)) & ((1ULL << (EscriptParser::BANG_A - 57))
        | (1ULL << (EscriptParser::BANG_B - 57))
        | (1ULL << (EscriptParser::TILDE - 57)))) != 0))) {
        dynamic_cast<ExpressionContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1271);
      expression(15);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1336);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1334);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1274);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(1275);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 85) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 85)) & ((1ULL << (EscriptParser::MUL - 85))
            | (1ULL << (EscriptParser::DIV - 85))
            | (1ULL << (EscriptParser::MOD - 85)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1276);
          expression(15);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1277);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(1278);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == EscriptParser::ADD

          || _la == EscriptParser::SUB)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1279);
          expression(14);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1280);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(1281);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == EscriptParser::RSHIFT

          || _la == EscriptParser::LSHIFT)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1282);
          expression(13);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1283);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(1284);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::ELVIS);
          setState(1285);
          expression(12);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1286);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(1287);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 95) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 95)) & ((1ULL << (EscriptParser::LE - 95))
            | (1ULL << (EscriptParser::LT - 95))
            | (1ULL << (EscriptParser::GE - 95))
            | (1ULL << (EscriptParser::GT - 95)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1288);
          expression(11);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1289);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(1290);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 104) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 104)) & ((1ULL << (EscriptParser::NOTEQUAL_A - 104))
            | (1ULL << (EscriptParser::NOTEQUAL_B - 104))
            | (1ULL << (EscriptParser::EQUAL_DEPRECATED - 104))
            | (1ULL << (EscriptParser::EQUAL - 104)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1291);
          expression(10);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1292);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(1293);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::BITAND);
          setState(1294);
          expression(9);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1295);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1296);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::CARET);
          setState(1297);
          expression(8);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1298);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1299);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::BITOR);
          setState(1300);
          expression(7);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1301);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1302);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::TOK_IN);
          setState(1303);
          expression(6);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1304);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1305);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == EscriptParser::AND_A

          || _la == EscriptParser::AND_B)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1306);
          expression(5);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1307);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1308);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == EscriptParser::OR_A

          || _la == EscriptParser::OR_B)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1309);
          expression(4);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1310);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1311);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 90) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 90)) & ((1ULL << (EscriptParser::ADD_ASSIGN - 90))
            | (1ULL << (EscriptParser::SUB_ASSIGN - 90))
            | (1ULL << (EscriptParser::MUL_ASSIGN - 90))
            | (1ULL << (EscriptParser::DIV_ASSIGN - 90))
            | (1ULL << (EscriptParser::MOD_ASSIGN - 90))
            | (1ULL << (EscriptParser::ASSIGN - 90)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1312);
          expression(1);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1313);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(1314);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::DOT);
          setState(1318);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
          case 1: {
            setState(1315);
            match(EscriptParser::IDENTIFIER);
            break;
          }

          case 2: {
            setState(1316);
            match(EscriptParser::STRING_LITERAL);
            break;
          }

          case 3: {
            setState(1317);
            memberCall();
            break;
          }

          }
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1320);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(1321);
          match(EscriptParser::LBRACK);
          setState(1322);
          expressionList();
          setState(1323);
          match(EscriptParser::RBRACK);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1325);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(1326);
          dynamic_cast<ExpressionContext *>(_localctx)->postfix = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == EscriptParser::INC

          || _la == EscriptParser::DEC)) {
            dynamic_cast<ExpressionContext *>(_localctx)->postfix = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1327);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1328);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 109) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 109)) & ((1ULL << (EscriptParser::ADDMEMBER - 109))
            | (1ULL << (EscriptParser::DELMEMBER - 109))
            | (1ULL << (EscriptParser::CHKMEMBER - 109)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1332);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
          case 1: {
            setState(1329);
            match(EscriptParser::IDENTIFIER);
            break;
          }

          case 2: {
            setState(1330);
            match(EscriptParser::STRING_LITERAL);
            break;
          }

          case 3: {
            setState(1331);
            expression(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1338);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

EscriptParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::PrimaryContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::PrimaryContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::PrimaryContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::LiteralContext* EscriptParser::PrimaryContext::literal() {
  return getRuleContext<EscriptParser::LiteralContext>(0);
}

tree::TerminalNode* EscriptParser::PrimaryContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}


size_t EscriptParser::PrimaryContext::getRuleIndex() const {
  return EscriptParser::RulePrimary;
}

void EscriptParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void EscriptParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}


antlrcpp::Any EscriptParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::PrimaryContext* EscriptParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 264, EscriptParser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1345);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(1339);
        match(EscriptParser::LPAREN);
        setState(1340);
        expression(0);
        setState(1341);
        match(EscriptParser::RPAREN);
        break;
      }

      case EscriptParser::DECIMAL_LITERAL:
      case EscriptParser::HEX_LITERAL:
      case EscriptParser::OCT_LITERAL:
      case EscriptParser::BINARY_LITERAL:
      case EscriptParser::FLOAT_LITERAL:
      case EscriptParser::HEX_FLOAT_LITERAL:
      case EscriptParser::CHAR_LITERAL:
      case EscriptParser::STRING_LITERAL:
      case EscriptParser::NULL_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(1343);
        literal();
        break;
      }

      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 3);
        setState(1344);
        match(EscriptParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParExpressionContext ------------------------------------------------------------------

EscriptParser::ParExpressionContext::ParExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ParExpressionContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::ParExpressionContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::ParExpressionContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}


size_t EscriptParser::ParExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleParExpression;
}

void EscriptParser::ParExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParExpression(this);
}

void EscriptParser::ParExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParExpression(this);
}


antlrcpp::Any EscriptParser::ParExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitParExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ParExpressionContext* EscriptParser::parExpression() {
  ParExpressionContext *_localctx = _tracker.createInstance<ParExpressionContext>(_ctx, getState());
  enterRule(_localctx, 266, EscriptParser::RuleParExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1347);
    match(EscriptParser::LPAREN);
    setState(1348);
    expression(0);
    setState(1349);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

EscriptParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::ExpressionContext *> EscriptParser::ExpressionListContext::expression() {
  return getRuleContexts<EscriptParser::ExpressionContext>();
}

EscriptParser::ExpressionContext* EscriptParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<EscriptParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::ExpressionListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::ExpressionListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::ExpressionListContext::getRuleIndex() const {
  return EscriptParser::RuleExpressionList;
}

void EscriptParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void EscriptParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any EscriptParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ExpressionListContext* EscriptParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 268, EscriptParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1351);
    expression(0);
    setState(1356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(1352);
      match(EscriptParser::COMMA);
      setState(1353);
      expression(0);
      setState(1358);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousExpressionListContext ------------------------------------------------------------------

EscriptParser::UnambiguousExpressionListContext::UnambiguousExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousExpressionContext *> EscriptParser::UnambiguousExpressionListContext::unambiguousExpression() {
  return getRuleContexts<EscriptParser::UnambiguousExpressionContext>();
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousExpressionListContext::unambiguousExpression(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousExpressionListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::UnambiguousExpressionListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::UnambiguousExpressionListContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousExpressionList;
}

void EscriptParser::UnambiguousExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousExpressionList(this);
}

void EscriptParser::UnambiguousExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousExpressionList(this);
}


antlrcpp::Any EscriptParser::UnambiguousExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousExpressionList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousExpressionListContext* EscriptParser::unambiguousExpressionList() {
  UnambiguousExpressionListContext *_localctx = _tracker.createInstance<UnambiguousExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 270, EscriptParser::RuleUnambiguousExpressionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1359);
    unambiguousExpression();
    setState(1364);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1360);
        match(EscriptParser::COMMA);
        setState(1361);
        unambiguousExpression(); 
      }
      setState(1366);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallArgumentContext ------------------------------------------------------------------

EscriptParser::MethodCallArgumentContext::MethodCallArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::ExpressionContext* EscriptParser::MethodCallArgumentContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::MethodCallArgumentContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::MethodCallArgumentContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}


size_t EscriptParser::MethodCallArgumentContext::getRuleIndex() const {
  return EscriptParser::RuleMethodCallArgument;
}

void EscriptParser::MethodCallArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCallArgument(this);
}

void EscriptParser::MethodCallArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCallArgument(this);
}


antlrcpp::Any EscriptParser::MethodCallArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMethodCallArgument(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MethodCallArgumentContext* EscriptParser::methodCallArgument() {
  MethodCallArgumentContext *_localctx = _tracker.createInstance<MethodCallArgumentContext>(_ctx, getState());
  enterRule(_localctx, 272, EscriptParser::RuleMethodCallArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1369);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 126, _ctx)) {
    case 1: {
      setState(1367);
      dynamic_cast<MethodCallArgumentContext *>(_localctx)->parameter = match(EscriptParser::IDENTIFIER);
      setState(1368);
      match(EscriptParser::ASSIGN);
      break;
    }

    }
    setState(1371);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallArgumentListContext ------------------------------------------------------------------

EscriptParser::MethodCallArgumentListContext::MethodCallArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::MethodCallArgumentContext *> EscriptParser::MethodCallArgumentListContext::methodCallArgument() {
  return getRuleContexts<EscriptParser::MethodCallArgumentContext>();
}

EscriptParser::MethodCallArgumentContext* EscriptParser::MethodCallArgumentListContext::methodCallArgument(size_t i) {
  return getRuleContext<EscriptParser::MethodCallArgumentContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::MethodCallArgumentListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::MethodCallArgumentListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::MethodCallArgumentListContext::getRuleIndex() const {
  return EscriptParser::RuleMethodCallArgumentList;
}

void EscriptParser::MethodCallArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCallArgumentList(this);
}

void EscriptParser::MethodCallArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCallArgumentList(this);
}


antlrcpp::Any EscriptParser::MethodCallArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMethodCallArgumentList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MethodCallArgumentListContext* EscriptParser::methodCallArgumentList() {
  MethodCallArgumentListContext *_localctx = _tracker.createInstance<MethodCallArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 274, EscriptParser::RuleMethodCallArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1373);
    methodCallArgument();
    setState(1378);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(1374);
      match(EscriptParser::COMMA);
      setState(1375);
      methodCallArgument();
      setState(1380);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallContext ------------------------------------------------------------------

EscriptParser::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::MethodCallContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::MethodCallContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::MethodCallContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::MethodCallArgumentListContext* EscriptParser::MethodCallContext::methodCallArgumentList() {
  return getRuleContext<EscriptParser::MethodCallArgumentListContext>(0);
}


size_t EscriptParser::MethodCallContext::getRuleIndex() const {
  return EscriptParser::RuleMethodCall;
}

void EscriptParser::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}

void EscriptParser::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}


antlrcpp::Any EscriptParser::MethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMethodCall(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MethodCallContext* EscriptParser::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 276, EscriptParser::RuleMethodCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1381);
    match(EscriptParser::IDENTIFIER);
    setState(1382);
    match(EscriptParser::LPAREN);
    setState(1384);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::TOK_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(1383);
      methodCallArgumentList();
    }
    setState(1386);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueArgumentListContext ------------------------------------------------------------------

EscriptParser::ValueArgumentListContext::ValueArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousFunctionCallArgumentContext *> EscriptParser::ValueArgumentListContext::unambiguousFunctionCallArgument() {
  return getRuleContexts<EscriptParser::UnambiguousFunctionCallArgumentContext>();
}

EscriptParser::UnambiguousFunctionCallArgumentContext* EscriptParser::ValueArgumentListContext::unambiguousFunctionCallArgument(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousFunctionCallArgumentContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::ValueArgumentListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::ValueArgumentListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::ValueArgumentListContext::getRuleIndex() const {
  return EscriptParser::RuleValueArgumentList;
}

void EscriptParser::ValueArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueArgumentList(this);
}

void EscriptParser::ValueArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueArgumentList(this);
}


antlrcpp::Any EscriptParser::ValueArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitValueArgumentList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ValueArgumentListContext* EscriptParser::valueArgumentList() {
  ValueArgumentListContext *_localctx = _tracker.createInstance<ValueArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 278, EscriptParser::RuleValueArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1388);
    unambiguousFunctionCallArgument();
    setState(1393);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(1389);
      match(EscriptParser::COMMA);
      setState(1390);
      unambiguousFunctionCallArgument();
      setState(1395);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueArgumentsContext ------------------------------------------------------------------

EscriptParser::ValueArgumentsContext::ValueArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ValueArgumentsContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

EscriptParser::UnambiguousFunctionCallArgumentListContext* EscriptParser::ValueArgumentsContext::unambiguousFunctionCallArgumentList() {
  return getRuleContext<EscriptParser::UnambiguousFunctionCallArgumentListContext>(0);
}

tree::TerminalNode* EscriptParser::ValueArgumentsContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}


size_t EscriptParser::ValueArgumentsContext::getRuleIndex() const {
  return EscriptParser::RuleValueArguments;
}

void EscriptParser::ValueArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueArguments(this);
}

void EscriptParser::ValueArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueArguments(this);
}


antlrcpp::Any EscriptParser::ValueArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitValueArguments(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ValueArgumentsContext* EscriptParser::valueArguments() {
  ValueArgumentsContext *_localctx = _tracker.createInstance<ValueArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 280, EscriptParser::RuleValueArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1402);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1396);
      match(EscriptParser::LPAREN);
      setState(1397);
      unambiguousFunctionCallArgumentList();
      setState(1398);
      match(EscriptParser::RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1400);
      match(EscriptParser::LPAREN);
      setState(1401);
      match(EscriptParser::RPAREN);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousFunctionCallArgumentContext ------------------------------------------------------------------

EscriptParser::UnambiguousFunctionCallArgumentContext::UnambiguousFunctionCallArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousFunctionCallArgumentContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}


size_t EscriptParser::UnambiguousFunctionCallArgumentContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousFunctionCallArgument;
}

void EscriptParser::UnambiguousFunctionCallArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousFunctionCallArgument(this);
}

void EscriptParser::UnambiguousFunctionCallArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousFunctionCallArgument(this);
}


antlrcpp::Any EscriptParser::UnambiguousFunctionCallArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousFunctionCallArgument(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousFunctionCallArgumentContext* EscriptParser::unambiguousFunctionCallArgument() {
  UnambiguousFunctionCallArgumentContext *_localctx = _tracker.createInstance<UnambiguousFunctionCallArgumentContext>(_ctx, getState());
  enterRule(_localctx, 282, EscriptParser::RuleUnambiguousFunctionCallArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1404);
    unambiguousExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousFunctionCallContext ------------------------------------------------------------------

EscriptParser::UnambiguousFunctionCallContext::UnambiguousFunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionCallContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::ValueArgumentsContext* EscriptParser::UnambiguousFunctionCallContext::valueArguments() {
  return getRuleContext<EscriptParser::ValueArgumentsContext>(0);
}


size_t EscriptParser::UnambiguousFunctionCallContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousFunctionCall;
}

void EscriptParser::UnambiguousFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousFunctionCall(this);
}

void EscriptParser::UnambiguousFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousFunctionCall(this);
}


antlrcpp::Any EscriptParser::UnambiguousFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousFunctionCallContext* EscriptParser::unambiguousFunctionCall() {
  UnambiguousFunctionCallContext *_localctx = _tracker.createInstance<UnambiguousFunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 284, EscriptParser::RuleUnambiguousFunctionCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1406);
    match(EscriptParser::IDENTIFIER);
    setState(1407);
    valueArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousScopedFunctionCallContext ------------------------------------------------------------------

EscriptParser::UnambiguousScopedFunctionCallContext::UnambiguousScopedFunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousScopedFunctionCallContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousScopedFunctionCallContext::COLONCOLON() {
  return getToken(EscriptParser::COLONCOLON, 0);
}

EscriptParser::UnambiguousFunctionCallContext* EscriptParser::UnambiguousScopedFunctionCallContext::unambiguousFunctionCall() {
  return getRuleContext<EscriptParser::UnambiguousFunctionCallContext>(0);
}


size_t EscriptParser::UnambiguousScopedFunctionCallContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousScopedFunctionCall;
}

void EscriptParser::UnambiguousScopedFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousScopedFunctionCall(this);
}

void EscriptParser::UnambiguousScopedFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousScopedFunctionCall(this);
}


antlrcpp::Any EscriptParser::UnambiguousScopedFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousScopedFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousScopedFunctionCallContext* EscriptParser::unambiguousScopedFunctionCall() {
  UnambiguousScopedFunctionCallContext *_localctx = _tracker.createInstance<UnambiguousScopedFunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 286, EscriptParser::RuleUnambiguousScopedFunctionCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1409);
    match(EscriptParser::IDENTIFIER);
    setState(1410);
    match(EscriptParser::COLONCOLON);
    setState(1411);
    unambiguousFunctionCall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousFunctionCallArgumentListContext ------------------------------------------------------------------

EscriptParser::UnambiguousFunctionCallArgumentListContext::UnambiguousFunctionCallArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousFunctionCallArgumentContext *> EscriptParser::UnambiguousFunctionCallArgumentListContext::unambiguousFunctionCallArgument() {
  return getRuleContexts<EscriptParser::UnambiguousFunctionCallArgumentContext>();
}

EscriptParser::UnambiguousFunctionCallArgumentContext* EscriptParser::UnambiguousFunctionCallArgumentListContext::unambiguousFunctionCallArgument(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousFunctionCallArgumentContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousFunctionCallArgumentListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::UnambiguousFunctionCallArgumentListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::UnambiguousFunctionCallArgumentListContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousFunctionCallArgumentList;
}

void EscriptParser::UnambiguousFunctionCallArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousFunctionCallArgumentList(this);
}

void EscriptParser::UnambiguousFunctionCallArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousFunctionCallArgumentList(this);
}


antlrcpp::Any EscriptParser::UnambiguousFunctionCallArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousFunctionCallArgumentList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousFunctionCallArgumentListContext* EscriptParser::unambiguousFunctionCallArgumentList() {
  UnambiguousFunctionCallArgumentListContext *_localctx = _tracker.createInstance<UnambiguousFunctionCallArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 288, EscriptParser::RuleUnambiguousFunctionCallArgumentList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1413);
    unambiguousFunctionCallArgument();
    setState(1418);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(1414);
      match(EscriptParser::COMMA);
      setState(1415);
      unambiguousFunctionCallArgument();
      setState(1420);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberCallContext ------------------------------------------------------------------

EscriptParser::MemberCallContext::MemberCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::MemberCallContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::MemberCallContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::MemberCallContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::ExpressionListContext* EscriptParser::MemberCallContext::expressionList() {
  return getRuleContext<EscriptParser::ExpressionListContext>(0);
}


size_t EscriptParser::MemberCallContext::getRuleIndex() const {
  return EscriptParser::RuleMemberCall;
}

void EscriptParser::MemberCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberCall(this);
}

void EscriptParser::MemberCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberCall(this);
}


antlrcpp::Any EscriptParser::MemberCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMemberCall(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MemberCallContext* EscriptParser::memberCall() {
  MemberCallContext *_localctx = _tracker.createInstance<MemberCallContext>(_ctx, getState());
  enterRule(_localctx, 290, EscriptParser::RuleMemberCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1421);
    match(EscriptParser::IDENTIFIER);
    setState(1422);
    match(EscriptParser::LPAREN);
    setState(1424);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::TOK_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(1423);
      expressionList();
    }
    setState(1426);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructInitializerExpressionContext ------------------------------------------------------------------

EscriptParser::StructInitializerExpressionContext::StructInitializerExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::StructInitializerExpressionContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::StructInitializerExpressionContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::StructInitializerExpressionContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::StructInitializerExpressionContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}


size_t EscriptParser::StructInitializerExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleStructInitializerExpression;
}

void EscriptParser::StructInitializerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructInitializerExpression(this);
}

void EscriptParser::StructInitializerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructInitializerExpression(this);
}


antlrcpp::Any EscriptParser::StructInitializerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStructInitializerExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StructInitializerExpressionContext* EscriptParser::structInitializerExpression() {
  StructInitializerExpressionContext *_localctx = _tracker.createInstance<StructInitializerExpressionContext>(_ctx, getState());
  enterRule(_localctx, 292, EscriptParser::RuleStructInitializerExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1438);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1428);
        match(EscriptParser::IDENTIFIER);
        setState(1431);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::ASSIGN) {
          setState(1429);
          match(EscriptParser::ASSIGN);
          setState(1430);
          expression(0);
        }
        break;
      }

      case EscriptParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(1433);
        match(EscriptParser::STRING_LITERAL);
        setState(1436);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::ASSIGN) {
          setState(1434);
          match(EscriptParser::ASSIGN);
          setState(1435);
          expression(0);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructInitializerExpressionListContext ------------------------------------------------------------------

EscriptParser::StructInitializerExpressionListContext::StructInitializerExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::StructInitializerExpressionContext *> EscriptParser::StructInitializerExpressionListContext::structInitializerExpression() {
  return getRuleContexts<EscriptParser::StructInitializerExpressionContext>();
}

EscriptParser::StructInitializerExpressionContext* EscriptParser::StructInitializerExpressionListContext::structInitializerExpression(size_t i) {
  return getRuleContext<EscriptParser::StructInitializerExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::StructInitializerExpressionListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::StructInitializerExpressionListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::StructInitializerExpressionListContext::getRuleIndex() const {
  return EscriptParser::RuleStructInitializerExpressionList;
}

void EscriptParser::StructInitializerExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructInitializerExpressionList(this);
}

void EscriptParser::StructInitializerExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructInitializerExpressionList(this);
}


antlrcpp::Any EscriptParser::StructInitializerExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStructInitializerExpressionList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StructInitializerExpressionListContext* EscriptParser::structInitializerExpressionList() {
  StructInitializerExpressionListContext *_localctx = _tracker.createInstance<StructInitializerExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 294, EscriptParser::RuleStructInitializerExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1440);
    structInitializerExpression();
    setState(1445);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(1441);
      match(EscriptParser::COMMA);
      setState(1442);
      structInitializerExpression();
      setState(1447);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructInitializerContext ------------------------------------------------------------------

EscriptParser::StructInitializerContext::StructInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::StructInitializerContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::StructInitializerContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

EscriptParser::StructInitializerExpressionListContext* EscriptParser::StructInitializerContext::structInitializerExpressionList() {
  return getRuleContext<EscriptParser::StructInitializerExpressionListContext>(0);
}


size_t EscriptParser::StructInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleStructInitializer;
}

void EscriptParser::StructInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructInitializer(this);
}

void EscriptParser::StructInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructInitializer(this);
}


antlrcpp::Any EscriptParser::StructInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStructInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StructInitializerContext* EscriptParser::structInitializer() {
  StructInitializerContext *_localctx = _tracker.createInstance<StructInitializerContext>(_ctx, getState());
  enterRule(_localctx, 296, EscriptParser::RuleStructInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1448);
    match(EscriptParser::LBRACE);
    setState(1450);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::STRING_LITERAL

    || _la == EscriptParser::IDENTIFIER) {
      setState(1449);
      structInitializerExpressionList();
    }
    setState(1452);
    match(EscriptParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousStructInitializerExpressionContext ------------------------------------------------------------------

EscriptParser::UnambiguousStructInitializerExpressionContext::UnambiguousStructInitializerExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousStructInitializerExpressionContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousStructInitializerExpressionContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousStructInitializerExpressionContext::unambiguousExpression() {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousStructInitializerExpressionContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}


size_t EscriptParser::UnambiguousStructInitializerExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousStructInitializerExpression;
}

void EscriptParser::UnambiguousStructInitializerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousStructInitializerExpression(this);
}

void EscriptParser::UnambiguousStructInitializerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousStructInitializerExpression(this);
}


antlrcpp::Any EscriptParser::UnambiguousStructInitializerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousStructInitializerExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousStructInitializerExpressionContext* EscriptParser::unambiguousStructInitializerExpression() {
  UnambiguousStructInitializerExpressionContext *_localctx = _tracker.createInstance<UnambiguousStructInitializerExpressionContext>(_ctx, getState());
  enterRule(_localctx, 298, EscriptParser::RuleUnambiguousStructInitializerExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1464);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1454);
        match(EscriptParser::IDENTIFIER);
        setState(1457);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::ASSIGN) {
          setState(1455);
          match(EscriptParser::ASSIGN);
          setState(1456);
          unambiguousExpression();
        }
        break;
      }

      case EscriptParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(1459);
        match(EscriptParser::STRING_LITERAL);
        setState(1462);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::ASSIGN) {
          setState(1460);
          match(EscriptParser::ASSIGN);
          setState(1461);
          unambiguousExpression();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousStructInitializerExpressionListContext ------------------------------------------------------------------

EscriptParser::UnambiguousStructInitializerExpressionListContext::UnambiguousStructInitializerExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousStructInitializerExpressionContext *> EscriptParser::UnambiguousStructInitializerExpressionListContext::unambiguousStructInitializerExpression() {
  return getRuleContexts<EscriptParser::UnambiguousStructInitializerExpressionContext>();
}

EscriptParser::UnambiguousStructInitializerExpressionContext* EscriptParser::UnambiguousStructInitializerExpressionListContext::unambiguousStructInitializerExpression(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousStructInitializerExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousStructInitializerExpressionListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::UnambiguousStructInitializerExpressionListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::UnambiguousStructInitializerExpressionListContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousStructInitializerExpressionList;
}

void EscriptParser::UnambiguousStructInitializerExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousStructInitializerExpressionList(this);
}

void EscriptParser::UnambiguousStructInitializerExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousStructInitializerExpressionList(this);
}


antlrcpp::Any EscriptParser::UnambiguousStructInitializerExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousStructInitializerExpressionList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousStructInitializerExpressionListContext* EscriptParser::unambiguousStructInitializerExpressionList() {
  UnambiguousStructInitializerExpressionListContext *_localctx = _tracker.createInstance<UnambiguousStructInitializerExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 300, EscriptParser::RuleUnambiguousStructInitializerExpressionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1466);
    unambiguousStructInitializerExpression();
    setState(1471);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1467);
        match(EscriptParser::COMMA);
        setState(1468);
        unambiguousStructInitializerExpression(); 
      }
      setState(1473);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousStructInitializerContext ------------------------------------------------------------------

EscriptParser::UnambiguousStructInitializerContext::UnambiguousStructInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousStructInitializerContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousStructInitializerContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

EscriptParser::UnambiguousStructInitializerExpressionListContext* EscriptParser::UnambiguousStructInitializerContext::unambiguousStructInitializerExpressionList() {
  return getRuleContext<EscriptParser::UnambiguousStructInitializerExpressionListContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousStructInitializerContext::COMMA() {
  return getToken(EscriptParser::COMMA, 0);
}


size_t EscriptParser::UnambiguousStructInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousStructInitializer;
}

void EscriptParser::UnambiguousStructInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousStructInitializer(this);
}

void EscriptParser::UnambiguousStructInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousStructInitializer(this);
}


antlrcpp::Any EscriptParser::UnambiguousStructInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousStructInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousStructInitializerContext* EscriptParser::unambiguousStructInitializer() {
  UnambiguousStructInitializerContext *_localctx = _tracker.createInstance<UnambiguousStructInitializerContext>(_ctx, getState());
  enterRule(_localctx, 302, EscriptParser::RuleUnambiguousStructInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1486);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1474);
      match(EscriptParser::LBRACE);
      setState(1476);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == EscriptParser::STRING_LITERAL

      || _la == EscriptParser::IDENTIFIER) {
        setState(1475);
        unambiguousStructInitializerExpressionList();
      }
      setState(1478);
      match(EscriptParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1479);
      match(EscriptParser::LBRACE);
      setState(1481);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == EscriptParser::STRING_LITERAL

      || _la == EscriptParser::IDENTIFIER) {
        setState(1480);
        unambiguousStructInitializerExpressionList();
      }
      setState(1483);
      match(EscriptParser::COMMA);
      setState(1484);
      match(EscriptParser::RBRACE);
      notifyErrorListeners("Expected expression following comma before right-brace in struct initializer list");
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictInitializerExpressionContext ------------------------------------------------------------------

EscriptParser::DictInitializerExpressionContext::DictInitializerExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::ExpressionContext *> EscriptParser::DictInitializerExpressionContext::expression() {
  return getRuleContexts<EscriptParser::ExpressionContext>();
}

EscriptParser::ExpressionContext* EscriptParser::DictInitializerExpressionContext::expression(size_t i) {
  return getRuleContext<EscriptParser::ExpressionContext>(i);
}

tree::TerminalNode* EscriptParser::DictInitializerExpressionContext::ARROW() {
  return getToken(EscriptParser::ARROW, 0);
}


size_t EscriptParser::DictInitializerExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleDictInitializerExpression;
}

void EscriptParser::DictInitializerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictInitializerExpression(this);
}

void EscriptParser::DictInitializerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictInitializerExpression(this);
}


antlrcpp::Any EscriptParser::DictInitializerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDictInitializerExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DictInitializerExpressionContext* EscriptParser::dictInitializerExpression() {
  DictInitializerExpressionContext *_localctx = _tracker.createInstance<DictInitializerExpressionContext>(_ctx, getState());
  enterRule(_localctx, 304, EscriptParser::RuleDictInitializerExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1488);
    expression(0);
    setState(1491);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ARROW) {
      setState(1489);
      match(EscriptParser::ARROW);
      setState(1490);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousDictInitializerExpressionContext ------------------------------------------------------------------

EscriptParser::UnambiguousDictInitializerExpressionContext::UnambiguousDictInitializerExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousExpressionContext *> EscriptParser::UnambiguousDictInitializerExpressionContext::unambiguousExpression() {
  return getRuleContexts<EscriptParser::UnambiguousExpressionContext>();
}

EscriptParser::UnambiguousExpressionContext* EscriptParser::UnambiguousDictInitializerExpressionContext::unambiguousExpression(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousExpressionContext>(i);
}

tree::TerminalNode* EscriptParser::UnambiguousDictInitializerExpressionContext::ARROW() {
  return getToken(EscriptParser::ARROW, 0);
}


size_t EscriptParser::UnambiguousDictInitializerExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousDictInitializerExpression;
}

void EscriptParser::UnambiguousDictInitializerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousDictInitializerExpression(this);
}

void EscriptParser::UnambiguousDictInitializerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousDictInitializerExpression(this);
}


antlrcpp::Any EscriptParser::UnambiguousDictInitializerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousDictInitializerExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousDictInitializerExpressionContext* EscriptParser::unambiguousDictInitializerExpression() {
  UnambiguousDictInitializerExpressionContext *_localctx = _tracker.createInstance<UnambiguousDictInitializerExpressionContext>(_ctx, getState());
  enterRule(_localctx, 306, EscriptParser::RuleUnambiguousDictInitializerExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1493);
    unambiguousExpression();
    setState(1496);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ARROW) {
      setState(1494);
      match(EscriptParser::ARROW);
      setState(1495);
      unambiguousExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictInitializerExpressionListContext ------------------------------------------------------------------

EscriptParser::DictInitializerExpressionListContext::DictInitializerExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::DictInitializerExpressionContext *> EscriptParser::DictInitializerExpressionListContext::dictInitializerExpression() {
  return getRuleContexts<EscriptParser::DictInitializerExpressionContext>();
}

EscriptParser::DictInitializerExpressionContext* EscriptParser::DictInitializerExpressionListContext::dictInitializerExpression(size_t i) {
  return getRuleContext<EscriptParser::DictInitializerExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::DictInitializerExpressionListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::DictInitializerExpressionListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::DictInitializerExpressionListContext::getRuleIndex() const {
  return EscriptParser::RuleDictInitializerExpressionList;
}

void EscriptParser::DictInitializerExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictInitializerExpressionList(this);
}

void EscriptParser::DictInitializerExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictInitializerExpressionList(this);
}


antlrcpp::Any EscriptParser::DictInitializerExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDictInitializerExpressionList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DictInitializerExpressionListContext* EscriptParser::dictInitializerExpressionList() {
  DictInitializerExpressionListContext *_localctx = _tracker.createInstance<DictInitializerExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 308, EscriptParser::RuleDictInitializerExpressionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1498);
    dictInitializerExpression();
    setState(1503);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1499);
        match(EscriptParser::COMMA);
        setState(1500);
        dictInitializerExpression(); 
      }
      setState(1505);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousDictInitializerExpressionListContext ------------------------------------------------------------------

EscriptParser::UnambiguousDictInitializerExpressionListContext::UnambiguousDictInitializerExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::UnambiguousDictInitializerExpressionContext *> EscriptParser::UnambiguousDictInitializerExpressionListContext::unambiguousDictInitializerExpression() {
  return getRuleContexts<EscriptParser::UnambiguousDictInitializerExpressionContext>();
}

EscriptParser::UnambiguousDictInitializerExpressionContext* EscriptParser::UnambiguousDictInitializerExpressionListContext::unambiguousDictInitializerExpression(size_t i) {
  return getRuleContext<EscriptParser::UnambiguousDictInitializerExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::UnambiguousDictInitializerExpressionListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::UnambiguousDictInitializerExpressionListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::UnambiguousDictInitializerExpressionListContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousDictInitializerExpressionList;
}

void EscriptParser::UnambiguousDictInitializerExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousDictInitializerExpressionList(this);
}

void EscriptParser::UnambiguousDictInitializerExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousDictInitializerExpressionList(this);
}


antlrcpp::Any EscriptParser::UnambiguousDictInitializerExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousDictInitializerExpressionList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousDictInitializerExpressionListContext* EscriptParser::unambiguousDictInitializerExpressionList() {
  UnambiguousDictInitializerExpressionListContext *_localctx = _tracker.createInstance<UnambiguousDictInitializerExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 310, EscriptParser::RuleUnambiguousDictInitializerExpressionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1506);
    unambiguousDictInitializerExpression();
    setState(1511);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1507);
        match(EscriptParser::COMMA);
        setState(1508);
        unambiguousDictInitializerExpression(); 
      }
      setState(1513);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictInitializerContext ------------------------------------------------------------------

EscriptParser::DictInitializerContext::DictInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::DictInitializerContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::DictInitializerContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

EscriptParser::DictInitializerExpressionListContext* EscriptParser::DictInitializerContext::dictInitializerExpressionList() {
  return getRuleContext<EscriptParser::DictInitializerExpressionListContext>(0);
}

tree::TerminalNode* EscriptParser::DictInitializerContext::COMMA() {
  return getToken(EscriptParser::COMMA, 0);
}


size_t EscriptParser::DictInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleDictInitializer;
}

void EscriptParser::DictInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictInitializer(this);
}

void EscriptParser::DictInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictInitializer(this);
}


antlrcpp::Any EscriptParser::DictInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDictInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DictInitializerContext* EscriptParser::dictInitializer() {
  DictInitializerContext *_localctx = _tracker.createInstance<DictInitializerContext>(_ctx, getState());
  enterRule(_localctx, 312, EscriptParser::RuleDictInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1526);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1514);
      match(EscriptParser::LBRACE);
      setState(1516);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1515);
        dictInitializerExpressionList();
      }
      setState(1518);
      match(EscriptParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1519);
      match(EscriptParser::LBRACE);
      setState(1521);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1520);
        dictInitializerExpressionList();
      }
      setState(1523);
      match(EscriptParser::COMMA);
      setState(1524);
      match(EscriptParser::RBRACE);
      notifyErrorListeners("Expected expression following comma before right-brace in dictionary initializer list");
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousDictInitializerContext ------------------------------------------------------------------

EscriptParser::UnambiguousDictInitializerContext::UnambiguousDictInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousDictInitializerContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousDictInitializerContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

EscriptParser::UnambiguousDictInitializerExpressionListContext* EscriptParser::UnambiguousDictInitializerContext::unambiguousDictInitializerExpressionList() {
  return getRuleContext<EscriptParser::UnambiguousDictInitializerExpressionListContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousDictInitializerContext::COMMA() {
  return getToken(EscriptParser::COMMA, 0);
}


size_t EscriptParser::UnambiguousDictInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousDictInitializer;
}

void EscriptParser::UnambiguousDictInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousDictInitializer(this);
}

void EscriptParser::UnambiguousDictInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousDictInitializer(this);
}


antlrcpp::Any EscriptParser::UnambiguousDictInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousDictInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousDictInitializerContext* EscriptParser::unambiguousDictInitializer() {
  UnambiguousDictInitializerContext *_localctx = _tracker.createInstance<UnambiguousDictInitializerContext>(_ctx, getState());
  enterRule(_localctx, 314, EscriptParser::RuleUnambiguousDictInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1540);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1528);
      match(EscriptParser::LBRACE);
      setState(1530);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1529);
        unambiguousDictInitializerExpressionList();
      }
      setState(1532);
      match(EscriptParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1533);
      match(EscriptParser::LBRACE);
      setState(1535);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1534);
        unambiguousDictInitializerExpressionList();
      }
      setState(1537);
      match(EscriptParser::COMMA);
      setState(1538);
      match(EscriptParser::RBRACE);
      notifyErrorListeners("Expected expression following comma before right-brace in dictionary initializer list");
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayInitializerContext ------------------------------------------------------------------

EscriptParser::ArrayInitializerContext::ArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ArrayInitializerContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::ArrayInitializerContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

EscriptParser::ExpressionListContext* EscriptParser::ArrayInitializerContext::expressionList() {
  return getRuleContext<EscriptParser::ExpressionListContext>(0);
}

tree::TerminalNode* EscriptParser::ArrayInitializerContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::ArrayInitializerContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}


size_t EscriptParser::ArrayInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleArrayInitializer;
}

void EscriptParser::ArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayInitializer(this);
}

void EscriptParser::ArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayInitializer(this);
}


antlrcpp::Any EscriptParser::ArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ArrayInitializerContext* EscriptParser::arrayInitializer() {
  ArrayInitializerContext *_localctx = _tracker.createInstance<ArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 316, EscriptParser::RuleArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1552);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(1542);
        match(EscriptParser::LBRACE);
        setState(1544);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
          | (1ULL << EscriptParser::BANG_B)
          | (1ULL << EscriptParser::TOK_ERROR)
          | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
          | (1ULL << (EscriptParser::ARRAY - 64))
          | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
          | (1ULL << (EscriptParser::HEX_LITERAL - 64))
          | (1ULL << (EscriptParser::OCT_LITERAL - 64))
          | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
          | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
          | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
          | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
          | (1ULL << (EscriptParser::STRING_LITERAL - 64))
          | (1ULL << (EscriptParser::NULL_LITERAL - 64))
          | (1ULL << (EscriptParser::LPAREN - 64))
          | (1ULL << (EscriptParser::LBRACE - 64))
          | (1ULL << (EscriptParser::ADD - 64))
          | (1ULL << (EscriptParser::SUB - 64))
          | (1ULL << (EscriptParser::TILDE - 64))
          | (1ULL << (EscriptParser::AT - 64))
          | (1ULL << (EscriptParser::INC - 64))
          | (1ULL << (EscriptParser::DEC - 64))
          | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
          setState(1543);
          expressionList();
        }
        setState(1546);
        match(EscriptParser::RBRACE);
        break;
      }

      case EscriptParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(1547);
        match(EscriptParser::LPAREN);
        setState(1549);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
          | (1ULL << EscriptParser::BANG_B)
          | (1ULL << EscriptParser::TOK_ERROR)
          | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
          | (1ULL << (EscriptParser::ARRAY - 64))
          | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
          | (1ULL << (EscriptParser::HEX_LITERAL - 64))
          | (1ULL << (EscriptParser::OCT_LITERAL - 64))
          | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
          | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
          | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
          | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
          | (1ULL << (EscriptParser::STRING_LITERAL - 64))
          | (1ULL << (EscriptParser::NULL_LITERAL - 64))
          | (1ULL << (EscriptParser::LPAREN - 64))
          | (1ULL << (EscriptParser::LBRACE - 64))
          | (1ULL << (EscriptParser::ADD - 64))
          | (1ULL << (EscriptParser::SUB - 64))
          | (1ULL << (EscriptParser::TILDE - 64))
          | (1ULL << (EscriptParser::AT - 64))
          | (1ULL << (EscriptParser::INC - 64))
          | (1ULL << (EscriptParser::DEC - 64))
          | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
          setState(1548);
          expressionList();
        }
        setState(1551);
        match(EscriptParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnambiguousArrayInitializerContext ------------------------------------------------------------------

EscriptParser::UnambiguousArrayInitializerContext::UnambiguousArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UnambiguousArrayInitializerContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousArrayInitializerContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

EscriptParser::UnambiguousExpressionListContext* EscriptParser::UnambiguousArrayInitializerContext::unambiguousExpressionList() {
  return getRuleContext<EscriptParser::UnambiguousExpressionListContext>(0);
}

tree::TerminalNode* EscriptParser::UnambiguousArrayInitializerContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousArrayInitializerContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

tree::TerminalNode* EscriptParser::UnambiguousArrayInitializerContext::COMMA() {
  return getToken(EscriptParser::COMMA, 0);
}


size_t EscriptParser::UnambiguousArrayInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleUnambiguousArrayInitializer;
}

void EscriptParser::UnambiguousArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnambiguousArrayInitializer(this);
}

void EscriptParser::UnambiguousArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnambiguousArrayInitializer(this);
}


antlrcpp::Any EscriptParser::UnambiguousArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnambiguousArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnambiguousArrayInitializerContext* EscriptParser::unambiguousArrayInitializer() {
  UnambiguousArrayInitializerContext *_localctx = _tracker.createInstance<UnambiguousArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 318, EscriptParser::RuleUnambiguousArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1578);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1554);
      match(EscriptParser::LBRACE);
      setState(1556);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1555);
        unambiguousExpressionList();
      }
      setState(1558);
      match(EscriptParser::RBRACE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1559);
      match(EscriptParser::LPAREN);
      setState(1561);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1560);
        unambiguousExpressionList();
      }
      setState(1563);
      match(EscriptParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1564);
      match(EscriptParser::LBRACE);
      setState(1566);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1565);
        unambiguousExpressionList();
      }
      setState(1568);
      match(EscriptParser::COMMA);
      setState(1569);
      match(EscriptParser::RBRACE);
      notifyErrorListeners("Expected expression following comma before right-brace in array initializer list");
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1571);
      match(EscriptParser::LPAREN);
      setState(1573);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::TOK_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(1572);
        unambiguousExpressionList();
      }
      setState(1575);
      match(EscriptParser::COMMA);
      setState(1576);
      match(EscriptParser::RPAREN);
      notifyErrorListeners("Expected expression following comma before right-paren in array initializer list");
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

EscriptParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::IntegerLiteralContext* EscriptParser::LiteralContext::integerLiteral() {
  return getRuleContext<EscriptParser::IntegerLiteralContext>(0);
}

EscriptParser::FloatLiteralContext* EscriptParser::LiteralContext::floatLiteral() {
  return getRuleContext<EscriptParser::FloatLiteralContext>(0);
}

tree::TerminalNode* EscriptParser::LiteralContext::CHAR_LITERAL() {
  return getToken(EscriptParser::CHAR_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::LiteralContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::LiteralContext::NULL_LITERAL() {
  return getToken(EscriptParser::NULL_LITERAL, 0);
}


size_t EscriptParser::LiteralContext::getRuleIndex() const {
  return EscriptParser::RuleLiteral;
}

void EscriptParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void EscriptParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any EscriptParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::LiteralContext* EscriptParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 320, EscriptParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1585);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::DECIMAL_LITERAL:
      case EscriptParser::HEX_LITERAL:
      case EscriptParser::OCT_LITERAL:
      case EscriptParser::BINARY_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(1580);
        integerLiteral();
        break;
      }

      case EscriptParser::FLOAT_LITERAL:
      case EscriptParser::HEX_FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(1581);
        floatLiteral();
        break;
      }

      case EscriptParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(1582);
        match(EscriptParser::CHAR_LITERAL);
        break;
      }

      case EscriptParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(1583);
        match(EscriptParser::STRING_LITERAL);
        break;
      }

      case EscriptParser::NULL_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(1584);
        match(EscriptParser::NULL_LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

EscriptParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::IntegerLiteralContext::DECIMAL_LITERAL() {
  return getToken(EscriptParser::DECIMAL_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::IntegerLiteralContext::HEX_LITERAL() {
  return getToken(EscriptParser::HEX_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::IntegerLiteralContext::OCT_LITERAL() {
  return getToken(EscriptParser::OCT_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::IntegerLiteralContext::BINARY_LITERAL() {
  return getToken(EscriptParser::BINARY_LITERAL, 0);
}


size_t EscriptParser::IntegerLiteralContext::getRuleIndex() const {
  return EscriptParser::RuleIntegerLiteral;
}

void EscriptParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void EscriptParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}


antlrcpp::Any EscriptParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::IntegerLiteralContext* EscriptParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 322, EscriptParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1587);
    _la = _input->LA(1);
    if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (EscriptParser::DECIMAL_LITERAL - 68))
      | (1ULL << (EscriptParser::HEX_LITERAL - 68))
      | (1ULL << (EscriptParser::OCT_LITERAL - 68))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 68)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

EscriptParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::FloatLiteralContext::FLOAT_LITERAL() {
  return getToken(EscriptParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::FloatLiteralContext::HEX_FLOAT_LITERAL() {
  return getToken(EscriptParser::HEX_FLOAT_LITERAL, 0);
}


size_t EscriptParser::FloatLiteralContext::getRuleIndex() const {
  return EscriptParser::RuleFloatLiteral;
}

void EscriptParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void EscriptParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


antlrcpp::Any EscriptParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FloatLiteralContext* EscriptParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 324, EscriptParser::RuleFloatLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1589);
    _la = _input->LA(1);
    if (!(_la == EscriptParser::FLOAT_LITERAL

    || _la == EscriptParser::HEX_FLOAT_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool EscriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 131: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool EscriptParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 13);
    case 2: return precpred(_ctx, 12);
    case 3: return precpred(_ctx, 11);
    case 4: return precpred(_ctx, 10);
    case 5: return precpred(_ctx, 9);
    case 6: return precpred(_ctx, 8);
    case 7: return precpred(_ctx, 7);
    case 8: return precpred(_ctx, 6);
    case 9: return precpred(_ctx, 5);
    case 10: return precpred(_ctx, 4);
    case 11: return precpred(_ctx, 3);
    case 12: return precpred(_ctx, 1);
    case 13: return precpred(_ctx, 27);
    case 14: return precpred(_ctx, 26);
    case 15: return precpred(_ctx, 17);
    case 16: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> EscriptParser::_decisionToDFA;
atn::PredictionContextCache EscriptParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN EscriptParser::_atn;
std::vector<uint16_t> EscriptParser::_serializedATN;

std::vector<std::string> EscriptParser::_ruleNames = {
  "unambiguousCompilationUnit", "compilationUnit", "moduleUnit", "unambiguousModuleUnit", 
  "moduleDeclarationStatement", "unambiguousModuleDeclarationStatement", 
  "moduleFunctionDeclaration", "unambiguousModuleFunctionDeclaration", "moduleFunctionParameterList", 
  "unambiguousModuleFunctionParameterList", "moduleFunctionParameter", "unambiguousModuleFunctionParameter", 
  "unitExpression", "topLevelDeclaration", "unambiguousTopLevelDeclaration", 
  "functionDeclaration", "unambiguousFunctionDeclaration", "stringIdentifier", 
  "useDeclaration", "includeDeclaration", "programDeclaration", "unambiguousProgramDeclaration", 
  "unambiguousStatement", "statement", "statementLabel", "ifStatement", 
  "unambiguousIfStatement", "gotoStatement", "returnStatement", "unambiguousReturnStatement", 
  "constStatement", "unambiguousConstStatement", "varStatement", "unambiguousVarStatement", 
  "doStatement", "unambiguousDoStatement", "whileStatement", "unambiguousWhileStatement", 
  "exitStatement", "declareStatement", "breakStatement", "continueStatement", 
  "forStatement", "unambiguousForStatement", "foreachStatement", "unambiguousForeachStatement", 
  "repeatStatement", "unambiguousRepeatStatement", "caseStatement", "unambiguousCaseStatement", 
  "enumStatement", "unambiguousEnumStatement", "block", "unambiguousBlock", 
  "variableDeclarationInitializer", "unambiguousVariableDeclarationInitializer", 
  "enumList", "unambiguousEnumList", "enumListEntry", "unambiguousEnumListEntry", 
  "switchBlockStatementGroup", "unambiguousSwitchBlockStatementGroup", "switchLabel", 
  "forGroup", "unambiguousForGroup", "basicForStatement", "unambiguousBasicForStatement", 
  "cstyleForStatement", "unambiguousCstyleForStatement", "identifierList", 
  "variableDeclarationList", "unambiguousVariableDeclarationList", "variableDeclaration", 
  "unambiguousVariableDeclaration", "programParameters", "programParameterList", 
  "programParameter", "unambiguousProgramParameters", "unambiguousProgramParameterList", 
  "unambiguousProgramParameter", "functionParameters", "functionParameterList", 
  "functionParameter", "unambiguousFunctionParameters", "unambiguousFunctionParameterList", 
  "unambiguousFunctionParameter", "scopedMethodCall", "unambiguousExpression", 
  "assignmentOperator", "membership", "membershipOperator", "disjunction", 
  "disjunctionOperator", "conjunction", "conjunctionOperator", "equality", 
  "equalityOperator", "bitwiseDisjunction", "bitwiseXor", "bitwiseConjunction", 
  "bitshiftRight", "bitshiftLeft", "comparison", "comparisonOperator", "infixOperation", 
  "infixOperator", "elvisExpression", "additiveExpression", "additiveOperator", 
  "multiplicativeExpression", "multiplicativeOperator", "prefixUnaryInversionExpression", 
  "prefixUnaryInversionOperator", "prefixUnaryArithmeticExpression", "prefixUnaryArithmeticOperator", 
  "postfixUnaryExpression", "postfixUnaryOperator", "indexingSuffix", "navigationSuffix", 
  "membershipSuffix", "memberCallSuffix", "memberAccessOperator", "callSuffix", 
  "atomicExpression", "functionReference", "unambiguousExplicitArrayInitializer", 
  "unambiguousExplicitStructInitializer", "unambiguousExplicitDictInitializer", 
  "unambiguousExplicitErrorInitializer", "unambiguousBareArrayInitializer", 
  "parenthesizedExpression", "expression", "primary", "parExpression", "expressionList", 
  "unambiguousExpressionList", "methodCallArgument", "methodCallArgumentList", 
  "methodCall", "valueArgumentList", "valueArguments", "unambiguousFunctionCallArgument", 
  "unambiguousFunctionCall", "unambiguousScopedFunctionCall", "unambiguousFunctionCallArgumentList", 
  "memberCall", "structInitializerExpression", "structInitializerExpressionList", 
  "structInitializer", "unambiguousStructInitializerExpression", "unambiguousStructInitializerExpressionList", 
  "unambiguousStructInitializer", "dictInitializerExpression", "unambiguousDictInitializerExpression", 
  "dictInitializerExpressionList", "unambiguousDictInitializerExpressionList", 
  "dictInitializer", "unambiguousDictInitializer", "arrayInitializer", "unambiguousArrayInitializer", 
  "literal", "integerLiteral", "floatLiteral"
};

std::vector<std::string> EscriptParser::_literalNames = {
  "", "'if'", "'then'", "'elseif'", "'endif'", "'else'", "'goto'", "'return'", 
  "'const'", "'var'", "'do'", "'dowhile'", "'while'", "'endwhile'", "'exit'", 
  "'declare'", "'function'", "'endfunction'", "'exported'", "'use'", "'include'", 
  "'break'", "'continue'", "'for'", "'endfor'", "'to'", "'foreach'", "'endforeach'", 
  "'repeat'", "'until'", "'program'", "'endprogram'", "'case'", "'default'", 
  "'endcase'", "'enum'", "'endenum'", "'downto'", "'step'", "'reference'", 
  "'out'", "'inout'", "'ByVal'", "'string'", "'long'", "'integer'", "'unsigned'", 
  "'signed'", "'real'", "'float'", "'double'", "'as'", "'is'", "'&&'", "'and'", 
  "'||'", "'or'", "'!'", "'not'", "'byref'", "'unused'", "'error'", "'hash'", 
  "'dictionary'", "'struct'", "'array'", "'stack'", "'in'", "", "", "", 
  "", "", "", "", "", "'null'", "'('", "')'", "'['", "']'", "'{'", "'}'", 
  "'.'", "'->'", "'*'", "'/'", "'%'", "'+'", "'-'", "'+='", "'-='", "'*='", 
  "'/='", "'%='", "'<='", "'<'", "'>='", "'>'", "'>>'", "'<<'", "'&'", "'^'", 
  "'|'", "'<>'", "'!='", "'='", "'=='", "':='", "'.+'", "'.-'", "'.?'", 
  "';'", "','", "'~'", "'@'", "'::'", "':'", "'++'", "'--'", "'?:'"
};

std::vector<std::string> EscriptParser::_symbolicNames = {
  "", "IF", "THEN", "ELSEIF", "ENDIF", "ELSE", "GOTO", "RETURN", "TOK_CONST", 
  "VAR", "DO", "DOWHILE", "WHILE", "ENDWHILE", "EXIT", "DECLARE", "FUNCTION", 
  "ENDFUNCTION", "EXPORTED", "USE", "INCLUDE", "BREAK", "CONTINUE", "FOR", 
  "ENDFOR", "TO", "FOREACH", "ENDFOREACH", "REPEAT", "UNTIL", "PROGRAM", 
  "ENDPROGRAM", "CASE", "DEFAULT", "ENDCASE", "ENUM", "ENDENUM", "DOWNTO", 
  "STEP", "REFERENCE", "TOK_OUT", "INOUT", "BYVAL", "STRING", "TOK_LONG", 
  "INTEGER", "UNSIGNED", "SIGNED", "REAL", "FLOAT", "DOUBLE", "AS", "IS", 
  "AND_A", "AND_B", "OR_A", "OR_B", "BANG_A", "BANG_B", "BYREF", "UNUSED", 
  "TOK_ERROR", "HASH", "DICTIONARY", "STRUCT", "ARRAY", "STACK", "TOK_IN", 
  "DECIMAL_LITERAL", "HEX_LITERAL", "OCT_LITERAL", "BINARY_LITERAL", "FLOAT_LITERAL", 
  "HEX_FLOAT_LITERAL", "CHAR_LITERAL", "STRING_LITERAL", "NULL_LITERAL", 
  "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", "DOT", "ARROW", 
  "MUL", "DIV", "MOD", "ADD", "SUB", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", 
  "DIV_ASSIGN", "MOD_ASSIGN", "LE", "LT", "GE", "GT", "RSHIFT", "LSHIFT", 
  "BITAND", "CARET", "BITOR", "NOTEQUAL_A", "NOTEQUAL_B", "EQUAL_DEPRECATED", 
  "EQUAL", "ASSIGN", "ADDMEMBER", "DELMEMBER", "CHKMEMBER", "SEMI", "COMMA", 
  "TILDE", "AT", "COLONCOLON", "COLON", "INC", "DEC", "ELVIS", "WS", "COMMENT", 
  "LINE_COMMENT", "IDENTIFIER"
};

dfa::Vocabulary EscriptParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> EscriptParser::_tokenNames;

EscriptParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x7e, 0x63a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x4, 0x98, 0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 
    0x9a, 0x4, 0x9b, 0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 
    0x4, 0x9e, 0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 
    0xa1, 0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
    0x9, 0xa4, 0x3, 0x2, 0x7, 0x2, 0x14a, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x14d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x152, 0xa, 
    0x3, 0xc, 0x3, 0xe, 0x3, 0x155, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x7, 0x4, 0x15a, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x15d, 0xb, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x7, 0x5, 0x162, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0x165, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x16b, 
    0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x16f, 0xa, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0x174, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x17c, 0xa, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x184, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0x187, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 
    0xb, 0x18c, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x18f, 0xb, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x194, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x5, 0xd, 0x199, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x19d, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0x1a4, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0x1ab, 0xa, 0x10, 0x3, 0x11, 0x5, 0x11, 0x1ae, 0xa, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x12, 0x5, 0x12, 0x1b7, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x1e7, 0xa, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x5, 0x19, 0x1fd, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x205, 0xa, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x20c, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x20f, 0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 
    0x213, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x5, 0x1c, 0x21a, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x7, 0x1c, 0x221, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x224, 
    0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x228, 0xa, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 
    0x1e, 0x5, 0x1e, 0x232, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x5, 0x1f, 0x238, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x5, 0x24, 0x24d, 0xa, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x5, 
    0x25, 0x256, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x5, 0x26, 0x25f, 0xa, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x5, 0x27, 0x267, 
    0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x278, 0xa, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x27e, 0xa, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2c, 0x5, 0x2c, 0x283, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x5, 0x2d, 0x28a, 0xa, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x5, 0x2e, 0x291, 0xa, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2f, 0x5, 0x2f, 0x29b, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x5, 
    0x30, 0x2a5, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x5, 0x31, 0x2ae, 0xa, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x5, 
    0x32, 0x2b7, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x6, 0x32, 0x2be, 0xa, 0x32, 0xd, 0x32, 0xe, 0x32, 0x2bf, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x5, 0x33, 0x2c5, 0xa, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x6, 0x33, 0x2cc, 0xa, 0x33, 
    0xd, 0x33, 0xe, 0x33, 0x2cd, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x36, 0x7, 0x36, 0x2dd, 0xa, 0x36, 0xc, 0x36, 
    0xe, 0x36, 0x2e0, 0xb, 0x36, 0x3, 0x37, 0x7, 0x37, 0x2e3, 0xa, 0x37, 
    0xc, 0x37, 0xe, 0x37, 0x2e6, 0xb, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x5, 0x38, 0x2eb, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x2f4, 0xa, 0x39, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x2f9, 0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 
    0x2fc, 0xb, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2ff, 0xa, 0x3a, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x304, 0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 
    0x307, 0xb, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x30a, 0xa, 0x3b, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x30f, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x5, 0x3d, 0x314, 0xa, 0x3d, 0x3, 0x3e, 0x6, 0x3e, 0x317, 
    0xa, 0x3e, 0xd, 0x3e, 0xe, 0x3e, 0x318, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 
    0x3, 0x3f, 0x7, 0x3f, 0x31f, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x322, 
    0xb, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 
    0x40, 0x329, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 
    0x32e, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x332, 0xa, 0x41, 
    0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x336, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x47, 0x5, 0x47, 0x35b, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x7, 0x48, 0x360, 0xa, 0x48, 0xc, 0x48, 0xe, 0x48, 0x363, 0xb, 0x48, 
    0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x368, 0xa, 0x49, 0xc, 0x49, 
    0xe, 0x49, 0x36b, 0xb, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x36f, 
    0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x373, 0xa, 0x4b, 0x3, 0x4c, 
    0x3, 0x4c, 0x5, 0x4c, 0x377, 0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 
    0x3, 0x4d, 0x5, 0x4d, 0x37d, 0xa, 0x4d, 0x3, 0x4d, 0x7, 0x4d, 0x380, 
    0xa, 0x4d, 0xc, 0x4d, 0xe, 0x4d, 0x383, 0xb, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x38a, 0xa, 0x4e, 0x5, 0x4e, 
    0x38c, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x390, 0xa, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x396, 0xa, 0x50, 
    0x3, 0x50, 0x7, 0x50, 0x399, 0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x39c, 
    0xb, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 
    0x51, 0x3a3, 0xa, 0x51, 0x5, 0x51, 0x3a5, 0xa, 0x51, 0x3, 0x52, 0x3, 
    0x52, 0x5, 0x52, 0x3a9, 0xa, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x3b0, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 
    0x3b3, 0xb, 0x53, 0x3, 0x54, 0x5, 0x54, 0x3b6, 0xa, 0x54, 0x3, 0x54, 
    0x5, 0x54, 0x3b9, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 
    0x3be, 0xa, 0x54, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x3c2, 0xa, 0x55, 
    0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 0x3c9, 
    0xa, 0x56, 0xc, 0x56, 0xe, 0x56, 0x3cc, 0xb, 0x56, 0x3, 0x57, 0x5, 0x57, 
    0x3cf, 0xa, 0x57, 0x3, 0x57, 0x5, 0x57, 0x3d2, 0xa, 0x57, 0x3, 0x57, 
    0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x3d7, 0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x7, 
    0x59, 0x3e1, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x3e4, 0xb, 0x59, 0x3, 
    0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x7, 0x5b, 
    0x3ec, 0xa, 0x5b, 0xc, 0x5b, 0xe, 0x5b, 0x3ef, 0xb, 0x5b, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x7, 0x5d, 0x3f7, 
    0xa, 0x5d, 0xc, 0x5d, 0xe, 0x5d, 0x3fa, 0xb, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x7, 0x5f, 0x402, 0xa, 0x5f, 
    0xc, 0x5f, 0xe, 0x5f, 0x405, 0xb, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x7, 0x61, 0x40d, 0xa, 0x61, 0xc, 0x61, 
    0xe, 0x61, 0x410, 0xb, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 
    0x3, 0x63, 0x7, 0x63, 0x417, 0xa, 0x63, 0xc, 0x63, 0xe, 0x63, 0x41a, 
    0xb, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x7, 0x64, 0x41f, 0xa, 0x64, 
    0xc, 0x64, 0xe, 0x64, 0x422, 0xb, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
    0x7, 0x65, 0x427, 0xa, 0x65, 0xc, 0x65, 0xe, 0x65, 0x42a, 0xb, 0x65, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x7, 0x66, 0x42f, 0xa, 0x66, 0xc, 0x66, 
    0xe, 0x66, 0x432, 0xb, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x7, 0x67, 
    0x437, 0xa, 0x67, 0xc, 0x67, 0xe, 0x67, 0x43a, 0xb, 0x67, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x7, 0x68, 0x440, 0xa, 0x68, 0xc, 0x68, 
    0xe, 0x68, 0x443, 0xb, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x7, 0x6a, 0x44b, 0xa, 0x6a, 0xc, 0x6a, 0xe, 0x6a, 
    0x44e, 0xb, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 
    0x7, 0x6c, 0x455, 0xa, 0x6c, 0xc, 0x6c, 0xe, 0x6c, 0x458, 0xb, 0x6c, 
    0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x7, 0x6d, 0x45e, 0xa, 0x6d, 
    0xc, 0x6d, 0xe, 0x6d, 0x461, 0xb, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 
    0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x7, 0x6f, 0x469, 0xa, 0x6f, 0xc, 0x6f, 
    0xe, 0x6f, 0x46c, 0xb, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x7, 0x71, 
    0x471, 0xa, 0x71, 0xc, 0x71, 0xe, 0x71, 0x474, 0xb, 0x71, 0x3, 0x71, 
    0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x73, 0x7, 0x73, 0x47b, 0xa, 0x73, 
    0xc, 0x73, 0xe, 0x73, 0x47e, 0xb, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x74, 
    0x3, 0x74, 0x3, 0x75, 0x3, 0x75, 0x7, 0x75, 0x486, 0xa, 0x75, 0xc, 0x75, 
    0xe, 0x75, 0x489, 0xb, 0x75, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 
    0x3, 0x76, 0x5, 0x76, 0x490, 0xa, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 
    0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 
    0x79, 0x3, 0x79, 0x5, 0x79, 0x49d, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 
    0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x4a3, 0xa, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 
    0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x4b6, 0xa, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 
    0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x4bd, 0xa, 0x7f, 0x3, 0x80, 
    0x3, 0x80, 0x5, 0x80, 0x4c1, 0xa, 0x80, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 
    0x4c5, 0xa, 0x81, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x4c9, 0xa, 0x82, 
    0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x4cd, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x5, 0x83, 0x4d2, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 
    0x5, 0x83, 0x4d7, 0xa, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 
    0x85, 0x4e3, 0xa, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x4e7, 0xa, 
    0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x4eb, 0xa, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x5, 0x85, 0x4ef, 0xa, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 
    0x4f3, 0xa, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x5, 0x85, 0x4fb, 0xa, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
    0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
    0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
    0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x529, 0xa, 0x85, 0x3, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
    0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x537, 0xa, 0x85, 
    0x7, 0x85, 0x539, 0xa, 0x85, 0xc, 0x85, 0xe, 0x85, 0x53c, 0xb, 0x85, 
    0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 
    0x86, 0x544, 0xa, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x7, 0x88, 0x54d, 0xa, 0x88, 0xc, 0x88, 
    0xe, 0x88, 0x550, 0xb, 0x88, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x7, 0x89, 
    0x555, 0xa, 0x89, 0xc, 0x89, 0xe, 0x89, 0x558, 0xb, 0x89, 0x3, 0x8a, 
    0x3, 0x8a, 0x5, 0x8a, 0x55c, 0xa, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 
    0x3, 0x8b, 0x3, 0x8b, 0x7, 0x8b, 0x563, 0xa, 0x8b, 0xc, 0x8b, 0xe, 0x8b, 
    0x566, 0xb, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x56b, 
    0xa, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x7, 
    0x8d, 0x572, 0xa, 0x8d, 0xc, 0x8d, 0xe, 0x8d, 0x575, 0xb, 0x8d, 0x3, 
    0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x5, 0x8e, 
    0x57d, 0xa, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 
    0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 0x3, 
    0x92, 0x7, 0x92, 0x58b, 0xa, 0x92, 0xc, 0x92, 0xe, 0x92, 0x58e, 0xb, 
    0x92, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x5, 0x93, 0x593, 0xa, 0x93, 
    0x3, 0x93, 0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x59a, 
    0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x59f, 0xa, 0x94, 
    0x5, 0x94, 0x5a1, 0xa, 0x94, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x7, 0x95, 
    0x5a6, 0xa, 0x95, 0xc, 0x95, 0xe, 0x95, 0x5a9, 0xb, 0x95, 0x3, 0x96, 
    0x3, 0x96, 0x5, 0x96, 0x5ad, 0xa, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 
    0x3, 0x97, 0x3, 0x97, 0x5, 0x97, 0x5b4, 0xa, 0x97, 0x3, 0x97, 0x3, 0x97, 
    0x3, 0x97, 0x5, 0x97, 0x5b9, 0xa, 0x97, 0x5, 0x97, 0x5bb, 0xa, 0x97, 
    0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x7, 0x98, 0x5c0, 0xa, 0x98, 0xc, 0x98, 
    0xe, 0x98, 0x5c3, 0xb, 0x98, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x5c7, 
    0xa, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x5cc, 0xa, 0x99, 
    0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x5d1, 0xa, 0x99, 0x3, 0x9a, 
    0x3, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 0x5d6, 0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 
    0x3, 0x9b, 0x5, 0x9b, 0x5db, 0xa, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 
    0x7, 0x9c, 0x5e0, 0xa, 0x9c, 0xc, 0x9c, 0xe, 0x9c, 0x5e3, 0xb, 0x9c, 
    0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x7, 0x9d, 0x5e8, 0xa, 0x9d, 0xc, 0x9d, 
    0xe, 0x9d, 0x5eb, 0xb, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x5ef, 
    0xa, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x5f4, 0xa, 0x9e, 
    0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x5f9, 0xa, 0x9e, 0x3, 0x9f, 
    0x3, 0x9f, 0x5, 0x9f, 0x5fd, 0xa, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 
    0x5, 0x9f, 0x602, 0xa, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x5, 0x9f, 
    0x607, 0xa, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x60b, 0xa, 0xa0, 
    0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x610, 0xa, 0xa0, 0x3, 0xa0, 
    0x5, 0xa0, 0x613, 0xa, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x617, 
    0xa, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x61c, 0xa, 0xa1, 
    0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x621, 0xa, 0xa1, 0x3, 0xa1, 
    0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x628, 0xa, 0xa1, 
    0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x62d, 0xa, 0xa1, 0x3, 0xa2, 
    0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x634, 0xa, 0xa2, 
    0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x2, 0x3, 0x108, 
    0xa5, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
    0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 
    0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
    0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 
    0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 
    0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 
    0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 
    0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 
    0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 
    0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 
    0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 
    0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 
    0x144, 0x146, 0x2, 0x11, 0x4, 0x2, 0x4d, 0x4d, 0x7e, 0x7e, 0x4, 0x2, 
    0x5c, 0x60, 0x6e, 0x6e, 0x3, 0x2, 0x6f, 0x71, 0x3, 0x2, 0x39, 0x3a, 
    0x3, 0x2, 0x37, 0x38, 0x3, 0x2, 0x6a, 0x6d, 0x3, 0x2, 0x61, 0x64, 0x3, 
    0x2, 0x5a, 0x5b, 0x3, 0x2, 0x57, 0x59, 0x4, 0x2, 0x3b, 0x3c, 0x74, 0x74, 
    0x4, 0x2, 0x5a, 0x5b, 0x78, 0x79, 0x3, 0x2, 0x65, 0x66, 0x3, 0x2, 0x78, 
    0x79, 0x3, 0x2, 0x46, 0x49, 0x3, 0x2, 0x4a, 0x4b, 0x2, 0x68d, 0x2, 0x14b, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x153, 0x3, 0x2, 0x2, 0x2, 0x6, 0x15b, 0x3, 
    0x2, 0x2, 0x2, 0x8, 0x163, 0x3, 0x2, 0x2, 0x2, 0xa, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x16e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x170, 0x3, 0x2, 0x2, 
    0x2, 0x10, 0x178, 0x3, 0x2, 0x2, 0x2, 0x12, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x14, 0x188, 0x3, 0x2, 0x2, 0x2, 0x16, 0x190, 0x3, 0x2, 0x2, 0x2, 0x18, 
    0x195, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1a3, 
    0x3, 0x2, 0x2, 0x2, 0x1e, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x22, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1be, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1c4, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x1fe, 0x3, 0x2, 0x2, 0x2, 0x34, 0x201, 0x3, 0x2, 0x2, 0x2, 0x36, 0x216, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x22f, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x235, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x23b, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x243, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x247, 0x3, 0x2, 0x2, 0x2, 0x46, 0x24c, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x255, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x266, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x270, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x275, 0x3, 0x2, 0x2, 0x2, 0x54, 0x27b, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x282, 0x3, 0x2, 0x2, 0x2, 0x58, 0x289, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x290, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x29a, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x60, 0x2ad, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x64, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x2d1, 0x3, 0x2, 0x2, 0x2, 0x68, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2de, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2ea, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2f5, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x300, 0x3, 0x2, 0x2, 0x2, 0x76, 0x30b, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x310, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x316, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x331, 0x3, 0x2, 0x2, 0x2, 0x82, 0x335, 0x3, 0x2, 0x2, 0x2, 0x84, 0x337, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x88, 0x345, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x357, 0x3, 0x2, 
    0x2, 0x2, 0x8e, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x90, 0x364, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x94, 0x370, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x374, 0x3, 0x2, 0x2, 0x2, 0x98, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x38b, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x393, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x3a6, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x3b5, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x3c5, 0x3, 0x2, 0x2, 
    0x2, 0xac, 0x3ce, 0x3, 0x2, 0x2, 0x2, 0xae, 0x3d8, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0x3e7, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x3f2, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x3fd, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0x406, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x408, 0x3, 0x2, 
    0x2, 0x2, 0xc2, 0x411, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x413, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0x41b, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x423, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0x42b, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x433, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0x43b, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x444, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x446, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0x44f, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x451, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0x459, 0x3, 0x2, 0x2, 0x2, 0xda, 0x462, 0x3, 0x2, 
    0x2, 0x2, 0xdc, 0x464, 0x3, 0x2, 0x2, 0x2, 0xde, 0x46d, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0x472, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x477, 0x3, 0x2, 0x2, 0x2, 
    0xe4, 0x47c, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x481, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0x483, 0x3, 0x2, 0x2, 0x2, 0xea, 0x48f, 0x3, 0x2, 0x2, 0x2, 0xec, 0x491, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0x495, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x498, 0x3, 
    0x2, 0x2, 0x2, 0xf2, 0x49e, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x4a6, 0x3, 0x2, 
    0x2, 0x2, 0xf6, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x4b5, 0x3, 0x2, 0x2, 
    0x2, 0xfa, 0x4b7, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x4ba, 0x3, 0x2, 0x2, 0x2, 
    0xfe, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x100, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x4c6, 0x3, 0x2, 0x2, 0x2, 0x104, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x4d8, 0x3, 0x2, 0x2, 0x2, 0x108, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x543, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x545, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x549, 0x3, 0x2, 0x2, 0x2, 0x110, 0x551, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x55b, 0x3, 0x2, 0x2, 0x2, 0x114, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x116, 
    0x567, 0x3, 0x2, 0x2, 0x2, 0x118, 0x56e, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x57c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x57e, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x580, 0x3, 0x2, 0x2, 0x2, 0x120, 0x583, 0x3, 0x2, 0x2, 0x2, 0x122, 
    0x587, 0x3, 0x2, 0x2, 0x2, 0x124, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x126, 
    0x5a0, 0x3, 0x2, 0x2, 0x2, 0x128, 0x5a2, 0x3, 0x2, 0x2, 0x2, 0x12a, 
    0x5aa, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x5bc, 0x3, 0x2, 0x2, 0x2, 0x130, 0x5d0, 0x3, 0x2, 0x2, 0x2, 0x132, 
    0x5d2, 0x3, 0x2, 0x2, 0x2, 0x134, 0x5d7, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x5dc, 0x3, 0x2, 0x2, 0x2, 0x138, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x13a, 
    0x5f8, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x606, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x612, 0x3, 0x2, 0x2, 0x2, 0x140, 0x62c, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x633, 0x3, 0x2, 0x2, 0x2, 0x144, 0x635, 0x3, 0x2, 0x2, 0x2, 0x146, 
    0x637, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14a, 0x5, 0x1e, 0x10, 0x2, 0x149, 
    0x148, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14b, 
    0x149, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 
    0x14e, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14e, 
    0x14f, 0x7, 0x2, 0x2, 0x3, 0x14f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x150, 0x152, 
    0x5, 0x1c, 0xf, 0x2, 0x151, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x155, 
    0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 
    0x3, 0x2, 0x2, 0x2, 0x154, 0x156, 0x3, 0x2, 0x2, 0x2, 0x155, 0x153, 
    0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x7, 0x2, 0x2, 0x3, 0x157, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x158, 0x15a, 0x5, 0xa, 0x6, 0x2, 0x159, 0x158, 0x3, 
    0x2, 0x2, 0x2, 0x15a, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15e, 0x3, 
    0x2, 0x2, 0x2, 0x15d, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x7, 
    0x2, 0x2, 0x3, 0x15f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x160, 0x162, 0x5, 0xc, 
    0x7, 0x2, 0x161, 0x160, 0x3, 0x2, 0x2, 0x2, 0x162, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x161, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x166, 0x3, 0x2, 0x2, 0x2, 0x165, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x167, 0x7, 0x2, 0x2, 0x3, 0x167, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x168, 0x16b, 0x5, 0xe, 0x8, 0x2, 0x169, 0x16b, 0x5, 0x3e, 0x20, 
    0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x169, 0x3, 0x2, 0x2, 
    0x2, 0x16b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16f, 0x5, 0x10, 0x9, 0x2, 
    0x16d, 0x16f, 0x5, 0x40, 0x21, 0x2, 0x16e, 0x16c, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x170, 
    0x171, 0x7, 0x7e, 0x2, 0x2, 0x171, 0x173, 0x7, 0x4f, 0x2, 0x2, 0x172, 
    0x174, 0x5, 0x12, 0xa, 0x2, 0x173, 0x172, 0x3, 0x2, 0x2, 0x2, 0x173, 
    0x174, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 
    0x176, 0x7, 0x50, 0x2, 0x2, 0x176, 0x177, 0x7, 0x72, 0x2, 0x2, 0x177, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x7, 0x7e, 0x2, 0x2, 0x179, 0x17b, 
    0x7, 0x4f, 0x2, 0x2, 0x17a, 0x17c, 0x5, 0x14, 0xb, 0x2, 0x17b, 0x17a, 
    0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 
    0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x7, 0x50, 0x2, 0x2, 0x17e, 0x17f, 
    0x7, 0x72, 0x2, 0x2, 0x17f, 0x11, 0x3, 0x2, 0x2, 0x2, 0x180, 0x185, 
    0x5, 0x16, 0xc, 0x2, 0x181, 0x182, 0x7, 0x73, 0x2, 0x2, 0x182, 0x184, 
    0x5, 0x16, 0xc, 0x2, 0x183, 0x181, 0x3, 0x2, 0x2, 0x2, 0x184, 0x187, 
    0x3, 0x2, 0x2, 0x2, 0x185, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 
    0x3, 0x2, 0x2, 0x2, 0x186, 0x13, 0x3, 0x2, 0x2, 0x2, 0x187, 0x185, 0x3, 
    0x2, 0x2, 0x2, 0x188, 0x18d, 0x5, 0x18, 0xd, 0x2, 0x189, 0x18a, 0x7, 
    0x73, 0x2, 0x2, 0x18a, 0x18c, 0x5, 0x18, 0xd, 0x2, 0x18b, 0x189, 0x3, 
    0x2, 0x2, 0x2, 0x18c, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18b, 0x3, 
    0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x190, 0x193, 0x7, 0x7e, 
    0x2, 0x2, 0x191, 0x192, 0x7, 0x6e, 0x2, 0x2, 0x192, 0x194, 0x5, 0x108, 
    0x85, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x17, 0x3, 0x2, 0x2, 0x2, 0x195, 0x198, 0x7, 0x7e, 
    0x2, 0x2, 0x196, 0x197, 0x7, 0x6e, 0x2, 0x2, 0x197, 0x199, 0x5, 0xb0, 
    0x59, 0x2, 0x198, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x3, 0x2, 
    0x2, 0x2, 0x199, 0x19, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x5, 0x108, 
    0x85, 0x2, 0x19b, 0x19d, 0x7, 0x72, 0x2, 0x2, 0x19c, 0x19b, 0x3, 0x2, 
    0x2, 0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x1a4, 0x5, 0x26, 0x14, 0x2, 0x19f, 0x1a4, 0x5, 0x28, 0x15, 
    0x2, 0x1a0, 0x1a4, 0x5, 0x2a, 0x16, 0x2, 0x1a1, 0x1a4, 0x5, 0x20, 0x11, 
    0x2, 0x1a2, 0x1a4, 0x5, 0x30, 0x19, 0x2, 0x1a3, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a0, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a2, 0x3, 0x2, 0x2, 
    0x2, 0x1a4, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1ab, 0x5, 0x26, 0x14, 
    0x2, 0x1a6, 0x1ab, 0x5, 0x28, 0x15, 0x2, 0x1a7, 0x1ab, 0x5, 0x2c, 0x17, 
    0x2, 0x1a8, 0x1ab, 0x5, 0x22, 0x12, 0x2, 0x1a9, 0x1ab, 0x5, 0x2e, 0x18, 
    0x2, 0x1aa, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1a6, 0x3, 0x2, 0x2, 
    0x2, 0x1aa, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1a8, 0x3, 0x2, 0x2, 
    0x2, 0x1aa, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x1ac, 0x1ae, 0x7, 0x14, 0x2, 0x2, 0x1ad, 0x1ac, 0x3, 0x2, 0x2, 0x2, 
    0x1ad, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 0x2, 0x2, 
    0x1af, 0x1b0, 0x7, 0x12, 0x2, 0x2, 0x1b0, 0x1b1, 0x7, 0x7e, 0x2, 0x2, 
    0x1b1, 0x1b2, 0x5, 0xa2, 0x52, 0x2, 0x1b2, 0x1b3, 0x5, 0x6a, 0x36, 0x2, 
    0x1b3, 0x1b4, 0x7, 0x13, 0x2, 0x2, 0x1b4, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x1b5, 0x1b7, 0x7, 0x14, 0x2, 0x2, 0x1b6, 0x1b5, 0x3, 0x2, 0x2, 0x2, 
    0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 
    0x1b8, 0x1b9, 0x7, 0x12, 0x2, 0x2, 0x1b9, 0x1ba, 0x7, 0x7e, 0x2, 0x2, 
    0x1ba, 0x1bb, 0x5, 0xa8, 0x55, 0x2, 0x1bb, 0x1bc, 0x5, 0x6c, 0x37, 0x2, 
    0x1bc, 0x1bd, 0x7, 0x13, 0x2, 0x2, 0x1bd, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x1be, 0x1bf, 0x9, 0x2, 0x2, 0x2, 0x1bf, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1c0, 
    0x1c1, 0x7, 0x15, 0x2, 0x2, 0x1c1, 0x1c2, 0x5, 0x24, 0x13, 0x2, 0x1c2, 
    0x1c3, 0x7, 0x72, 0x2, 0x2, 0x1c3, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1c4, 
    0x1c5, 0x7, 0x16, 0x2, 0x2, 0x1c5, 0x1c6, 0x5, 0x24, 0x13, 0x2, 0x1c6, 
    0x1c7, 0x7, 0x72, 0x2, 0x2, 0x1c7, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1c8, 
    0x1c9, 0x7, 0x20, 0x2, 0x2, 0x1c9, 0x1ca, 0x7, 0x7e, 0x2, 0x2, 0x1ca, 
    0x1cb, 0x5, 0x96, 0x4c, 0x2, 0x1cb, 0x1cc, 0x5, 0x6a, 0x36, 0x2, 0x1cc, 
    0x1cd, 0x7, 0x21, 0x2, 0x2, 0x1cd, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1ce, 
    0x1cf, 0x7, 0x20, 0x2, 0x2, 0x1cf, 0x1d0, 0x7, 0x7e, 0x2, 0x2, 0x1d0, 
    0x1d1, 0x5, 0x9c, 0x4f, 0x2, 0x1d1, 0x1d2, 0x5, 0x6c, 0x37, 0x2, 0x1d2, 
    0x1d3, 0x7, 0x21, 0x2, 0x2, 0x1d3, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1d4, 
    0x1e7, 0x5, 0x36, 0x1c, 0x2, 0x1d5, 0x1e7, 0x5, 0x3c, 0x1f, 0x2, 0x1d6, 
    0x1e7, 0x5, 0x40, 0x21, 0x2, 0x1d7, 0x1e7, 0x5, 0x44, 0x23, 0x2, 0x1d8, 
    0x1e7, 0x5, 0x48, 0x25, 0x2, 0x1d9, 0x1e7, 0x5, 0x4c, 0x27, 0x2, 0x1da, 
    0x1e7, 0x5, 0x4e, 0x28, 0x2, 0x1db, 0x1e7, 0x5, 0x52, 0x2a, 0x2, 0x1dc, 
    0x1e7, 0x5, 0x54, 0x2b, 0x2, 0x1dd, 0x1e7, 0x5, 0x58, 0x2d, 0x2, 0x1de, 
    0x1e7, 0x5, 0x5c, 0x2f, 0x2, 0x1df, 0x1e7, 0x5, 0x60, 0x31, 0x2, 0x1e0, 
    0x1e7, 0x5, 0x64, 0x33, 0x2, 0x1e1, 0x1e7, 0x5, 0x68, 0x35, 0x2, 0x1e2, 
    0x1e7, 0x7, 0x72, 0x2, 0x2, 0x1e3, 0x1e4, 0x5, 0xb0, 0x59, 0x2, 0x1e4, 
    0x1e5, 0x7, 0x72, 0x2, 0x2, 0x1e5, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1da, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e7, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1fd, 0x5, 0x34, 0x1b, 0x2, 0x1e9, 
    0x1fd, 0x5, 0x38, 0x1d, 0x2, 0x1ea, 0x1fd, 0x5, 0x3a, 0x1e, 0x2, 0x1eb, 
    0x1fd, 0x5, 0x3e, 0x20, 0x2, 0x1ec, 0x1fd, 0x5, 0x42, 0x22, 0x2, 0x1ed, 
    0x1fd, 0x5, 0x46, 0x24, 0x2, 0x1ee, 0x1fd, 0x5, 0x4a, 0x26, 0x2, 0x1ef, 
    0x1fd, 0x5, 0x4e, 0x28, 0x2, 0x1f0, 0x1fd, 0x5, 0x50, 0x29, 0x2, 0x1f1, 
    0x1fd, 0x5, 0x52, 0x2a, 0x2, 0x1f2, 0x1fd, 0x5, 0x54, 0x2b, 0x2, 0x1f3, 
    0x1fd, 0x5, 0x56, 0x2c, 0x2, 0x1f4, 0x1fd, 0x5, 0x5a, 0x2e, 0x2, 0x1f5, 
    0x1fd, 0x5, 0x5e, 0x30, 0x2, 0x1f6, 0x1fd, 0x5, 0x62, 0x32, 0x2, 0x1f7, 
    0x1fd, 0x5, 0x66, 0x34, 0x2, 0x1f8, 0x1fd, 0x7, 0x72, 0x2, 0x2, 0x1f9, 
    0x1fa, 0x5, 0x108, 0x85, 0x2, 0x1fa, 0x1fb, 0x7, 0x72, 0x2, 0x2, 0x1fb, 
    0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 
    0x7, 0x7e, 0x2, 0x2, 0x1ff, 0x200, 0x7, 0x77, 0x2, 0x2, 0x200, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 0x7, 0x3, 0x2, 0x2, 0x202, 0x204, 
    0x5, 0x10c, 0x87, 0x2, 0x203, 0x205, 0x7, 0x4, 0x2, 0x2, 0x204, 0x203, 
    0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 
    0x3, 0x2, 0x2, 0x2, 0x206, 0x20d, 0x5, 0x6a, 0x36, 0x2, 0x207, 0x208, 
    0x7, 0x5, 0x2, 0x2, 0x208, 0x209, 0x5, 0x10c, 0x87, 0x2, 0x209, 0x20a, 
    0x5, 0x6a, 0x36, 0x2, 0x20a, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x207, 
    0x3, 0x2, 0x2, 0x2, 0x20c, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20b, 
    0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x212, 
    0x3, 0x2, 0x2, 0x2, 0x20f, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 
    0x7, 0x7, 0x2, 0x2, 0x211, 0x213, 0x5, 0x6a, 0x36, 0x2, 0x212, 0x210, 
    0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 
    0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x7, 0x6, 0x2, 0x2, 0x215, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x216, 0x217, 0x7, 0x3, 0x2, 0x2, 0x217, 0x219, 0x5, 
    0x106, 0x84, 0x2, 0x218, 0x21a, 0x7, 0x4, 0x2, 0x2, 0x219, 0x218, 0x3, 
    0x2, 0x2, 0x2, 0x219, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x3, 
    0x2, 0x2, 0x2, 0x21b, 0x222, 0x5, 0x6c, 0x37, 0x2, 0x21c, 0x21d, 0x7, 
    0x5, 0x2, 0x2, 0x21d, 0x21e, 0x5, 0x106, 0x84, 0x2, 0x21e, 0x21f, 0x5, 
    0x6c, 0x37, 0x2, 0x21f, 0x221, 0x3, 0x2, 0x2, 0x2, 0x220, 0x21c, 0x3, 
    0x2, 0x2, 0x2, 0x221, 0x224, 0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 0x3, 
    0x2, 0x2, 0x2, 0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x227, 0x3, 
    0x2, 0x2, 0x2, 0x224, 0x222, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x7, 
    0x7, 0x2, 0x2, 0x226, 0x228, 0x5, 0x6c, 0x37, 0x2, 0x227, 0x225, 0x3, 
    0x2, 0x2, 0x2, 0x227, 0x228, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x3, 
    0x2, 0x2, 0x2, 0x229, 0x22a, 0x7, 0x6, 0x2, 0x2, 0x22a, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x22b, 0x22c, 0x7, 0x8, 0x2, 0x2, 0x22c, 0x22d, 0x7, 0x7e, 
    0x2, 0x2, 0x22d, 0x22e, 0x7, 0x72, 0x2, 0x2, 0x22e, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x22f, 0x231, 0x7, 0x9, 0x2, 0x2, 0x230, 0x232, 0x5, 0x108, 
    0x85, 0x2, 0x231, 0x230, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x3, 0x2, 
    0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x7, 0x72, 
    0x2, 0x2, 0x234, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x235, 0x237, 0x7, 0x9, 0x2, 
    0x2, 0x236, 0x238, 0x5, 0xb0, 0x59, 0x2, 0x237, 0x236, 0x3, 0x2, 0x2, 
    0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 0x3, 0x2, 0x2, 
    0x2, 0x239, 0x23a, 0x7, 0x72, 0x2, 0x2, 0x23a, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x23b, 0x23c, 0x7, 0xa, 0x2, 0x2, 0x23c, 0x23d, 0x5, 0x92, 0x4a, 
    0x2, 0x23d, 0x23e, 0x7, 0x72, 0x2, 0x2, 0x23e, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x23f, 0x240, 0x7, 0xa, 0x2, 0x2, 0x240, 0x241, 0x5, 0x94, 0x4b, 
    0x2, 0x241, 0x242, 0x7, 0x72, 0x2, 0x2, 0x242, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x243, 0x244, 0x7, 0xb, 0x2, 0x2, 0x244, 0x245, 0x5, 0x8e, 0x48, 
    0x2, 0x245, 0x246, 0x7, 0x72, 0x2, 0x2, 0x246, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x247, 0x248, 0x7, 0xb, 0x2, 0x2, 0x248, 0x249, 0x5, 0x90, 0x49, 
    0x2, 0x249, 0x24a, 0x7, 0x72, 0x2, 0x2, 0x24a, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x24b, 0x24d, 0x5, 0x32, 0x1a, 0x2, 0x24c, 0x24b, 0x3, 0x2, 0x2, 
    0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x3, 0x2, 0x2, 
    0x2, 0x24e, 0x24f, 0x7, 0xc, 0x2, 0x2, 0x24f, 0x250, 0x5, 0x6a, 0x36, 
    0x2, 0x250, 0x251, 0x7, 0xd, 0x2, 0x2, 0x251, 0x252, 0x5, 0x10c, 0x87, 
    0x2, 0x252, 0x253, 0x7, 0x72, 0x2, 0x2, 0x253, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x254, 0x256, 0x5, 0x32, 0x1a, 0x2, 0x255, 0x254, 0x3, 0x2, 0x2, 
    0x2, 0x255, 0x256, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 0x2, 
    0x2, 0x257, 0x258, 0x7, 0xc, 0x2, 0x2, 0x258, 0x259, 0x5, 0x6c, 0x37, 
    0x2, 0x259, 0x25a, 0x7, 0xd, 0x2, 0x2, 0x25a, 0x25b, 0x5, 0x106, 0x84, 
    0x2, 0x25b, 0x25c, 0x7, 0x72, 0x2, 0x2, 0x25c, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x25d, 0x25f, 0x5, 0x32, 0x1a, 0x2, 0x25e, 0x25d, 0x3, 0x2, 0x2, 
    0x2, 0x25e, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x3, 0x2, 0x2, 
    0x2, 0x260, 0x261, 0x7, 0xe, 0x2, 0x2, 0x261, 0x262, 0x5, 0x10c, 0x87, 
    0x2, 0x262, 0x263, 0x5, 0x6a, 0x36, 0x2, 0x263, 0x264, 0x7, 0xf, 0x2, 
    0x2, 0x264, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x265, 0x267, 0x5, 0x32, 0x1a, 
    0x2, 0x266, 0x265, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x3, 0x2, 0x2, 
    0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x7, 0xe, 0x2, 
    0x2, 0x269, 0x26a, 0x5, 0x106, 0x84, 0x2, 0x26a, 0x26b, 0x5, 0x6c, 0x37, 
    0x2, 0x26b, 0x26c, 0x7, 0xf, 0x2, 0x2, 0x26c, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x26d, 0x26e, 0x7, 0x10, 0x2, 0x2, 0x26e, 0x26f, 0x7, 0x72, 0x2, 0x2, 
    0x26f, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 0x7, 0x11, 0x2, 0x2, 
    0x271, 0x272, 0x7, 0x12, 0x2, 0x2, 0x272, 0x273, 0x5, 0x8c, 0x47, 0x2, 
    0x273, 0x274, 0x7, 0x72, 0x2, 0x2, 0x274, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x275, 0x277, 0x7, 0x17, 0x2, 0x2, 0x276, 0x278, 0x7, 0x7e, 0x2, 0x2, 
    0x277, 0x276, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x3, 0x2, 0x2, 0x2, 
    0x278, 0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x7, 0x72, 0x2, 0x2, 
    0x27a, 0x53, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27d, 0x7, 0x18, 0x2, 0x2, 
    0x27c, 0x27e, 0x7, 0x7e, 0x2, 0x2, 0x27d, 0x27c, 0x3, 0x2, 0x2, 0x2, 
    0x27d, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 0x3, 0x2, 0x2, 0x2, 
    0x27f, 0x280, 0x7, 0x72, 0x2, 0x2, 0x280, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x281, 0x283, 0x5, 0x32, 0x1a, 0x2, 0x282, 0x281, 0x3, 0x2, 0x2, 0x2, 
    0x282, 0x283, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 
    0x284, 0x285, 0x7, 0x19, 0x2, 0x2, 0x285, 0x286, 0x5, 0x80, 0x41, 0x2, 
    0x286, 0x287, 0x7, 0x1a, 0x2, 0x2, 0x287, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x288, 0x28a, 0x5, 0x32, 0x1a, 0x2, 0x289, 0x288, 0x3, 0x2, 0x2, 0x2, 
    0x289, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x3, 0x2, 0x2, 0x2, 
    0x28b, 0x28c, 0x7, 0x19, 0x2, 0x2, 0x28c, 0x28d, 0x5, 0x82, 0x42, 0x2, 
    0x28d, 0x28e, 0x7, 0x1a, 0x2, 0x2, 0x28e, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x28f, 0x291, 0x5, 0x32, 0x1a, 0x2, 0x290, 0x28f, 0x3, 0x2, 0x2, 0x2, 
    0x290, 0x291, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 0x2, 0x2, 
    0x292, 0x293, 0x7, 0x1c, 0x2, 0x2, 0x293, 0x294, 0x7, 0x7e, 0x2, 0x2, 
    0x294, 0x295, 0x7, 0x45, 0x2, 0x2, 0x295, 0x296, 0x5, 0x108, 0x85, 0x2, 
    0x296, 0x297, 0x5, 0x6a, 0x36, 0x2, 0x297, 0x298, 0x7, 0x1d, 0x2, 0x2, 
    0x298, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29b, 0x5, 0x32, 0x1a, 0x2, 
    0x29a, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29b, 0x3, 0x2, 0x2, 0x2, 
    0x29b, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x7, 0x1c, 0x2, 0x2, 
    0x29d, 0x29e, 0x7, 0x7e, 0x2, 0x2, 0x29e, 0x29f, 0x7, 0x45, 0x2, 0x2, 
    0x29f, 0x2a0, 0x5, 0xb0, 0x59, 0x2, 0x2a0, 0x2a1, 0x5, 0x6c, 0x37, 0x2, 
    0x2a1, 0x2a2, 0x7, 0x1d, 0x2, 0x2, 0x2a2, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x2a3, 0x2a5, 0x5, 0x32, 0x1a, 0x2, 0x2a4, 0x2a3, 0x3, 0x2, 0x2, 0x2, 
    0x2a4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x3, 0x2, 0x2, 0x2, 
    0x2a6, 0x2a7, 0x7, 0x1e, 0x2, 0x2, 0x2a7, 0x2a8, 0x5, 0x6a, 0x36, 0x2, 
    0x2a8, 0x2a9, 0x7, 0x1f, 0x2, 0x2, 0x2a9, 0x2aa, 0x5, 0x108, 0x85, 0x2, 
    0x2aa, 0x2ab, 0x7, 0x72, 0x2, 0x2, 0x2ab, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x2ac, 0x2ae, 0x5, 0x32, 0x1a, 0x2, 0x2ad, 0x2ac, 0x3, 0x2, 0x2, 0x2, 
    0x2ad, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2af, 0x3, 0x2, 0x2, 0x2, 
    0x2af, 0x2b0, 0x7, 0x1e, 0x2, 0x2, 0x2b0, 0x2b1, 0x5, 0x6c, 0x37, 0x2, 
    0x2b1, 0x2b2, 0x7, 0x1f, 0x2, 0x2, 0x2b2, 0x2b3, 0x5, 0xb0, 0x59, 0x2, 
    0x2b3, 0x2b4, 0x7, 0x72, 0x2, 0x2, 0x2b4, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x2b5, 0x2b7, 0x5, 0x32, 0x1a, 0x2, 0x2b6, 0x2b5, 0x3, 0x2, 0x2, 0x2, 
    0x2b6, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x3, 0x2, 0x2, 0x2, 
    0x2b8, 0x2b9, 0x7, 0x22, 0x2, 0x2, 0x2b9, 0x2ba, 0x7, 0x4f, 0x2, 0x2, 
    0x2ba, 0x2bb, 0x5, 0x108, 0x85, 0x2, 0x2bb, 0x2bd, 0x7, 0x50, 0x2, 0x2, 
    0x2bc, 0x2be, 0x5, 0x7a, 0x3e, 0x2, 0x2bd, 0x2bc, 0x3, 0x2, 0x2, 0x2, 
    0x2be, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2bd, 0x3, 0x2, 0x2, 0x2, 
    0x2bf, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x3, 0x2, 0x2, 0x2, 
    0x2c1, 0x2c2, 0x7, 0x24, 0x2, 0x2, 0x2c2, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x2c3, 0x2c5, 0x5, 0x32, 0x1a, 0x2, 0x2c4, 0x2c3, 0x3, 0x2, 0x2, 0x2, 
    0x2c4, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 0x3, 0x2, 0x2, 0x2, 
    0x2c6, 0x2c7, 0x7, 0x22, 0x2, 0x2, 0x2c7, 0x2c8, 0x7, 0x4f, 0x2, 0x2, 
    0x2c8, 0x2c9, 0x5, 0xb0, 0x59, 0x2, 0x2c9, 0x2cb, 0x7, 0x50, 0x2, 0x2, 
    0x2ca, 0x2cc, 0x5, 0x7c, 0x3f, 0x2, 0x2cb, 0x2ca, 0x3, 0x2, 0x2, 0x2, 
    0x2cc, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2cb, 0x3, 0x2, 0x2, 0x2, 
    0x2cd, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 0x3, 0x2, 0x2, 0x2, 
    0x2cf, 0x2d0, 0x7, 0x24, 0x2, 0x2, 0x2d0, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x2d1, 0x2d2, 0x7, 0x25, 0x2, 0x2, 0x2d2, 0x2d3, 0x7, 0x7e, 0x2, 0x2, 
    0x2d3, 0x2d4, 0x5, 0x72, 0x3a, 0x2, 0x2d4, 0x2d5, 0x7, 0x26, 0x2, 0x2, 
    0x2d5, 0x67, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 0x7, 0x25, 0x2, 0x2, 
    0x2d7, 0x2d8, 0x7, 0x7e, 0x2, 0x2, 0x2d8, 0x2d9, 0x5, 0x74, 0x3b, 0x2, 
    0x2d9, 0x2da, 0x7, 0x26, 0x2, 0x2, 0x2da, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x2db, 0x2dd, 0x5, 0x30, 0x19, 0x2, 0x2dc, 0x2db, 0x3, 0x2, 0x2, 0x2, 
    0x2dd, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2dc, 0x3, 0x2, 0x2, 0x2, 
    0x2de, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2e0, 
    0x2de, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e3, 0x5, 0x2e, 0x18, 0x2, 0x2e2, 
    0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e4, 
    0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e5, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 
    0x7, 0x6e, 0x2, 0x2, 0x2e8, 0x2eb, 0x5, 0x108, 0x85, 0x2, 0x2e9, 0x2eb, 
    0x7, 0x43, 0x2, 0x2, 0x2ea, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2e9, 
    0x3, 0x2, 0x2, 0x2, 0x2eb, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 0x7, 
    0x6e, 0x2, 0x2, 0x2ed, 0x2f4, 0x5, 0xb0, 0x59, 0x2, 0x2ee, 0x2ef, 0x7, 
    0x6c, 0x2, 0x2, 0x2ef, 0x2f0, 0x5, 0xb0, 0x59, 0x2, 0x2f0, 0x2f1, 0x8, 
    0x39, 0x1, 0x2, 0x2f1, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f4, 0x7, 
    0x43, 0x2, 0x2, 0x2f3, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2ee, 0x3, 
    0x2, 0x2, 0x2, 0x2f3, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x2f5, 0x2fa, 0x5, 0x76, 0x3c, 0x2, 0x2f6, 0x2f7, 0x7, 0x73, 
    0x2, 0x2, 0x2f7, 0x2f9, 0x5, 0x76, 0x3c, 0x2, 0x2f8, 0x2f6, 0x3, 0x2, 
    0x2, 0x2, 0x2f9, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f8, 0x3, 0x2, 
    0x2, 0x2, 0x2fa, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fe, 0x3, 0x2, 
    0x2, 0x2, 0x2fc, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2ff, 0x7, 0x73, 
    0x2, 0x2, 0x2fe, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 0x3, 0x2, 
    0x2, 0x2, 0x2ff, 0x73, 0x3, 0x2, 0x2, 0x2, 0x300, 0x305, 0x5, 0x78, 
    0x3d, 0x2, 0x301, 0x302, 0x7, 0x73, 0x2, 0x2, 0x302, 0x304, 0x5, 0x78, 
    0x3d, 0x2, 0x303, 0x301, 0x3, 0x2, 0x2, 0x2, 0x304, 0x307, 0x3, 0x2, 
    0x2, 0x2, 0x305, 0x303, 0x3, 0x2, 0x2, 0x2, 0x305, 0x306, 0x3, 0x2, 
    0x2, 0x2, 0x306, 0x309, 0x3, 0x2, 0x2, 0x2, 0x307, 0x305, 0x3, 0x2, 
    0x2, 0x2, 0x308, 0x30a, 0x7, 0x73, 0x2, 0x2, 0x309, 0x308, 0x3, 0x2, 
    0x2, 0x2, 0x309, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x30b, 0x30e, 0x7, 0x7e, 0x2, 0x2, 0x30c, 0x30d, 0x7, 0x6e, 0x2, 
    0x2, 0x30d, 0x30f, 0x5, 0x108, 0x85, 0x2, 0x30e, 0x30c, 0x3, 0x2, 0x2, 
    0x2, 0x30e, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x310, 0x313, 0x7, 0x7e, 0x2, 0x2, 0x311, 0x312, 0x7, 0x6e, 0x2, 0x2, 
    0x312, 0x314, 0x5, 0xb0, 0x59, 0x2, 0x313, 0x311, 0x3, 0x2, 0x2, 0x2, 
    0x313, 0x314, 0x3, 0x2, 0x2, 0x2, 0x314, 0x79, 0x3, 0x2, 0x2, 0x2, 0x315, 
    0x317, 0x5, 0x7e, 0x40, 0x2, 0x316, 0x315, 0x3, 0x2, 0x2, 0x2, 0x317, 
    0x318, 0x3, 0x2, 0x2, 0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 0x2, 0x318, 
    0x319, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31a, 
    0x31b, 0x5, 0x6a, 0x36, 0x2, 0x31b, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x31c, 
    0x320, 0x5, 0x7e, 0x40, 0x2, 0x31d, 0x31f, 0x5, 0x7e, 0x40, 0x2, 0x31e, 
    0x31d, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x322, 0x3, 0x2, 0x2, 0x2, 0x320, 
    0x31e, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x3, 0x2, 0x2, 0x2, 0x321, 
    0x323, 0x3, 0x2, 0x2, 0x2, 0x322, 0x320, 0x3, 0x2, 0x2, 0x2, 0x323, 
    0x324, 0x5, 0x6c, 0x37, 0x2, 0x324, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x325, 
    0x329, 0x5, 0x144, 0xa3, 0x2, 0x326, 0x329, 0x7, 0x7e, 0x2, 0x2, 0x327, 
    0x329, 0x7, 0x4d, 0x2, 0x2, 0x328, 0x325, 0x3, 0x2, 0x2, 0x2, 0x328, 
    0x326, 0x3, 0x2, 0x2, 0x2, 0x328, 0x327, 0x3, 0x2, 0x2, 0x2, 0x329, 
    0x32a, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32e, 0x7, 0x77, 0x2, 0x2, 0x32b, 
    0x32c, 0x7, 0x23, 0x2, 0x2, 0x32c, 0x32e, 0x7, 0x77, 0x2, 0x2, 0x32d, 
    0x328, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32e, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x332, 0x5, 0x88, 0x45, 0x2, 0x330, 
    0x332, 0x5, 0x84, 0x43, 0x2, 0x331, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x331, 
    0x330, 0x3, 0x2, 0x2, 0x2, 0x332, 0x81, 0x3, 0x2, 0x2, 0x2, 0x333, 0x336, 
    0x5, 0x8a, 0x46, 0x2, 0x334, 0x336, 0x5, 0x86, 0x44, 0x2, 0x335, 0x333, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x334, 0x3, 0x2, 0x2, 0x2, 0x336, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x337, 0x338, 0x7, 0x7e, 0x2, 0x2, 0x338, 0x339, 0x7, 
    0x6e, 0x2, 0x2, 0x339, 0x33a, 0x5, 0x108, 0x85, 0x2, 0x33a, 0x33b, 0x7, 
    0x1b, 0x2, 0x2, 0x33b, 0x33c, 0x5, 0x108, 0x85, 0x2, 0x33c, 0x33d, 0x5, 
    0x6a, 0x36, 0x2, 0x33d, 0x85, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33f, 0x7, 
    0x7e, 0x2, 0x2, 0x33f, 0x340, 0x7, 0x6e, 0x2, 0x2, 0x340, 0x341, 0x5, 
    0xb0, 0x59, 0x2, 0x341, 0x342, 0x7, 0x1b, 0x2, 0x2, 0x342, 0x343, 0x5, 
    0xb0, 0x59, 0x2, 0x343, 0x344, 0x5, 0x6c, 0x37, 0x2, 0x344, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x345, 0x346, 0x7, 0x4f, 0x2, 0x2, 0x346, 0x347, 0x5, 
    0x108, 0x85, 0x2, 0x347, 0x348, 0x7, 0x72, 0x2, 0x2, 0x348, 0x349, 0x5, 
    0x108, 0x85, 0x2, 0x349, 0x34a, 0x7, 0x72, 0x2, 0x2, 0x34a, 0x34b, 0x5, 
    0x108, 0x85, 0x2, 0x34b, 0x34c, 0x7, 0x50, 0x2, 0x2, 0x34c, 0x34d, 0x5, 
    0x6a, 0x36, 0x2, 0x34d, 0x89, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34f, 0x7, 
    0x4f, 0x2, 0x2, 0x34f, 0x350, 0x5, 0xb0, 0x59, 0x2, 0x350, 0x351, 0x7, 
    0x72, 0x2, 0x2, 0x351, 0x352, 0x5, 0xb0, 0x59, 0x2, 0x352, 0x353, 0x7, 
    0x72, 0x2, 0x2, 0x353, 0x354, 0x5, 0xb0, 0x59, 0x2, 0x354, 0x355, 0x7, 
    0x50, 0x2, 0x2, 0x355, 0x356, 0x5, 0x6c, 0x37, 0x2, 0x356, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x357, 0x35a, 0x7, 0x7e, 0x2, 0x2, 0x358, 0x359, 0x7, 
    0x73, 0x2, 0x2, 0x359, 0x35b, 0x5, 0x8c, 0x47, 0x2, 0x35a, 0x358, 0x3, 
    0x2, 0x2, 0x2, 0x35a, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x35c, 0x361, 0x5, 0x92, 0x4a, 0x2, 0x35d, 0x35e, 0x7, 0x73, 
    0x2, 0x2, 0x35e, 0x360, 0x5, 0x92, 0x4a, 0x2, 0x35f, 0x35d, 0x3, 0x2, 
    0x2, 0x2, 0x360, 0x363, 0x3, 0x2, 0x2, 0x2, 0x361, 0x35f, 0x3, 0x2, 
    0x2, 0x2, 0x361, 0x362, 0x3, 0x2, 0x2, 0x2, 0x362, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x363, 0x361, 0x3, 0x2, 0x2, 0x2, 0x364, 0x369, 0x5, 0x94, 0x4b, 
    0x2, 0x365, 0x366, 0x7, 0x73, 0x2, 0x2, 0x366, 0x368, 0x5, 0x94, 0x4b, 
    0x2, 0x367, 0x365, 0x3, 0x2, 0x2, 0x2, 0x368, 0x36b, 0x3, 0x2, 0x2, 
    0x2, 0x369, 0x367, 0x3, 0x2, 0x2, 0x2, 0x369, 0x36a, 0x3, 0x2, 0x2, 
    0x2, 0x36a, 0x91, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x369, 0x3, 0x2, 0x2, 0x2, 
    0x36c, 0x36e, 0x7, 0x7e, 0x2, 0x2, 0x36d, 0x36f, 0x5, 0x6e, 0x38, 0x2, 
    0x36e, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36f, 0x3, 0x2, 0x2, 0x2, 
    0x36f, 0x93, 0x3, 0x2, 0x2, 0x2, 0x370, 0x372, 0x7, 0x7e, 0x2, 0x2, 
    0x371, 0x373, 0x5, 0x70, 0x39, 0x2, 0x372, 0x371, 0x3, 0x2, 0x2, 0x2, 
    0x372, 0x373, 0x3, 0x2, 0x2, 0x2, 0x373, 0x95, 0x3, 0x2, 0x2, 0x2, 0x374, 
    0x376, 0x7, 0x4f, 0x2, 0x2, 0x375, 0x377, 0x5, 0x98, 0x4d, 0x2, 0x376, 
    0x375, 0x3, 0x2, 0x2, 0x2, 0x376, 0x377, 0x3, 0x2, 0x2, 0x2, 0x377, 
    0x378, 0x3, 0x2, 0x2, 0x2, 0x378, 0x379, 0x7, 0x50, 0x2, 0x2, 0x379, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x381, 0x5, 0x9a, 0x4e, 0x2, 0x37b, 
    0x37d, 0x7, 0x73, 0x2, 0x2, 0x37c, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x37c, 
    0x37d, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x37e, 
    0x380, 0x5, 0x9a, 0x4e, 0x2, 0x37f, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x380, 
    0x383, 0x3, 0x2, 0x2, 0x2, 0x381, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x381, 
    0x382, 0x3, 0x2, 0x2, 0x2, 0x382, 0x99, 0x3, 0x2, 0x2, 0x2, 0x383, 0x381, 
    0x3, 0x2, 0x2, 0x2, 0x384, 0x385, 0x7, 0x3e, 0x2, 0x2, 0x385, 0x38c, 
    0x7, 0x7e, 0x2, 0x2, 0x386, 0x389, 0x7, 0x7e, 0x2, 0x2, 0x387, 0x388, 
    0x7, 0x6e, 0x2, 0x2, 0x388, 0x38a, 0x5, 0x108, 0x85, 0x2, 0x389, 0x387, 
    0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38c, 
    0x3, 0x2, 0x2, 0x2, 0x38b, 0x384, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x386, 
    0x3, 0x2, 0x2, 0x2, 0x38c, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38f, 0x7, 
    0x4f, 0x2, 0x2, 0x38e, 0x390, 0x5, 0x9e, 0x50, 0x2, 0x38f, 0x38e, 0x3, 
    0x2, 0x2, 0x2, 0x38f, 0x390, 0x3, 0x2, 0x2, 0x2, 0x390, 0x391, 0x3, 
    0x2, 0x2, 0x2, 0x391, 0x392, 0x7, 0x50, 0x2, 0x2, 0x392, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0x393, 0x39a, 0x5, 0xa0, 0x51, 0x2, 0x394, 0x396, 0x7, 
    0x73, 0x2, 0x2, 0x395, 0x394, 0x3, 0x2, 0x2, 0x2, 0x395, 0x396, 0x3, 
    0x2, 0x2, 0x2, 0x396, 0x397, 0x3, 0x2, 0x2, 0x2, 0x397, 0x399, 0x5, 
    0xa0, 0x51, 0x2, 0x398, 0x395, 0x3, 0x2, 0x2, 0x2, 0x399, 0x39c, 0x3, 
    0x2, 0x2, 0x2, 0x39a, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x3, 
    0x2, 0x2, 0x2, 0x39b, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39a, 0x3, 0x2, 
    0x2, 0x2, 0x39d, 0x39e, 0x7, 0x3e, 0x2, 0x2, 0x39e, 0x3a5, 0x7, 0x7e, 
    0x2, 0x2, 0x39f, 0x3a2, 0x7, 0x7e, 0x2, 0x2, 0x3a0, 0x3a1, 0x7, 0x6e, 
    0x2, 0x2, 0x3a1, 0x3a3, 0x5, 0xb0, 0x59, 0x2, 0x3a2, 0x3a0, 0x3, 0x2, 
    0x2, 0x2, 0x3a2, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a5, 0x3, 0x2, 
    0x2, 0x2, 0x3a4, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x39f, 0x3, 0x2, 
    0x2, 0x2, 0x3a5, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a8, 0x7, 0x4f, 
    0x2, 0x2, 0x3a7, 0x3a9, 0x5, 0xa4, 0x53, 0x2, 0x3a8, 0x3a7, 0x3, 0x2, 
    0x2, 0x2, 0x3a8, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3aa, 0x3, 0x2, 
    0x2, 0x2, 0x3aa, 0x3ab, 0x7, 0x50, 0x2, 0x2, 0x3ab, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0x3ac, 0x3b1, 0x5, 0xa6, 0x54, 0x2, 0x3ad, 0x3ae, 0x7, 0x73, 
    0x2, 0x2, 0x3ae, 0x3b0, 0x5, 0xa6, 0x54, 0x2, 0x3af, 0x3ad, 0x3, 0x2, 
    0x2, 0x2, 0x3b0, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3af, 0x3, 0x2, 
    0x2, 0x2, 0x3b1, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0x3b3, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b6, 0x7, 0x3d, 0x2, 
    0x2, 0x3b5, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x3, 0x2, 0x2, 
    0x2, 0x3b6, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b9, 0x7, 0x3e, 0x2, 
    0x2, 0x3b8, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b9, 0x3, 0x2, 0x2, 
    0x2, 0x3b9, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bd, 0x7, 0x7e, 0x2, 
    0x2, 0x3bb, 0x3bc, 0x7, 0x6e, 0x2, 0x2, 0x3bc, 0x3be, 0x5, 0x108, 0x85, 
    0x2, 0x3bd, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3be, 0x3, 0x2, 0x2, 
    0x2, 0x3be, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c1, 0x7, 0x4f, 0x2, 
    0x2, 0x3c0, 0x3c2, 0x5, 0xaa, 0x56, 0x2, 0x3c1, 0x3c0, 0x3, 0x2, 0x2, 
    0x2, 0x3c1, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c3, 0x3, 0x2, 0x2, 
    0x2, 0x3c3, 0x3c4, 0x7, 0x50, 0x2, 0x2, 0x3c4, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0x3c5, 0x3ca, 0x5, 0xac, 0x57, 0x2, 0x3c6, 0x3c7, 0x7, 0x73, 0x2, 
    0x2, 0x3c7, 0x3c9, 0x5, 0xac, 0x57, 0x2, 0x3c8, 0x3c6, 0x3, 0x2, 0x2, 
    0x2, 0x3c9, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3c8, 0x3, 0x2, 0x2, 
    0x2, 0x3ca, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0x3cc, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3cf, 0x7, 0x3d, 0x2, 0x2, 
    0x3ce, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3cf, 0x3, 0x2, 0x2, 0x2, 
    0x3cf, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d2, 0x7, 0x3e, 0x2, 0x2, 
    0x3d1, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x3, 0x2, 0x2, 0x2, 
    0x3d2, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d6, 0x7, 0x7e, 0x2, 0x2, 
    0x3d4, 0x3d5, 0x7, 0x6e, 0x2, 0x2, 0x3d5, 0x3d7, 0x5, 0xb0, 0x59, 0x2, 
    0x3d6, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d7, 0x3, 0x2, 0x2, 0x2, 
    0x3d7, 0xad, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d9, 0x7, 0x7e, 0x2, 0x2, 
    0x3d9, 0x3da, 0x7, 0x76, 0x2, 0x2, 0x3da, 0x3db, 0x5, 0x116, 0x8c, 0x2, 
    0x3db, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3e2, 0x5, 0xb4, 0x5b, 0x2, 
    0x3dd, 0x3de, 0x5, 0xb2, 0x5a, 0x2, 0x3de, 0x3df, 0x5, 0xb4, 0x5b, 0x2, 
    0x3df, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3dd, 0x3, 0x2, 0x2, 0x2, 
    0x3e1, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e0, 0x3, 0x2, 0x2, 0x2, 
    0x3e2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
    0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 0x9, 0x3, 0x2, 0x2, 0x3e6, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3ed, 0x5, 0xb8, 0x5d, 0x2, 0x3e8, 
    0x3e9, 0x5, 0xb6, 0x5c, 0x2, 0x3e9, 0x3ea, 0x5, 0xb8, 0x5d, 0x2, 0x3ea, 
    0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3ec, 
    0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3ed, 
    0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3ed, 
    0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f1, 0x9, 0x4, 0x2, 0x2, 0x3f1, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0x3f2, 0x3f8, 0x5, 0xbc, 0x5f, 0x2, 0x3f3, 0x3f4, 0x5, 
    0xba, 0x5e, 0x2, 0x3f4, 0x3f5, 0x5, 0xbc, 0x5f, 0x2, 0x3f5, 0x3f7, 0x3, 
    0x2, 0x2, 0x2, 0x3f6, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3fa, 0x3, 
    0x2, 0x2, 0x2, 0x3f8, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f9, 0x3, 
    0x2, 0x2, 0x2, 0x3f9, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3f8, 0x3, 0x2, 
    0x2, 0x2, 0x3fb, 0x3fc, 0x9, 0x5, 0x2, 0x2, 0x3fc, 0xbb, 0x3, 0x2, 0x2, 
    0x2, 0x3fd, 0x403, 0x5, 0xc0, 0x61, 0x2, 0x3fe, 0x3ff, 0x5, 0xbe, 0x60, 
    0x2, 0x3ff, 0x400, 0x5, 0xc0, 0x61, 0x2, 0x400, 0x402, 0x3, 0x2, 0x2, 
    0x2, 0x401, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x402, 0x405, 0x3, 0x2, 0x2, 
    0x2, 0x403, 0x401, 0x3, 0x2, 0x2, 0x2, 0x403, 0x404, 0x3, 0x2, 0x2, 
    0x2, 0x404, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x405, 0x403, 0x3, 0x2, 0x2, 0x2, 
    0x406, 0x407, 0x9, 0x6, 0x2, 0x2, 0x407, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x408, 
    0x40e, 0x5, 0xc4, 0x63, 0x2, 0x409, 0x40a, 0x5, 0xc2, 0x62, 0x2, 0x40a, 
    0x40b, 0x5, 0xc4, 0x63, 0x2, 0x40b, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40c, 
    0x409, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x410, 0x3, 0x2, 0x2, 0x2, 0x40e, 
    0x40c, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x40f, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0x410, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 
    0x9, 0x7, 0x2, 0x2, 0x412, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x413, 0x418, 0x5, 
    0xc6, 0x64, 0x2, 0x414, 0x415, 0x7, 0x69, 0x2, 0x2, 0x415, 0x417, 0x5, 
    0xc6, 0x64, 0x2, 0x416, 0x414, 0x3, 0x2, 0x2, 0x2, 0x417, 0x41a, 0x3, 
    0x2, 0x2, 0x2, 0x418, 0x416, 0x3, 0x2, 0x2, 0x2, 0x418, 0x419, 0x3, 
    0x2, 0x2, 0x2, 0x419, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x418, 0x3, 0x2, 
    0x2, 0x2, 0x41b, 0x420, 0x5, 0xc8, 0x65, 0x2, 0x41c, 0x41d, 0x7, 0x68, 
    0x2, 0x2, 0x41d, 0x41f, 0x5, 0xc8, 0x65, 0x2, 0x41e, 0x41c, 0x3, 0x2, 
    0x2, 0x2, 0x41f, 0x422, 0x3, 0x2, 0x2, 0x2, 0x420, 0x41e, 0x3, 0x2, 
    0x2, 0x2, 0x420, 0x421, 0x3, 0x2, 0x2, 0x2, 0x421, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x423, 0x428, 0x5, 0xca, 0x66, 
    0x2, 0x424, 0x425, 0x7, 0x67, 0x2, 0x2, 0x425, 0x427, 0x5, 0xca, 0x66, 
    0x2, 0x426, 0x424, 0x3, 0x2, 0x2, 0x2, 0x427, 0x42a, 0x3, 0x2, 0x2, 
    0x2, 0x428, 0x426, 0x3, 0x2, 0x2, 0x2, 0x428, 0x429, 0x3, 0x2, 0x2, 
    0x2, 0x429, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x428, 0x3, 0x2, 0x2, 0x2, 
    0x42b, 0x430, 0x5, 0xcc, 0x67, 0x2, 0x42c, 0x42d, 0x7, 0x65, 0x2, 0x2, 
    0x42d, 0x42f, 0x5, 0xcc, 0x67, 0x2, 0x42e, 0x42c, 0x3, 0x2, 0x2, 0x2, 
    0x42f, 0x432, 0x3, 0x2, 0x2, 0x2, 0x430, 0x42e, 0x3, 0x2, 0x2, 0x2, 
    0x430, 0x431, 0x3, 0x2, 0x2, 0x2, 0x431, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x432, 
    0x430, 0x3, 0x2, 0x2, 0x2, 0x433, 0x438, 0x5, 0xce, 0x68, 0x2, 0x434, 
    0x435, 0x7, 0x66, 0x2, 0x2, 0x435, 0x437, 0x5, 0xce, 0x68, 0x2, 0x436, 
    0x434, 0x3, 0x2, 0x2, 0x2, 0x437, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x438, 
    0x436, 0x3, 0x2, 0x2, 0x2, 0x438, 0x439, 0x3, 0x2, 0x2, 0x2, 0x439, 
    0xcd, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x438, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x441, 
    0x5, 0xd2, 0x6a, 0x2, 0x43c, 0x43d, 0x5, 0xd0, 0x69, 0x2, 0x43d, 0x43e, 
    0x5, 0xd2, 0x6a, 0x2, 0x43e, 0x440, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x43c, 
    0x3, 0x2, 0x2, 0x2, 0x440, 0x443, 0x3, 0x2, 0x2, 0x2, 0x441, 0x43f, 
    0x3, 0x2, 0x2, 0x2, 0x441, 0x442, 0x3, 0x2, 0x2, 0x2, 0x442, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0x443, 0x441, 0x3, 0x2, 0x2, 0x2, 0x444, 0x445, 0x9, 
    0x8, 0x2, 0x2, 0x445, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x446, 0x44c, 0x5, 0xd6, 
    0x6c, 0x2, 0x447, 0x448, 0x5, 0xd4, 0x6b, 0x2, 0x448, 0x449, 0x5, 0xd6, 
    0x6c, 0x2, 0x449, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x447, 0x3, 0x2, 
    0x2, 0x2, 0x44b, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x44a, 0x3, 0x2, 
    0x2, 0x2, 0x44c, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x44d, 0xd3, 0x3, 0x2, 0x2, 
    0x2, 0x44e, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x450, 0x7, 0x45, 0x2, 
    0x2, 0x450, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x451, 0x456, 0x5, 0xd8, 0x6d, 
    0x2, 0x452, 0x453, 0x7, 0x7a, 0x2, 0x2, 0x453, 0x455, 0x5, 0xd8, 0x6d, 
    0x2, 0x454, 0x452, 0x3, 0x2, 0x2, 0x2, 0x455, 0x458, 0x3, 0x2, 0x2, 
    0x2, 0x456, 0x454, 0x3, 0x2, 0x2, 0x2, 0x456, 0x457, 0x3, 0x2, 0x2, 
    0x2, 0x457, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x458, 0x456, 0x3, 0x2, 0x2, 0x2, 
    0x459, 0x45f, 0x5, 0xdc, 0x6f, 0x2, 0x45a, 0x45b, 0x5, 0xda, 0x6e, 0x2, 
    0x45b, 0x45c, 0x5, 0xdc, 0x6f, 0x2, 0x45c, 0x45e, 0x3, 0x2, 0x2, 0x2, 
    0x45d, 0x45a, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x461, 0x3, 0x2, 0x2, 0x2, 
    0x45f, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x460, 0x3, 0x2, 0x2, 0x2, 
    0x460, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x461, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x462, 
    0x463, 0x9, 0x9, 0x2, 0x2, 0x463, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x464, 0x46a, 
    0x5, 0xe0, 0x71, 0x2, 0x465, 0x466, 0x5, 0xde, 0x70, 0x2, 0x466, 0x467, 
    0x5, 0xe0, 0x71, 0x2, 0x467, 0x469, 0x3, 0x2, 0x2, 0x2, 0x468, 0x465, 
    0x3, 0x2, 0x2, 0x2, 0x469, 0x46c, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x468, 
    0x3, 0x2, 0x2, 0x2, 0x46a, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x46b, 0xdd, 0x3, 
    0x2, 0x2, 0x2, 0x46c, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x46e, 0x9, 
    0xa, 0x2, 0x2, 0x46e, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x471, 0x5, 0xe2, 
    0x72, 0x2, 0x470, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x471, 0x474, 0x3, 0x2, 
    0x2, 0x2, 0x472, 0x470, 0x3, 0x2, 0x2, 0x2, 0x472, 0x473, 0x3, 0x2, 
    0x2, 0x2, 0x473, 0x475, 0x3, 0x2, 0x2, 0x2, 0x474, 0x472, 0x3, 0x2, 
    0x2, 0x2, 0x475, 0x476, 0x5, 0xe4, 0x73, 0x2, 0x476, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0x477, 0x478, 0x9, 0xb, 0x2, 0x2, 0x478, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0x479, 0x47b, 0x5, 0xe6, 0x74, 0x2, 0x47a, 0x479, 0x3, 0x2, 0x2, 
    0x2, 0x47b, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x47a, 0x3, 0x2, 0x2, 
    0x2, 0x47c, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x47f, 0x3, 0x2, 0x2, 
    0x2, 0x47e, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x480, 0x5, 0xe8, 0x75, 
    0x2, 0x480, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x481, 0x482, 0x9, 0xc, 0x2, 0x2, 
    0x482, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x483, 0x487, 0x5, 0xf8, 0x7d, 0x2, 
    0x484, 0x486, 0x5, 0xea, 0x76, 0x2, 0x485, 0x484, 0x3, 0x2, 0x2, 0x2, 
    0x486, 0x489, 0x3, 0x2, 0x2, 0x2, 0x487, 0x485, 0x3, 0x2, 0x2, 0x2, 
    0x487, 0x488, 0x3, 0x2, 0x2, 0x2, 0x488, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x489, 
    0x487, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x490, 0x7, 0x78, 0x2, 0x2, 0x48b, 
    0x490, 0x7, 0x79, 0x2, 0x2, 0x48c, 0x490, 0x5, 0xec, 0x77, 0x2, 0x48d, 
    0x490, 0x5, 0xee, 0x78, 0x2, 0x48e, 0x490, 0x5, 0xf2, 0x7a, 0x2, 0x48f, 
    0x48a, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x48f, 
    0x48c, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x48f, 
    0x48e, 0x3, 0x2, 0x2, 0x2, 0x490, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x491, 0x492, 
    0x7, 0x51, 0x2, 0x2, 0x492, 0x493, 0x5, 0x110, 0x89, 0x2, 0x493, 0x494, 
    0x7, 0x52, 0x2, 0x2, 0x494, 0xed, 0x3, 0x2, 0x2, 0x2, 0x495, 0x496, 
    0x5, 0xf4, 0x7b, 0x2, 0x496, 0x497, 0x9, 0x2, 0x2, 0x2, 0x497, 0xef, 
    0x3, 0x2, 0x2, 0x2, 0x498, 0x49c, 0x5, 0xb6, 0x5c, 0x2, 0x499, 0x49d, 
    0x7, 0x7e, 0x2, 0x2, 0x49a, 0x49d, 0x7, 0x4d, 0x2, 0x2, 0x49b, 0x49d, 
    0x5, 0xb0, 0x59, 0x2, 0x49c, 0x499, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x49a, 
    0x3, 0x2, 0x2, 0x2, 0x49c, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x49d, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0x49e, 0x49f, 0x5, 0xf4, 0x7b, 0x2, 0x49f, 0x4a0, 0x7, 
    0x7e, 0x2, 0x2, 0x4a0, 0x4a2, 0x7, 0x4f, 0x2, 0x2, 0x4a1, 0x4a3, 0x5, 
    0x110, 0x89, 0x2, 0x4a2, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x4a3, 0x3, 
    0x2, 0x2, 0x2, 0x4a3, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a5, 0x7, 
    0x50, 0x2, 0x2, 0x4a5, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a7, 0x7, 
    0x55, 0x2, 0x2, 0x4a7, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a9, 0x5, 
    0x11a, 0x8e, 0x2, 0x4a9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4b6, 0x5, 
    0x142, 0xa2, 0x2, 0x4ab, 0x4b6, 0x5, 0x106, 0x84, 0x2, 0x4ac, 0x4b6, 
    0x5, 0x11e, 0x90, 0x2, 0x4ad, 0x4b6, 0x7, 0x7e, 0x2, 0x2, 0x4ae, 0x4b6, 
    0x5, 0xfa, 0x7e, 0x2, 0x4af, 0x4b6, 0x5, 0x120, 0x91, 0x2, 0x4b0, 0x4b6, 
    0x5, 0xfc, 0x7f, 0x2, 0x4b1, 0x4b6, 0x5, 0xfe, 0x80, 0x2, 0x4b2, 0x4b6, 
    0x5, 0x100, 0x81, 0x2, 0x4b3, 0x4b6, 0x5, 0x102, 0x82, 0x2, 0x4b4, 0x4b6, 
    0x5, 0x104, 0x83, 0x2, 0x4b5, 0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4ab, 
    0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4ad, 
    0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4af, 
    0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b1, 
    0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b3, 
    0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0x4b7, 0x4b8, 0x7, 0x75, 0x2, 0x2, 0x4b8, 0x4b9, 0x7, 
    0x7e, 0x2, 0x2, 0x4b9, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x4ba, 0x4bc, 0x7, 
    0x43, 0x2, 0x2, 0x4bb, 0x4bd, 0x5, 0x140, 0xa1, 0x2, 0x4bc, 0x4bb, 0x3, 
    0x2, 0x2, 0x2, 0x4bc, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0xfd, 0x3, 0x2, 
    0x2, 0x2, 0x4be, 0x4c0, 0x7, 0x42, 0x2, 0x2, 0x4bf, 0x4c1, 0x5, 0x130, 
    0x99, 0x2, 0x4c0, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4c1, 0x3, 0x2, 
    0x2, 0x2, 0x4c1, 0xff, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c4, 0x7, 0x41, 
    0x2, 0x2, 0x4c3, 0x4c5, 0x5, 0x13c, 0x9f, 0x2, 0x4c4, 0x4c3, 0x3, 0x2, 
    0x2, 0x2, 0x4c4, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4c5, 0x101, 0x3, 0x2, 
    0x2, 0x2, 0x4c6, 0x4c8, 0x7, 0x3f, 0x2, 0x2, 0x4c7, 0x4c9, 0x5, 0x130, 
    0x99, 0x2, 0x4c8, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c9, 0x3, 0x2, 
    0x2, 0x2, 0x4c9, 0x103, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cc, 0x7, 0x53, 
    0x2, 0x2, 0x4cb, 0x4cd, 0x5, 0x110, 0x89, 0x2, 0x4cc, 0x4cb, 0x3, 0x2, 
    0x2, 0x2, 0x4cc, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4ce, 0x3, 0x2, 
    0x2, 0x2, 0x4ce, 0x4d7, 0x7, 0x54, 0x2, 0x2, 0x4cf, 0x4d1, 0x7, 0x53, 
    0x2, 0x2, 0x4d0, 0x4d2, 0x5, 0x110, 0x89, 0x2, 0x4d1, 0x4d0, 0x3, 0x2, 
    0x2, 0x2, 0x4d1, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d3, 0x3, 0x2, 
    0x2, 0x2, 0x4d3, 0x4d4, 0x7, 0x73, 0x2, 0x2, 0x4d4, 0x4d5, 0x7, 0x54, 
    0x2, 0x2, 0x4d5, 0x4d7, 0x8, 0x83, 0x1, 0x2, 0x4d6, 0x4ca, 0x3, 0x2, 
    0x2, 0x2, 0x4d6, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x105, 0x3, 0x2, 
    0x2, 0x2, 0x4d8, 0x4d9, 0x7, 0x4f, 0x2, 0x2, 0x4d9, 0x4da, 0x5, 0xb0, 
    0x59, 0x2, 0x4da, 0x4db, 0x7, 0x50, 0x2, 0x2, 0x4db, 0x107, 0x3, 0x2, 
    0x2, 0x2, 0x4dc, 0x4dd, 0x8, 0x85, 0x1, 0x2, 0x4dd, 0x4fb, 0x5, 0x10a, 
    0x86, 0x2, 0x4de, 0x4fb, 0x5, 0x116, 0x8c, 0x2, 0x4df, 0x4fb, 0x5, 0xae, 
    0x58, 0x2, 0x4e0, 0x4e2, 0x7, 0x43, 0x2, 0x2, 0x4e1, 0x4e3, 0x5, 0x13e, 
    0xa0, 0x2, 0x4e2, 0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e3, 0x3, 0x2, 
    0x2, 0x2, 0x4e3, 0x4fb, 0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4e6, 0x7, 0x42, 
    0x2, 0x2, 0x4e5, 0x4e7, 0x5, 0x12a, 0x96, 0x2, 0x4e6, 0x4e5, 0x3, 0x2, 
    0x2, 0x2, 0x4e6, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4fb, 0x3, 0x2, 
    0x2, 0x2, 0x4e8, 0x4ea, 0x7, 0x41, 0x2, 0x2, 0x4e9, 0x4eb, 0x5, 0x13a, 
    0x9e, 0x2, 0x4ea, 0x4e9, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4eb, 0x3, 0x2, 
    0x2, 0x2, 0x4eb, 0x4fb, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ee, 0x7, 0x3f, 
    0x2, 0x2, 0x4ed, 0x4ef, 0x5, 0x12a, 0x96, 0x2, 0x4ee, 0x4ed, 0x3, 0x2, 
    0x2, 0x2, 0x4ee, 0x4ef, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4fb, 0x3, 0x2, 
    0x2, 0x2, 0x4f0, 0x4f2, 0x7, 0x53, 0x2, 0x2, 0x4f1, 0x4f3, 0x5, 0x10e, 
    0x88, 0x2, 0x4f2, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f3, 0x3, 0x2, 
    0x2, 0x2, 0x4f3, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4fb, 0x7, 0x54, 
    0x2, 0x2, 0x4f5, 0x4fb, 0x5, 0xfa, 0x7e, 0x2, 0x4f6, 0x4f7, 0x9, 0xc, 
    0x2, 0x2, 0x4f7, 0x4fb, 0x5, 0x108, 0x85, 0x12, 0x4f8, 0x4f9, 0x9, 0xb, 
    0x2, 0x2, 0x4f9, 0x4fb, 0x5, 0x108, 0x85, 0x11, 0x4fa, 0x4dc, 0x3, 0x2, 
    0x2, 0x2, 0x4fa, 0x4de, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4df, 0x3, 0x2, 
    0x2, 0x2, 0x4fa, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4e4, 0x3, 0x2, 
    0x2, 0x2, 0x4fa, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4ec, 0x3, 0x2, 
    0x2, 0x2, 0x4fa, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4f5, 0x3, 0x2, 
    0x2, 0x2, 0x4fa, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4f8, 0x3, 0x2, 
    0x2, 0x2, 0x4fb, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x4fc, 0x4fd, 0xc, 0x10, 
    0x2, 0x2, 0x4fd, 0x4fe, 0x9, 0xa, 0x2, 0x2, 0x4fe, 0x539, 0x5, 0x108, 
    0x85, 0x11, 0x4ff, 0x500, 0xc, 0xf, 0x2, 0x2, 0x500, 0x501, 0x9, 0x9, 
    0x2, 0x2, 0x501, 0x539, 0x5, 0x108, 0x85, 0x10, 0x502, 0x503, 0xc, 0xe, 
    0x2, 0x2, 0x503, 0x504, 0x9, 0xd, 0x2, 0x2, 0x504, 0x539, 0x5, 0x108, 
    0x85, 0xf, 0x505, 0x506, 0xc, 0xd, 0x2, 0x2, 0x506, 0x507, 0x7, 0x7a, 
    0x2, 0x2, 0x507, 0x539, 0x5, 0x108, 0x85, 0xe, 0x508, 0x509, 0xc, 0xc, 
    0x2, 0x2, 0x509, 0x50a, 0x9, 0x8, 0x2, 0x2, 0x50a, 0x539, 0x5, 0x108, 
    0x85, 0xd, 0x50b, 0x50c, 0xc, 0xb, 0x2, 0x2, 0x50c, 0x50d, 0x9, 0x7, 
    0x2, 0x2, 0x50d, 0x539, 0x5, 0x108, 0x85, 0xc, 0x50e, 0x50f, 0xc, 0xa, 
    0x2, 0x2, 0x50f, 0x510, 0x7, 0x67, 0x2, 0x2, 0x510, 0x539, 0x5, 0x108, 
    0x85, 0xb, 0x511, 0x512, 0xc, 0x9, 0x2, 0x2, 0x512, 0x513, 0x7, 0x68, 
    0x2, 0x2, 0x513, 0x539, 0x5, 0x108, 0x85, 0xa, 0x514, 0x515, 0xc, 0x8, 
    0x2, 0x2, 0x515, 0x516, 0x7, 0x69, 0x2, 0x2, 0x516, 0x539, 0x5, 0x108, 
    0x85, 0x9, 0x517, 0x518, 0xc, 0x7, 0x2, 0x2, 0x518, 0x519, 0x7, 0x45, 
    0x2, 0x2, 0x519, 0x539, 0x5, 0x108, 0x85, 0x8, 0x51a, 0x51b, 0xc, 0x6, 
    0x2, 0x2, 0x51b, 0x51c, 0x9, 0x6, 0x2, 0x2, 0x51c, 0x539, 0x5, 0x108, 
    0x85, 0x7, 0x51d, 0x51e, 0xc, 0x5, 0x2, 0x2, 0x51e, 0x51f, 0x9, 0x5, 
    0x2, 0x2, 0x51f, 0x539, 0x5, 0x108, 0x85, 0x6, 0x520, 0x521, 0xc, 0x3, 
    0x2, 0x2, 0x521, 0x522, 0x9, 0x3, 0x2, 0x2, 0x522, 0x539, 0x5, 0x108, 
    0x85, 0x3, 0x523, 0x524, 0xc, 0x1d, 0x2, 0x2, 0x524, 0x528, 0x7, 0x55, 
    0x2, 0x2, 0x525, 0x529, 0x7, 0x7e, 0x2, 0x2, 0x526, 0x529, 0x7, 0x4d, 
    0x2, 0x2, 0x527, 0x529, 0x5, 0x124, 0x93, 0x2, 0x528, 0x525, 0x3, 0x2, 
    0x2, 0x2, 0x528, 0x526, 0x3, 0x2, 0x2, 0x2, 0x528, 0x527, 0x3, 0x2, 
    0x2, 0x2, 0x529, 0x539, 0x3, 0x2, 0x2, 0x2, 0x52a, 0x52b, 0xc, 0x1c, 
    0x2, 0x2, 0x52b, 0x52c, 0x7, 0x51, 0x2, 0x2, 0x52c, 0x52d, 0x5, 0x10e, 
    0x88, 0x2, 0x52d, 0x52e, 0x7, 0x52, 0x2, 0x2, 0x52e, 0x539, 0x3, 0x2, 
    0x2, 0x2, 0x52f, 0x530, 0xc, 0x13, 0x2, 0x2, 0x530, 0x539, 0x9, 0xe, 
    0x2, 0x2, 0x531, 0x532, 0xc, 0x4, 0x2, 0x2, 0x532, 0x536, 0x9, 0x4, 
    0x2, 0x2, 0x533, 0x537, 0x7, 0x7e, 0x2, 0x2, 0x534, 0x537, 0x7, 0x4d, 
    0x2, 0x2, 0x535, 0x537, 0x5, 0x108, 0x85, 0x2, 0x536, 0x533, 0x3, 0x2, 
    0x2, 0x2, 0x536, 0x534, 0x3, 0x2, 0x2, 0x2, 0x536, 0x535, 0x3, 0x2, 
    0x2, 0x2, 0x537, 0x539, 0x3, 0x2, 0x2, 0x2, 0x538, 0x4fc, 0x3, 0x2, 
    0x2, 0x2, 0x538, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x538, 0x502, 0x3, 0x2, 
    0x2, 0x2, 0x538, 0x505, 0x3, 0x2, 0x2, 0x2, 0x538, 0x508, 0x3, 0x2, 
    0x2, 0x2, 0x538, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x538, 0x50e, 0x3, 0x2, 
    0x2, 0x2, 0x538, 0x511, 0x3, 0x2, 0x2, 0x2, 0x538, 0x514, 0x3, 0x2, 
    0x2, 0x2, 0x538, 0x517, 0x3, 0x2, 0x2, 0x2, 0x538, 0x51a, 0x3, 0x2, 
    0x2, 0x2, 0x538, 0x51d, 0x3, 0x2, 0x2, 0x2, 0x538, 0x520, 0x3, 0x2, 
    0x2, 0x2, 0x538, 0x523, 0x3, 0x2, 0x2, 0x2, 0x538, 0x52a, 0x3, 0x2, 
    0x2, 0x2, 0x538, 0x52f, 0x3, 0x2, 0x2, 0x2, 0x538, 0x531, 0x3, 0x2, 
    0x2, 0x2, 0x539, 0x53c, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x538, 0x3, 0x2, 
    0x2, 0x2, 0x53a, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x109, 0x3, 0x2, 
    0x2, 0x2, 0x53c, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x53d, 0x53e, 0x7, 0x4f, 
    0x2, 0x2, 0x53e, 0x53f, 0x5, 0x108, 0x85, 0x2, 0x53f, 0x540, 0x7, 0x50, 
    0x2, 0x2, 0x540, 0x544, 0x3, 0x2, 0x2, 0x2, 0x541, 0x544, 0x5, 0x142, 
    0xa2, 0x2, 0x542, 0x544, 0x7, 0x7e, 0x2, 0x2, 0x543, 0x53d, 0x3, 0x2, 
    0x2, 0x2, 0x543, 0x541, 0x3, 0x2, 0x2, 0x2, 0x543, 0x542, 0x3, 0x2, 
    0x2, 0x2, 0x544, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x545, 0x546, 0x7, 0x4f, 
    0x2, 0x2, 0x546, 0x547, 0x5, 0x108, 0x85, 0x2, 0x547, 0x548, 0x7, 0x50, 
    0x2, 0x2, 0x548, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x549, 0x54e, 0x5, 0x108, 
    0x85, 0x2, 0x54a, 0x54b, 0x7, 0x73, 0x2, 0x2, 0x54b, 0x54d, 0x5, 0x108, 
    0x85, 0x2, 0x54c, 0x54a, 0x3, 0x2, 0x2, 0x2, 0x54d, 0x550, 0x3, 0x2, 
    0x2, 0x2, 0x54e, 0x54c, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x54f, 0x3, 0x2, 
    0x2, 0x2, 0x54f, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x550, 0x54e, 0x3, 0x2, 
    0x2, 0x2, 0x551, 0x556, 0x5, 0xb0, 0x59, 0x2, 0x552, 0x553, 0x7, 0x73, 
    0x2, 0x2, 0x553, 0x555, 0x5, 0xb0, 0x59, 0x2, 0x554, 0x552, 0x3, 0x2, 
    0x2, 0x2, 0x555, 0x558, 0x3, 0x2, 0x2, 0x2, 0x556, 0x554, 0x3, 0x2, 
    0x2, 0x2, 0x556, 0x557, 0x3, 0x2, 0x2, 0x2, 0x557, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x558, 0x556, 0x3, 0x2, 0x2, 0x2, 0x559, 0x55a, 0x7, 0x7e, 
    0x2, 0x2, 0x55a, 0x55c, 0x7, 0x6e, 0x2, 0x2, 0x55b, 0x559, 0x3, 0x2, 
    0x2, 0x2, 0x55b, 0x55c, 0x3, 0x2, 0x2, 0x2, 0x55c, 0x55d, 0x3, 0x2, 
    0x2, 0x2, 0x55d, 0x55e, 0x5, 0x108, 0x85, 0x2, 0x55e, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x55f, 0x564, 0x5, 0x112, 0x8a, 0x2, 0x560, 0x561, 0x7, 0x73, 
    0x2, 0x2, 0x561, 0x563, 0x5, 0x112, 0x8a, 0x2, 0x562, 0x560, 0x3, 0x2, 
    0x2, 0x2, 0x563, 0x566, 0x3, 0x2, 0x2, 0x2, 0x564, 0x562, 0x3, 0x2, 
    0x2, 0x2, 0x564, 0x565, 0x3, 0x2, 0x2, 0x2, 0x565, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x566, 0x564, 0x3, 0x2, 0x2, 0x2, 0x567, 0x568, 0x7, 0x7e, 
    0x2, 0x2, 0x568, 0x56a, 0x7, 0x4f, 0x2, 0x2, 0x569, 0x56b, 0x5, 0x114, 
    0x8b, 0x2, 0x56a, 0x569, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x56b, 0x3, 0x2, 
    0x2, 0x2, 0x56b, 0x56c, 0x3, 0x2, 0x2, 0x2, 0x56c, 0x56d, 0x7, 0x50, 
    0x2, 0x2, 0x56d, 0x117, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x573, 0x5, 0x11c, 
    0x8f, 0x2, 0x56f, 0x570, 0x7, 0x73, 0x2, 0x2, 0x570, 0x572, 0x5, 0x11c, 
    0x8f, 0x2, 0x571, 0x56f, 0x3, 0x2, 0x2, 0x2, 0x572, 0x575, 0x3, 0x2, 
    0x2, 0x2, 0x573, 0x571, 0x3, 0x2, 0x2, 0x2, 0x573, 0x574, 0x3, 0x2, 
    0x2, 0x2, 0x574, 0x119, 0x3, 0x2, 0x2, 0x2, 0x575, 0x573, 0x3, 0x2, 
    0x2, 0x2, 0x576, 0x577, 0x7, 0x4f, 0x2, 0x2, 0x577, 0x578, 0x5, 0x122, 
    0x92, 0x2, 0x578, 0x579, 0x7, 0x50, 0x2, 0x2, 0x579, 0x57d, 0x3, 0x2, 
    0x2, 0x2, 0x57a, 0x57b, 0x7, 0x4f, 0x2, 0x2, 0x57b, 0x57d, 0x7, 0x50, 
    0x2, 0x2, 0x57c, 0x576, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x57a, 0x3, 0x2, 
    0x2, 0x2, 0x57d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x57e, 0x57f, 0x5, 0xb0, 
    0x59, 0x2, 0x57f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x580, 0x581, 0x7, 0x7e, 
    0x2, 0x2, 0x581, 0x582, 0x5, 0x11a, 0x8e, 0x2, 0x582, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x583, 0x584, 0x7, 0x7e, 0x2, 0x2, 0x584, 0x585, 0x7, 0x76, 
    0x2, 0x2, 0x585, 0x586, 0x5, 0x11e, 0x90, 0x2, 0x586, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x587, 0x58c, 0x5, 0x11c, 0x8f, 0x2, 0x588, 0x589, 0x7, 0x73, 
    0x2, 0x2, 0x589, 0x58b, 0x5, 0x11c, 0x8f, 0x2, 0x58a, 0x588, 0x3, 0x2, 
    0x2, 0x2, 0x58b, 0x58e, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58a, 0x3, 0x2, 
    0x2, 0x2, 0x58c, 0x58d, 0x3, 0x2, 0x2, 0x2, 0x58d, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x58e, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x58f, 0x590, 0x7, 0x7e, 
    0x2, 0x2, 0x590, 0x592, 0x7, 0x4f, 0x2, 0x2, 0x591, 0x593, 0x5, 0x10e, 
    0x88, 0x2, 0x592, 0x591, 0x3, 0x2, 0x2, 0x2, 0x592, 0x593, 0x3, 0x2, 
    0x2, 0x2, 0x593, 0x594, 0x3, 0x2, 0x2, 0x2, 0x594, 0x595, 0x7, 0x50, 
    0x2, 0x2, 0x595, 0x125, 0x3, 0x2, 0x2, 0x2, 0x596, 0x599, 0x7, 0x7e, 
    0x2, 0x2, 0x597, 0x598, 0x7, 0x6e, 0x2, 0x2, 0x598, 0x59a, 0x5, 0x108, 
    0x85, 0x2, 0x599, 0x597, 0x3, 0x2, 0x2, 0x2, 0x599, 0x59a, 0x3, 0x2, 
    0x2, 0x2, 0x59a, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x59e, 0x7, 0x4d, 
    0x2, 0x2, 0x59c, 0x59d, 0x7, 0x6e, 0x2, 0x2, 0x59d, 0x59f, 0x5, 0x108, 
    0x85, 0x2, 0x59e, 0x59c, 0x3, 0x2, 0x2, 0x2, 0x59e, 0x59f, 0x3, 0x2, 
    0x2, 0x2, 0x59f, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a0, 0x596, 0x3, 0x2, 
    0x2, 0x2, 0x5a0, 0x59b, 0x3, 0x2, 0x2, 0x2, 0x5a1, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x5a2, 0x5a7, 0x5, 0x126, 0x94, 0x2, 0x5a3, 0x5a4, 0x7, 0x73, 
    0x2, 0x2, 0x5a4, 0x5a6, 0x5, 0x126, 0x94, 0x2, 0x5a5, 0x5a3, 0x3, 0x2, 
    0x2, 0x2, 0x5a6, 0x5a9, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5a5, 0x3, 0x2, 
    0x2, 0x2, 0x5a7, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5a8, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x5a9, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ac, 0x7, 0x53, 
    0x2, 0x2, 0x5ab, 0x5ad, 0x5, 0x128, 0x95, 0x2, 0x5ac, 0x5ab, 0x3, 0x2, 
    0x2, 0x2, 0x5ac, 0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ae, 0x3, 0x2, 
    0x2, 0x2, 0x5ae, 0x5af, 0x7, 0x54, 0x2, 0x2, 0x5af, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x5b0, 0x5b3, 0x7, 0x7e, 0x2, 0x2, 0x5b1, 0x5b2, 0x7, 0x6e, 
    0x2, 0x2, 0x5b2, 0x5b4, 0x5, 0xb0, 0x59, 0x2, 0x5b3, 0x5b1, 0x3, 0x2, 
    0x2, 0x2, 0x5b3, 0x5b4, 0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5bb, 0x3, 0x2, 
    0x2, 0x2, 0x5b5, 0x5b8, 0x7, 0x4d, 0x2, 0x2, 0x5b6, 0x5b7, 0x7, 0x6e, 
    0x2, 0x2, 0x5b7, 0x5b9, 0x5, 0xb0, 0x59, 0x2, 0x5b8, 0x5b6, 0x3, 0x2, 
    0x2, 0x2, 0x5b8, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5b9, 0x5bb, 0x3, 0x2, 
    0x2, 0x2, 0x5ba, 0x5b0, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5b5, 0x3, 0x2, 
    0x2, 0x2, 0x5bb, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5c1, 0x5, 0x12c, 
    0x97, 0x2, 0x5bd, 0x5be, 0x7, 0x73, 0x2, 0x2, 0x5be, 0x5c0, 0x5, 0x12c, 
    0x97, 0x2, 0x5bf, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c3, 0x3, 0x2, 
    0x2, 0x2, 0x5c1, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5c2, 0x3, 0x2, 
    0x2, 0x2, 0x5c2, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c1, 0x3, 0x2, 
    0x2, 0x2, 0x5c4, 0x5c6, 0x7, 0x53, 0x2, 0x2, 0x5c5, 0x5c7, 0x5, 0x12e, 
    0x98, 0x2, 0x5c6, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c7, 0x3, 0x2, 
    0x2, 0x2, 0x5c7, 0x5c8, 0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5d1, 0x7, 0x54, 
    0x2, 0x2, 0x5c9, 0x5cb, 0x7, 0x53, 0x2, 0x2, 0x5ca, 0x5cc, 0x5, 0x12e, 
    0x98, 0x2, 0x5cb, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5cc, 0x3, 0x2, 
    0x2, 0x2, 0x5cc, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5ce, 0x7, 0x73, 
    0x2, 0x2, 0x5ce, 0x5cf, 0x7, 0x54, 0x2, 0x2, 0x5cf, 0x5d1, 0x8, 0x99, 
    0x1, 0x2, 0x5d0, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5c9, 0x3, 0x2, 
    0x2, 0x2, 0x5d1, 0x131, 0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d5, 0x5, 0x108, 
    0x85, 0x2, 0x5d3, 0x5d4, 0x7, 0x56, 0x2, 0x2, 0x5d4, 0x5d6, 0x5, 0x108, 
    0x85, 0x2, 0x5d5, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5d6, 0x3, 0x2, 
    0x2, 0x2, 0x5d6, 0x133, 0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5da, 0x5, 0xb0, 
    0x59, 0x2, 0x5d8, 0x5d9, 0x7, 0x56, 0x2, 0x2, 0x5d9, 0x5db, 0x5, 0xb0, 
    0x59, 0x2, 0x5da, 0x5d8, 0x3, 0x2, 0x2, 0x2, 0x5da, 0x5db, 0x3, 0x2, 
    0x2, 0x2, 0x5db, 0x135, 0x3, 0x2, 0x2, 0x2, 0x5dc, 0x5e1, 0x5, 0x132, 
    0x9a, 0x2, 0x5dd, 0x5de, 0x7, 0x73, 0x2, 0x2, 0x5de, 0x5e0, 0x5, 0x132, 
    0x9a, 0x2, 0x5df, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5e0, 0x5e3, 0x3, 0x2, 
    0x2, 0x2, 0x5e1, 0x5df, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5e2, 0x3, 0x2, 
    0x2, 0x2, 0x5e2, 0x137, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x5e1, 0x3, 0x2, 
    0x2, 0x2, 0x5e4, 0x5e9, 0x5, 0x134, 0x9b, 0x2, 0x5e5, 0x5e6, 0x7, 0x73, 
    0x2, 0x2, 0x5e6, 0x5e8, 0x5, 0x134, 0x9b, 0x2, 0x5e7, 0x5e5, 0x3, 0x2, 
    0x2, 0x2, 0x5e8, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5e9, 0x5e7, 0x3, 0x2, 
    0x2, 0x2, 0x5e9, 0x5ea, 0x3, 0x2, 0x2, 0x2, 0x5ea, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x5eb, 0x5e9, 0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ee, 0x7, 0x53, 
    0x2, 0x2, 0x5ed, 0x5ef, 0x5, 0x136, 0x9c, 0x2, 0x5ee, 0x5ed, 0x3, 0x2, 
    0x2, 0x2, 0x5ee, 0x5ef, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f0, 0x3, 0x2, 
    0x2, 0x2, 0x5f0, 0x5f9, 0x7, 0x54, 0x2, 0x2, 0x5f1, 0x5f3, 0x7, 0x53, 
    0x2, 0x2, 0x5f2, 0x5f4, 0x5, 0x136, 0x9c, 0x2, 0x5f3, 0x5f2, 0x3, 0x2, 
    0x2, 0x2, 0x5f3, 0x5f4, 0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5f5, 0x3, 0x2, 
    0x2, 0x2, 0x5f5, 0x5f6, 0x7, 0x73, 0x2, 0x2, 0x5f6, 0x5f7, 0x7, 0x54, 
    0x2, 0x2, 0x5f7, 0x5f9, 0x8, 0x9e, 0x1, 0x2, 0x5f8, 0x5ec, 0x3, 0x2, 
    0x2, 0x2, 0x5f8, 0x5f1, 0x3, 0x2, 0x2, 0x2, 0x5f9, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x5fa, 0x5fc, 0x7, 0x53, 0x2, 0x2, 0x5fb, 0x5fd, 0x5, 0x138, 
    0x9d, 0x2, 0x5fc, 0x5fb, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0x5fd, 0x3, 0x2, 
    0x2, 0x2, 0x5fd, 0x5fe, 0x3, 0x2, 0x2, 0x2, 0x5fe, 0x607, 0x7, 0x54, 
    0x2, 0x2, 0x5ff, 0x601, 0x7, 0x53, 0x2, 0x2, 0x600, 0x602, 0x5, 0x138, 
    0x9d, 0x2, 0x601, 0x600, 0x3, 0x2, 0x2, 0x2, 0x601, 0x602, 0x3, 0x2, 
    0x2, 0x2, 0x602, 0x603, 0x3, 0x2, 0x2, 0x2, 0x603, 0x604, 0x7, 0x73, 
    0x2, 0x2, 0x604, 0x605, 0x7, 0x54, 0x2, 0x2, 0x605, 0x607, 0x8, 0x9f, 
    0x1, 0x2, 0x606, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x606, 0x5ff, 0x3, 0x2, 
    0x2, 0x2, 0x607, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x608, 0x60a, 0x7, 0x53, 
    0x2, 0x2, 0x609, 0x60b, 0x5, 0x10e, 0x88, 0x2, 0x60a, 0x609, 0x3, 0x2, 
    0x2, 0x2, 0x60a, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x60c, 0x3, 0x2, 
    0x2, 0x2, 0x60c, 0x613, 0x7, 0x54, 0x2, 0x2, 0x60d, 0x60f, 0x7, 0x4f, 
    0x2, 0x2, 0x60e, 0x610, 0x5, 0x10e, 0x88, 0x2, 0x60f, 0x60e, 0x3, 0x2, 
    0x2, 0x2, 0x60f, 0x610, 0x3, 0x2, 0x2, 0x2, 0x610, 0x611, 0x3, 0x2, 
    0x2, 0x2, 0x611, 0x613, 0x7, 0x50, 0x2, 0x2, 0x612, 0x608, 0x3, 0x2, 
    0x2, 0x2, 0x612, 0x60d, 0x3, 0x2, 0x2, 0x2, 0x613, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x614, 0x616, 0x7, 0x53, 0x2, 0x2, 0x615, 0x617, 0x5, 0x110, 
    0x89, 0x2, 0x616, 0x615, 0x3, 0x2, 0x2, 0x2, 0x616, 0x617, 0x3, 0x2, 
    0x2, 0x2, 0x617, 0x618, 0x3, 0x2, 0x2, 0x2, 0x618, 0x62d, 0x7, 0x54, 
    0x2, 0x2, 0x619, 0x61b, 0x7, 0x4f, 0x2, 0x2, 0x61a, 0x61c, 0x5, 0x110, 
    0x89, 0x2, 0x61b, 0x61a, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x61c, 0x3, 0x2, 
    0x2, 0x2, 0x61c, 0x61d, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x62d, 0x7, 0x50, 
    0x2, 0x2, 0x61e, 0x620, 0x7, 0x53, 0x2, 0x2, 0x61f, 0x621, 0x5, 0x110, 
    0x89, 0x2, 0x620, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x620, 0x621, 0x3, 0x2, 
    0x2, 0x2, 0x621, 0x622, 0x3, 0x2, 0x2, 0x2, 0x622, 0x623, 0x7, 0x73, 
    0x2, 0x2, 0x623, 0x624, 0x7, 0x54, 0x2, 0x2, 0x624, 0x62d, 0x8, 0xa1, 
    0x1, 0x2, 0x625, 0x627, 0x7, 0x4f, 0x2, 0x2, 0x626, 0x628, 0x5, 0x110, 
    0x89, 0x2, 0x627, 0x626, 0x3, 0x2, 0x2, 0x2, 0x627, 0x628, 0x3, 0x2, 
    0x2, 0x2, 0x628, 0x629, 0x3, 0x2, 0x2, 0x2, 0x629, 0x62a, 0x7, 0x73, 
    0x2, 0x2, 0x62a, 0x62b, 0x7, 0x50, 0x2, 0x2, 0x62b, 0x62d, 0x8, 0xa1, 
    0x1, 0x2, 0x62c, 0x614, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x619, 0x3, 0x2, 
    0x2, 0x2, 0x62c, 0x61e, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x625, 0x3, 0x2, 
    0x2, 0x2, 0x62d, 0x141, 0x3, 0x2, 0x2, 0x2, 0x62e, 0x634, 0x5, 0x144, 
    0xa3, 0x2, 0x62f, 0x634, 0x5, 0x146, 0xa4, 0x2, 0x630, 0x634, 0x7, 0x4c, 
    0x2, 0x2, 0x631, 0x634, 0x7, 0x4d, 0x2, 0x2, 0x632, 0x634, 0x7, 0x4e, 
    0x2, 0x2, 0x633, 0x62e, 0x3, 0x2, 0x2, 0x2, 0x633, 0x62f, 0x3, 0x2, 
    0x2, 0x2, 0x633, 0x630, 0x3, 0x2, 0x2, 0x2, 0x633, 0x631, 0x3, 0x2, 
    0x2, 0x2, 0x633, 0x632, 0x3, 0x2, 0x2, 0x2, 0x634, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x635, 0x636, 0x9, 0xf, 0x2, 0x2, 0x636, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x637, 0x638, 0x9, 0x10, 0x2, 0x2, 0x638, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0x14b, 0x153, 0x15b, 0x163, 0x16a, 0x16e, 0x173, 0x17b, 
    0x185, 0x18d, 0x193, 0x198, 0x19c, 0x1a3, 0x1aa, 0x1ad, 0x1b6, 0x1e6, 
    0x1fc, 0x204, 0x20d, 0x212, 0x219, 0x222, 0x227, 0x231, 0x237, 0x24c, 
    0x255, 0x25e, 0x266, 0x277, 0x27d, 0x282, 0x289, 0x290, 0x29a, 0x2a4, 
    0x2ad, 0x2b6, 0x2bf, 0x2c4, 0x2cd, 0x2de, 0x2e4, 0x2ea, 0x2f3, 0x2fa, 
    0x2fe, 0x305, 0x309, 0x30e, 0x313, 0x318, 0x320, 0x328, 0x32d, 0x331, 
    0x335, 0x35a, 0x361, 0x369, 0x36e, 0x372, 0x376, 0x37c, 0x381, 0x389, 
    0x38b, 0x38f, 0x395, 0x39a, 0x3a2, 0x3a4, 0x3a8, 0x3b1, 0x3b5, 0x3b8, 
    0x3bd, 0x3c1, 0x3ca, 0x3ce, 0x3d1, 0x3d6, 0x3e2, 0x3ed, 0x3f8, 0x403, 
    0x40e, 0x418, 0x420, 0x428, 0x430, 0x438, 0x441, 0x44c, 0x456, 0x45f, 
    0x46a, 0x472, 0x47c, 0x487, 0x48f, 0x49c, 0x4a2, 0x4b5, 0x4bc, 0x4c0, 
    0x4c4, 0x4c8, 0x4cc, 0x4d1, 0x4d6, 0x4e2, 0x4e6, 0x4ea, 0x4ee, 0x4f2, 
    0x4fa, 0x528, 0x536, 0x538, 0x53a, 0x543, 0x54e, 0x556, 0x55b, 0x564, 
    0x56a, 0x573, 0x57c, 0x58c, 0x592, 0x599, 0x59e, 0x5a0, 0x5a7, 0x5ac, 
    0x5b3, 0x5b8, 0x5ba, 0x5c1, 0x5c6, 0x5cb, 0x5d0, 0x5d5, 0x5da, 0x5e1, 
    0x5e9, 0x5ee, 0x5f3, 0x5f8, 0x5fc, 0x601, 0x606, 0x60a, 0x60f, 0x612, 
    0x616, 0x61b, 0x620, 0x627, 0x62c, 0x633, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

EscriptParser::Initializer EscriptParser::_init;
