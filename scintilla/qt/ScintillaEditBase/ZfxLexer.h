#pragma once

#ifndef __Zfx_Lexer_H__
#define __Zfx_Lexer_H__

#include "ILexer.h"

namespace Scintilla {

    class ZfxLexer : public ILexer5 {
    public:
        ZfxLexer();
        virtual ~ZfxLexer();

        int  Version() const override;
        void Release() override;
        const char* PropertyNames() override;
        int  PropertyType(const char* name) override;
        const char* DescribeProperty(const char* name) override;
        Sci_Position PropertySet(const char* key, const char* val) override;
        const char* DescribeWordListSets() override;
        Sci_Position WordListSet(int n, const char* wl) override;
        void Lex(Sci_PositionU startPos, Sci_Position lengthDoc, int initStyle, IDocument* pAccess) override;
        void Fold(Sci_PositionU startPos, Sci_Position lengthDoc, int initStyle, IDocument* pAccess) override;
        void* PrivateCall(int operation, void* pointer) override;
    };

}

#endif