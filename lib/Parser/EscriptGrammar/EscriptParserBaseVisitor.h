


// Generated from EscriptParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "EscriptParserVisitor.h"


namespace EscriptGrammar {

/**
 * This class provides an empty implementation of EscriptParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  EscriptParserBaseVisitor : public EscriptParserVisitor {
public:

  std::any visitCompilationUnit(EscriptParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitModuleUnit(EscriptParser::ModuleUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitEvaluateUnit(EscriptParser::EvaluateUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitModuleDeclarationStatement(EscriptParser::ModuleDeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitModuleFunctionDeclaration(EscriptParser::ModuleFunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitModuleFunctionParameterList(EscriptParser::ModuleFunctionParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitModuleFunctionParameter(EscriptParser::ModuleFunctionParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitTopLevelDeclaration(EscriptParser::TopLevelDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitClassDeclaration(EscriptParser::ClassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitClassParameters(EscriptParser::ClassParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitClassParameterList(EscriptParser::ClassParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitClassBody(EscriptParser::ClassBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitClassStatement(EscriptParser::ClassStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitUninitFunctionDeclaration(EscriptParser::UninitFunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitFunctionDeclaration(EscriptParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitStringIdentifier(EscriptParser::StringIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitUseDeclaration(EscriptParser::UseDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitIncludeDeclaration(EscriptParser::IncludeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitProgramDeclaration(EscriptParser::ProgramDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitStatement(EscriptParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitStatementLabel(EscriptParser::StatementLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitIfStatement(EscriptParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitGotoStatement(EscriptParser::GotoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitReturnStatement(EscriptParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitConstStatement(EscriptParser::ConstStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitVarStatement(EscriptParser::VarStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitDoStatement(EscriptParser::DoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitWhileStatement(EscriptParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitExitStatement(EscriptParser::ExitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitBreakStatement(EscriptParser::BreakStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitContinueStatement(EscriptParser::ContinueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitForStatement(EscriptParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitForeachIterableExpression(EscriptParser::ForeachIterableExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitForeachStatement(EscriptParser::ForeachStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitRepeatStatement(EscriptParser::RepeatStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitCaseStatement(EscriptParser::CaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitEnumStatement(EscriptParser::EnumStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitBlock(EscriptParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitVariableDeclarationInitializer(EscriptParser::VariableDeclarationInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitEnumList(EscriptParser::EnumListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitEnumListEntry(EscriptParser::EnumListEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitSwitchBlockStatementGroup(EscriptParser::SwitchBlockStatementGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitSwitchLabel(EscriptParser::SwitchLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitForGroup(EscriptParser::ForGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitBasicForStatement(EscriptParser::BasicForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitCstyleForStatement(EscriptParser::CstyleForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitIdentifierList(EscriptParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitVariableDeclarationList(EscriptParser::VariableDeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitConstantDeclaration(EscriptParser::ConstantDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitVariableDeclaration(EscriptParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitBindingDeclaration(EscriptParser::BindingDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitIndexBindingList(EscriptParser::IndexBindingListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitSequenceBindingList(EscriptParser::SequenceBindingListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitSequenceBinding(EscriptParser::SequenceBindingContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitIndexBinding(EscriptParser::IndexBindingContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitBinding(EscriptParser::BindingContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitBindingDeclarationInitializer(EscriptParser::BindingDeclarationInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitProgramParameters(EscriptParser::ProgramParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitProgramParameterList(EscriptParser::ProgramParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitProgramParameter(EscriptParser::ProgramParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitFunctionParameters(EscriptParser::FunctionParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitFunctionParameterList(EscriptParser::FunctionParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitFunctionParameter(EscriptParser::FunctionParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitScopedFunctionCall(EscriptParser::ScopedFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitFunctionReference(EscriptParser::FunctionReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitExpression(EscriptParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitPrimary(EscriptParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitScopedIdentifier(EscriptParser::ScopedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitFunctionExpression(EscriptParser::FunctionExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitExplicitArrayInitializer(EscriptParser::ExplicitArrayInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitExplicitStructInitializer(EscriptParser::ExplicitStructInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitExplicitDictInitializer(EscriptParser::ExplicitDictInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitExplicitErrorInitializer(EscriptParser::ExplicitErrorInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitBareArrayInitializer(EscriptParser::BareArrayInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitParExpression(EscriptParser::ParExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitExpressionList(EscriptParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitExpressionListEntry(EscriptParser::ExpressionListEntryContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitExpressionSuffix(EscriptParser::ExpressionSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitIndexingSuffix(EscriptParser::IndexingSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitIndexList(EscriptParser::IndexListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitNavigationSuffix(EscriptParser::NavigationSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitMethodCallSuffix(EscriptParser::MethodCallSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitFunctionCallSuffix(EscriptParser::FunctionCallSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitFunctionCall(EscriptParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitStructInitializerExpression(EscriptParser::StructInitializerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitStructInitializerExpressionList(EscriptParser::StructInitializerExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitStructInitializer(EscriptParser::StructInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitDictInitializerExpression(EscriptParser::DictInitializerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitDictInitializerExpressionList(EscriptParser::DictInitializerExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitDictInitializer(EscriptParser::DictInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitArrayInitializer(EscriptParser::ArrayInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitLiteral(EscriptParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitInterpolatedString(EscriptParser::InterpolatedStringContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitInterpolatedStringPart(EscriptParser::InterpolatedStringPartContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitIntegerLiteral(EscriptParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitFloatLiteral(EscriptParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  std::any visitBoolLiteral(EscriptParser::BoolLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace EscriptGrammar
