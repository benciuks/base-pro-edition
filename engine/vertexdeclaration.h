/**
 * This source code is a part of D3 game project.
 * (c) Digital Dimension Development, 2004-2005
 *
 * @description vertex declarations
 *
 * @author bad3p
 */

#ifndef VERTEX_DECLARATIONS_INCLUDED
#define VERTEX_DECLARATIONS_INCLUDED

#include "headers.h"

/**
 * the declaration of nothing
 */

static D3DVERTEXELEMENT9 emptyDeclaration[] = { D3DDECL_END() };

/**
 * vertex + normal
 */

static D3DVERTEXELEMENT9 vertexNormal[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    D3DDECL_END()
};

/**
 * vertex + normal prelights
 */

static D3DVERTEXELEMENT9 vertexNormalPrelight[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 32, D3DDECLTYPE_D3DCOLOR, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_COLOR, 0},
    D3DDECL_END()
};

/**
 * vertex + normal + uv's
 */

static D3DVERTEXELEMENT9 vertexNormalUV1[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    D3DDECL_END()
};

static D3DVERTEXELEMENT9 vertexNormalUV2[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1},
    D3DDECL_END()
};

static D3DVERTEXELEMENT9 vertexNormalUV3[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1},
    {0, 40, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 2},
    D3DDECL_END()
};

static D3DVERTEXELEMENT9 vertexNormalUV4[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1},
    {0, 40, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 2},
    {0, 48, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 3},
    D3DDECL_END()
};

/**
 * vertex + normal + uv's + tangent + binormal
 */

static D3DVERTEXELEMENT9 vertexNormalUV1TangentBinormal[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TANGENT, 0},
    {0, 44, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_BINORMAL, 0},
    D3DDECL_END()
};

static D3DVERTEXELEMENT9 vertexNormalUV2TangentBinormal[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1},
    {0, 40, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TANGENT, 0},
    {0, 52, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_BINORMAL, 0},
    D3DDECL_END()
};

static D3DVERTEXELEMENT9 vertexNormalUV3TangentBinormal[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1},
    {0, 40, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 2},
    {0, 48, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TANGENT, 0},
    {0, 60, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_BINORMAL, 0},
    D3DDECL_END()
};

static D3DVERTEXELEMENT9 vertexNormalUV4TangentBinormal[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1},
    {0, 40, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 2},
    {0, 48, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 3},
    {0, 56, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TANGENT, 0},
    {0, 68, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_BINORMAL, 0},
    D3DDECL_END()
};

/**
 * vertex + normal + uv's + prelights
 */

static D3DVERTEXELEMENT9 vertexNormalUV1Prelight[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_D3DCOLOR, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_COLOR, 0},
    D3DDECL_END()
};

static D3DVERTEXELEMENT9 vertexNormalUV2Prelight[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_FLOAT2,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1},
    {0, 40, D3DDECLTYPE_D3DCOLOR, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_COLOR, 0},
    D3DDECL_END()
};

static D3DVERTEXELEMENT9 vertexNormalUV3Prelight[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_FLOAT2,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1},
    {0, 40, D3DDECLTYPE_FLOAT2,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 2},
    {0, 48, D3DDECLTYPE_D3DCOLOR, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_COLOR, 0},
    D3DDECL_END()
};

