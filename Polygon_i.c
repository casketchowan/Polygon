

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 21:14:07 2038
 */
/* Compiler settings for Polygon.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IPolyCtl,0x01e1fa67,0x235d,0x4be7,0x93,0xa9,0xd6,0x81,0xdb,0x43,0x15,0x04);


MIDL_DEFINE_GUID(IID, LIBID_PolygonLib,0xf8250c36,0x3cad,0x4a7e,0x9d,0xb0,0x04,0x27,0x95,0x26,0xef,0x16);


MIDL_DEFINE_GUID(IID, DIID__IPolyCtlEvents,0x0ff32b6c,0xc20f,0x49e8,0xa5,0x0e,0xa9,0x5c,0x64,0x9c,0xe3,0xd2);


MIDL_DEFINE_GUID(CLSID, CLSID_PolyCtl,0x57c81d92,0x03a3,0x4249,0xb3,0x81,0x07,0xec,0x1b,0x89,0x85,0x43);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



