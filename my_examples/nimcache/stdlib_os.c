/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\Nim\nim-0.18.0_x64\nim-0.18.0\dist\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN -O3 -fno-strict-aliasing  -IC:\Nim\nim-0.18.0_x64\nim-0.18.0\lib -o G:\Programming\Project\Nim\nigui_examples\my_examples\nimcache\stdlib_os.o G:\Programming\Project\Nim\nigui_examples\my_examples\nimcache\stdlib_os.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef N_STDCALL_PTR(NI32, tyProc_M3PxDlueeoWgT3BgpzrqYw) (NI handle, NI16* buf, NI32 size);
typedef N_STDCALL_PTR(NI32, tyProc_hayl9b1HhJokJ1Zo9ctoglPg) (NI16* lpFileName);
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_yu6cxgKBBXbNsTkT9cyMd4g_2)(void);
N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(NI16*, newWideCString_q1KqU6WAugdPW0cwGMbUug)(NCSTRING source, NI L);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__ll2s2AIM0tZVMtCCHxSjcQ)(NI16* w, NI estimate, NI replacement);
N_LIB_PRIVATE N_NIMCALL(NI16*, newWideCString_keidLK9c3HkgArW69bcHZYGA)(NimStringDesc* s);
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* ownArgv_WVJ54JSHy7VxacV39bwBPFA;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
extern tyProc_M3PxDlueeoWgT3BgpzrqYw Dl_138822_;
extern tyProc_hayl9b1HhJokJ1Zo9ctoglPg Dl_139411_;
STRING_LITERAL(TM_yu6cxgKBBXbNsTkT9cyMd4g_3, "", 0);
static N_NIMCALL(void, TM_yu6cxgKBBXbNsTkT9cyMd4g_2)(void) {
	nimGCvisit((void*)ownArgv_WVJ54JSHy7VxacV39bwBPFA, 0);
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
	NimStringDesc* result;
	NI32 bufsize;
	NI16* buf;
	result = (NimStringDesc*)0;
	bufsize = ((NI32) 260);
	buf = newWideCString_q1KqU6WAugdPW0cwGMbUug("", ((NI) (bufsize)));
	{
		while (1) {
			NI32 L;
			L = Dl_138822_(((NI) 0), buf, bufsize);
			{
				if (!(L == ((NI32) 0))) goto LA5_;
				result = copyString(((NimStringDesc*) &TM_yu6cxgKBBXbNsTkT9cyMd4g_3));
				goto LA1;
			}
			goto LA3_;
			LA5_: ;
			{
				if (!(bufsize < L)) goto LA8_;
				buf = newWideCString_q1KqU6WAugdPW0cwGMbUug("", ((NI) (L)));
				bufsize = L;
			}
			goto LA3_;
			LA8_: ;
			{
				result = dollar__ll2s2AIM0tZVMtCCHxSjcQ(buf, ((NI) (L)), ((NI) 65533));
				goto LA1;
			}
			LA3_: ;
		}
	} LA1: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	NI32 a;
	NI16* T1_;
	result = (NIM_BOOL)0;
	T1_ = (NI16*)0;
	T1_ = newWideCString_keidLK9c3HkgArW69bcHZYGA(filename);
	a = Dl_139411_(T1_);
	{
		if (!!((a == ((NI32) -1)))) goto LA4_;
		result = ((NI32)(a & ((NI32) 16)) == ((NI32) 0));
	}
	LA4_: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void) {
nimRegisterThreadLocalMarker(TM_yu6cxgKBBXbNsTkT9cyMd4g_2);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void) {
}