static D3DVERTEXELEMENT9 vertexNormalUV4Prelight[] =
{
    {0,  0, D3DDECLTYPE_FLOAT3,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
    {0, 12, D3DDECLTYPE_FLOAT3,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_NORMAL, 0},
    {0, 24, D3DDECLTYPE_FLOAT2,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
    {0, 32, D3DDECLTYPE_FLOAT2,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 1},
    {0, 40, D3DDECLTYPE_FLOAT2,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 2},
    {0, 48, D3DDECLTYPE_FLOAT2,   D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 3},
    {0, 56, D3DDECLTYPE_D3DCOLOR, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_COLOR, 0},
    D3DDECL_END()
};

/**
 * geometry chooser
 */

static D3DVERTEXELEMENT9* dxGetVertexDeclaration(int numUVSets, int numPrelights)
{
    assert( numUVSets>=0 && numUVSets<4 );
    if( numPrelights )
    {
        switch( numUVSets )
        {
        case 0: return vertexNormalPrelight;
        case 1: return vertexNormalUV1Prelight;
        case 2: return vertexNormalUV2Prelight;
        case 3: return vertexNormalUV3Prelight;
        case 4: return vertexNormalUV4Prelight;
        }
        return NULL;
    }
    else
    {
        switch( numUVSets )
        {
        case 0: return vertexNormal;
        case 1: return vertexNormalUV1;
        case 2: return vertexNormalUV2;
        case 3: return vertexNormalUV3;
        case 4: return vertexNormalUV4;
        }
        return NULL;
    }
    return NULL;
}

/**
 * declaration analyzer
 */

static unsigned int dxGetDeclTypeSize(D3DDECLTYPE type)
{
    switch( type )
    {
    case D3DDECLTYPE_FLOAT1: return sizeof(float);
    case D3DDECLTYPE_FLOAT2: return sizeof(float)*2;
    case D3DDECLTYPE_FLOAT3: return sizeof(float)*3;
    case D3DDECLTYPE_FLOAT4: return sizeof(float)*4;
    case D3DDECLTYPE_D3DCOLOR: return sizeof(D3DCOLOR);
    case D3DDECLTYPE_UBYTE4: return sizeof(BYTE)*4;
    case D3DDECLTYPE_SHORT2: return sizeof(SHORT)*2;
    case D3DDECLTYPE_SHORT4: return sizeof(SHORT)*4;
    default:
        assert( !"shouldn't be here!" ); 
        return 0;
    }
}

static unsigned int dxGetStride(D3DVERTEXELEMENT9* vertexDeclaration)
{
    unsigned int i=0, result=0;
    while( i<MAX_FVF_DECL_SIZE && vertexDeclaration[i].Stream != 0xFF )
    {
        result += dxGetDeclTypeSize( D3DDECLTYPE( vertexDeclaration[i].Type ) );
        i++;
    }
    return result;
}

static unsigned int dxGetOffset(D3DVERTEXELEMENT9* vertexDeclaration, D3DDECLUSAGE usage)
{
    unsigned int i=0, result=0;
    while( i<MAX_FVF_DECL_SIZE && vertexDeclaration[i].Stream != 0xFF )
    {
        if( vertexDeclaration[i].Usage == usage ) return result;
        result += dxGetDeclTypeSize( D3DDECLTYPE( vertexDeclaration[i].Type ) );
        i++;
    }
    return 0;
}

static int dxGetNumUVs(D3DVERTEXELEMENT9* vertexDeclaration)
{
    int i=0, result=0;
    while( i<MAX_FVF_DECL_SIZE && vertexDeclaration[i].Stream != 0xFF )
    {
        if( vertexDeclaration[i].Usage == D3DDECLUSAGE_TEXCOORD ) result++;
        i++;
    }
    return result;
}

static int dxGetNumPrelights(D3DVERTEXELEMENT9* vertexDeclaration)
{
    int i=0, result=0;
    while( i<MAX_FVF_DECL_SIZE && vertexDeclaration[i].Stream != 0xFF )
    {
        if( vertexDeclaration[i].Usage == D3DDECLUSAGE_COLOR ) result++;
        i++;
    }
    return result;
}

static bool dxIsEndOfDeclaration(D3DVERTEXELEMENT9* vertexDeclaration)
{
    return vertexDeclaration->Stream == 0xFF && 
           vertexDeclaration->Offset == 0 &&
           vertexDeclaration->Type == D3DDECLTYPE_UNUSED && 
           vertexDeclaration->Method == 0 &&
           vertexDeclaration->Usage == 0 &&
           vertexDeclaration->UsageIndex == 0;
}

#endif
