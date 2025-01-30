#include "ZfxLexer.h"

static const int NUM_RUST_KEYWORD_LISTS = 1;
static const char* const rustWordLists[NUM_RUST_KEYWORD_LISTS + 1] = {
            "int",
            0,
};


namespace Scintilla {

    ZfxLexer::ZfxLexer()
    {

    }

    ZfxLexer::~ZfxLexer()
    {

    }

    int  ZfxLexer::Version() const
    {
        return lvRelease5;
    }

    void ZfxLexer::Release()
    {
        delete this;
    }

    const char* ZfxLexer::PropertyNames() {
        return 0;
    }

    int  ZfxLexer::PropertyType(const char* name)
    {
        return 0;
    }

    const char* ZfxLexer::DescribeProperty(const char* name)
    {
        return 0;
    }

    Sci_Position ZfxLexer::PropertySet(const char* key, const char* val)
    {
        return 0;
    }

    const char* ZfxLexer::DescribeWordListSets()
    {
        return 0;
    }

    Sci_Position ZfxLexer::WordListSet(int n, const char* wl)
    {
        return 0;
    }

    void ZfxLexer::Lex(
        Sci_PositionU startPos,
        Sci_Position lengthDoc,
        int initStyle,
        IDocument* pAccess)
    {
        /* 自定义高亮逻辑 */
    }

    void ZfxLexer::Fold(Sci_PositionU startPos, Sci_Position lengthDoc, int initStyle, IDocument* pAccess)
    {

    }

    void* ZfxLexer::PrivateCall(int operation, void* pointer)
    {
        return 0;
    }

}