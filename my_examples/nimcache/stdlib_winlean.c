/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\Nim\nim-0.18.0_x64\nim-0.18.0\dist\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN  -IC:\Nim\nim-0.18.0_x64\nim-0.18.0\lib -o C:\Users\hkota\@Programming_projects\Nim\nigui_examples\my_examples\nimcache\stdlib_winlean.o C:\Users\hkota\@Programming_projects\Nim\nigui_examples\my_examples\nimcache\stdlib_winlean.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <windows.h>
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
typedef struct tyObject_GUID_J2WQBMgezjwf6Trblkflgg tyObject_GUID_J2WQBMgezjwf6Trblkflgg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw;
typedef struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg;
typedef struct Exception Exception;
typedef struct tySequence_WF89a8QyKeDCh4DYWTmSiBg tySequence_WF89a8QyKeDCh4DYWTmSiBg;
typedef struct TSafePoint TSafePoint;
typedef struct GcFrameHeader GcFrameHeader;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw;
typedef struct tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef NI8 tyArray_9cWG514ToTTjfTPLhXXV0IQ[8];
struct tyObject_GUID_J2WQBMgezjwf6Trblkflgg {
NI32 D1;
NI16 D2;
NI16 D3;
tyArray_9cWG514ToTTjfTPLhXXV0IQ D4;
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
typedef N_STDCALL_PTR(NCSTRING, tyProc_5ctyytqoGFQ0BA1imFGbVw) (int family, void* paddr, NCSTRING pStringBuffer, NI32 stringBufSize);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(void, tyProc_9bc9cLDdaqTE6n5J78feKRYg) (tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw* lpSystemTimeAsFileTime);
struct tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw {
NI32 dwLowDateTime;
NI32 dwHighDateTime;
};
typedef NF tyArray_iV2wVpdhi9coq9cstlcqapXg[2001];
struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg {
tyArray_iV2wVpdhi9coq9cstlcqapXg tls;
};
typedef N_STDCALL_PTR(NI32, tyProc_9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(NI32, tyProc_aO673xGTLLxou7P7GxoCXA) (NI32 dwFlags, void* lpSource, NI32 dwMessageId, NI32 dwLanguageId, void* lpBuffer, NI32 nSize, void* Arguments);
typedef N_STDCALL_PTR(void, tyProc_im9buRnIvptJfzdASYMEbBA) (void* p);
typedef N_STDCALL_PTR(NI16*, tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA) (void);
typedef N_STDCALL_PTR(NI32, tyProc_hayl9b1HhJokJ1Zo9ctoglPg) (NI16* para1);
typedef N_STDCALL_PTR(NI32, tyProc_IwsYs9blTXXmAlfsBWq604w) (NI16* lpName, NI16* lpValue);
typedef N_STDCALL_PTR(void, tyProc_Tjolzh1w2dIIpj3oCDGPFw) (NI32 dwMilliseconds);
typedef N_STDCALL_PTR(NI32, tyProc_5HgIhqDabtYAePzjhB7xSA) (NI32 nBufferLength, NI16* lpBuffer);
typedef N_STDCALL_PTR(NI32, tyProc_M3PxDlueeoWgT3BgpzrqYw) (NI handle, NI16* buf, NI32 size);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_hgOQFBQi19biNdOUUkFOOxA) (Exception* e);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_IIomJ6ptE6vfJ5zRbATgkQ;
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw {
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* head;
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* tail;
CRITICAL_SECTION lock;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
tyObject_SharedList_9cWkTIPQvNw7gFHMOEzMCLw toDispose;
NI gcThreadId;
};
struct tySequence_WF89a8QyKeDCh4DYWTmSiBg {
  TGenericSeq Sup;
  tyProc_IIomJ6ptE6vfJ5zRbATgkQ data[SEQ_DECL_SIZE];
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
typedef struct {tyProc_hgOQFBQi19biNdOUUkFOOxA localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
tySequence_WF89a8QyKeDCh4DYWTmSiBg* threadDestructionHandlers_8OmU3x0fNdA0DLtOmU3kWw;
NI threadId_wzrdPYhtL9czkCWS4o9an9cRw;
TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
GcFrameHeader* gcFramePtr_ot48iojqko9aFxGhyjjjVaA;
tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NIM_BOOL envComputed_OC1kQm9aRvX8VnmaXglp57Q;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* environment_rnCB7Cc69bd2mlM49cn9czO2Q;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* ownArgv_WVJ54JSHy7VxacV39bwBPFA;
} NimThreadVars;
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void*, loadLib_EFK1MHQsQvQPg5NaJH389bA)(NimStringDesc* path, NIM_BOOL global_symbols);
N_LIB_PRIVATE N_NIMCALL(void*, symAddr_fM7lTRTvv9a9axreJA2Bx7jA_2)(void* lib, NCSTRING name);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void*, GetThreadLocalVars)(void);
N_LIB_PRIVATE N_NIMCALL(void*, threadVarGetValue_RA7AnSIB7ATZq3Th1d9czYg)(NI32 dwTlsIndex);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
tyObject_GUID_J2WQBMgezjwf6Trblkflgg WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg;
TNimType NTI_J2WQBMgezjwf6Trblkflgg_;
extern TNimType NTI_sVg18TP9cLifHyygRe9cro9aA_;
extern TNimType NTI_kDPg4wXyR8DDyA0MeEjIsw_;
extern TNimType NTI_chXunH2dwinSkhpA6JnsXw_;
TNimType NTI_9cWG514ToTTjfTPLhXXV0IQ_;
tyObject_GUID_J2WQBMgezjwf6Trblkflgg WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg;
tyObject_GUID_J2WQBMgezjwf6Trblkflgg WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg;
tyProc_5ctyytqoGFQ0BA1imFGbVw inet_ntop_real_FVXn9aJ5AOo23ScDsZUc9aZw;
void* ws2_hGspZUrVrEMpO9aP9c3dJQPQ;
static void* TM_k6kyf4Co79a84IkK9blFuQVA_6;
tyProc_9bc9cLDdaqTE6n5J78feKRYg Dl_150625_;
extern NI32 globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;
tyProc_9bXer9a4ps9aSGctILcxWReVw Dl_149630_;
tyProc_aO673xGTLLxou7P7GxoCXA Dl_149635_;
tyProc_im9buRnIvptJfzdASYMEbBA Dl_149801_;
tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA Dl_150432_;
tyProc_hayl9b1HhJokJ1Zo9ctoglPg Dl_150434_;
tyProc_IwsYs9blTXXmAlfsBWq604w Dl_149818_;
tyProc_Tjolzh1w2dIIpj3oCDGPFw Dl_150629_;
tyProc_5HgIhqDabtYAePzjhB7xSA Dl_149804_;
tyProc_M3PxDlueeoWgT3BgpzrqYw Dl_149822_;
tyProc_hayl9b1HhJokJ1Zo9ctoglPg Dl_150411_;
NIM_CONST tyArray_9cWG514ToTTjfTPLhXXV0IQ TM_k6kyf4Co79a84IkK9blFuQVA_3 = {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
;
NIM_CONST tyArray_9cWG514ToTTjfTPLhXXV0IQ TM_k6kyf4Co79a84IkK9blFuQVA_4 = {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
;
STRING_LITERAL(TM_k6kyf4Co79a84IkK9blFuQVA_5, "Ws2_32.dll", 10);
STRING_LITERAL(TM_k6kyf4Co79a84IkK9blFuQVA_8, "kernel32", 8);
STRING_LITERAL(TM_k6kyf4Co79a84IkK9blFuQVA_9, "kernel32", 8);

static N_INLINE(void*, GetThreadLocalVars)(void) {
	void* result;
	void* T1_;
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = threadVarGetValue_RA7AnSIB7ATZq3Th1d9czYg(globalsSlot_ciXDZu9c27pHpCRMoz4RIgw);
	result = ((void*) ((*((tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg*) (T1_))).tls));
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	T1_ = (NI)0;
	{
		if (!(NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_LIB_PRIVATE N_NIMCALL(NI64, rdFileTime_8xfVp1z4bc5fRCRgoEFhIQ)(tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw f) {
	NI64 result;
	nimfr_("rdFileTime", "winlean.nim");
	result = (NI64)0;
	nimln_(397, "winlean.nim");
	result = (NI64)(((NI64)(NU64)(NU32)(f.dwLowDateTime)) | (NI64)((NU64)(((NI64)(NU64)(NU32)(f.dwHighDateTime))) << (NU64)(((NI) 32))));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanInit000)(void) {
	nimfr_("winlean", "winlean.nim");
	nimln_(829, "winlean.nim");
	chckNil((void*)(&WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg));
	genericReset((void*)(&WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg), (&NTI_J2WQBMgezjwf6Trblkflgg_));
	WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg.D1 = ((NI32) 631375801);
	WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg.D2 = ((NI16) -8717);
	WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg.D3 = ((NI16) 18016);
	memcpy((void*)WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg.D4, (NIM_CONST void*)TM_k6kyf4Co79a84IkK9blFuQVA_3, sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ));
	nimln_(831, "winlean.nim");
	chckNil((void*)(&WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg));
	genericReset((void*)(&WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg), (&NTI_J2WQBMgezjwf6Trblkflgg_));
	WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg.D1 = ((NI32) -1254720015);
	WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg.D2 = ((NI16) -13396);
	WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg.D3 = ((NI16) 4559);
	memcpy((void*)WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg.D4, (NIM_CONST void*)TM_k6kyf4Co79a84IkK9blFuQVA_4, sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ));
	nimln_(833, "winlean.nim");
	chckNil((void*)(&WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg));
	genericReset((void*)(&WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg), (&NTI_J2WQBMgezjwf6Trblkflgg_));
	WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg.D1 = ((NI32) -1254720014);
	WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg.D2 = ((NI16) -13396);
	WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg.D3 = ((NI16) 4559);
	memcpy((void*)WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg.D4, (NIM_CONST void*)TM_k6kyf4Co79a84IkK9blFuQVA_4, sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ));
	nimln_(883, "winlean.nim");
	inet_ntop_real_FVXn9aJ5AOo23ScDsZUc9aZw = NIM_NIL;
	nimln_(885, "winlean.nim");
	ws2_hGspZUrVrEMpO9aP9c3dJQPQ = loadLib_EFK1MHQsQvQPg5NaJH389bA(((NimStringDesc*) &TM_k6kyf4Co79a84IkK9blFuQVA_5), NIM_FALSE);
	nimln_(886, "winlean.nim");
	{
		void* T5_;
		nimln_(398, "system.nim");
		nimln_(886, "winlean.nim");
		if (!!((ws2_hGspZUrVrEMpO9aP9c3dJQPQ == NIM_NIL))) goto LA3_;
		nimln_(887, "winlean.nim");
		T5_ = (void*)0;
		T5_ = symAddr_fM7lTRTvv9a9axreJA2Bx7jA_2(ws2_hGspZUrVrEMpO9aP9c3dJQPQ, "inet_ntop");
		inet_ntop_real_FVXn9aJ5AOo23ScDsZUc9aZw = ((tyProc_5ctyytqoGFQ0BA1imFGbVw) (T5_));
	}
	LA3_: ;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_winleanDatInit000)(void) {
static TNimNode* TM_k6kyf4Co79a84IkK9blFuQVA_2[4];
static TNimNode TM_k6kyf4Co79a84IkK9blFuQVA_0[5];
NTI_J2WQBMgezjwf6Trblkflgg_.size = sizeof(tyObject_GUID_J2WQBMgezjwf6Trblkflgg);
NTI_J2WQBMgezjwf6Trblkflgg_.kind = 18;
NTI_J2WQBMgezjwf6Trblkflgg_.base = 0;
NTI_J2WQBMgezjwf6Trblkflgg_.flags = 3;
TM_k6kyf4Co79a84IkK9blFuQVA_2[0] = &TM_k6kyf4Co79a84IkK9blFuQVA_0[1];
TM_k6kyf4Co79a84IkK9blFuQVA_0[1].kind = 1;
TM_k6kyf4Co79a84IkK9blFuQVA_0[1].offset = offsetof(tyObject_GUID_J2WQBMgezjwf6Trblkflgg, D1);
TM_k6kyf4Co79a84IkK9blFuQVA_0[1].typ = (&NTI_sVg18TP9cLifHyygRe9cro9aA_);
TM_k6kyf4Co79a84IkK9blFuQVA_0[1].name = "D1";
TM_k6kyf4Co79a84IkK9blFuQVA_2[1] = &TM_k6kyf4Co79a84IkK9blFuQVA_0[2];
TM_k6kyf4Co79a84IkK9blFuQVA_0[2].kind = 1;
TM_k6kyf4Co79a84IkK9blFuQVA_0[2].offset = offsetof(tyObject_GUID_J2WQBMgezjwf6Trblkflgg, D2);
TM_k6kyf4Co79a84IkK9blFuQVA_0[2].typ = (&NTI_kDPg4wXyR8DDyA0MeEjIsw_);
TM_k6kyf4Co79a84IkK9blFuQVA_0[2].name = "D2";
TM_k6kyf4Co79a84IkK9blFuQVA_2[2] = &TM_k6kyf4Co79a84IkK9blFuQVA_0[3];
TM_k6kyf4Co79a84IkK9blFuQVA_0[3].kind = 1;
TM_k6kyf4Co79a84IkK9blFuQVA_0[3].offset = offsetof(tyObject_GUID_J2WQBMgezjwf6Trblkflgg, D3);
TM_k6kyf4Co79a84IkK9blFuQVA_0[3].typ = (&NTI_kDPg4wXyR8DDyA0MeEjIsw_);
TM_k6kyf4Co79a84IkK9blFuQVA_0[3].name = "D3";
TM_k6kyf4Co79a84IkK9blFuQVA_2[3] = &TM_k6kyf4Co79a84IkK9blFuQVA_0[4];
NTI_9cWG514ToTTjfTPLhXXV0IQ_.size = sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ);
NTI_9cWG514ToTTjfTPLhXXV0IQ_.kind = 16;
NTI_9cWG514ToTTjfTPLhXXV0IQ_.base = (&NTI_chXunH2dwinSkhpA6JnsXw_);
NTI_9cWG514ToTTjfTPLhXXV0IQ_.flags = 3;
TM_k6kyf4Co79a84IkK9blFuQVA_0[4].kind = 1;
TM_k6kyf4Co79a84IkK9blFuQVA_0[4].offset = offsetof(tyObject_GUID_J2WQBMgezjwf6Trblkflgg, D4);
TM_k6kyf4Co79a84IkK9blFuQVA_0[4].typ = (&NTI_9cWG514ToTTjfTPLhXXV0IQ_);
TM_k6kyf4Co79a84IkK9blFuQVA_0[4].name = "D4";
TM_k6kyf4Co79a84IkK9blFuQVA_0[0].len = 4; TM_k6kyf4Co79a84IkK9blFuQVA_0[0].kind = 2; TM_k6kyf4Co79a84IkK9blFuQVA_0[0].sons = &TM_k6kyf4Co79a84IkK9blFuQVA_2[0];
NTI_J2WQBMgezjwf6Trblkflgg_.node = &TM_k6kyf4Co79a84IkK9blFuQVA_0[0];
if (!((TM_k6kyf4Co79a84IkK9blFuQVA_6 = nimLoadLibrary((NimStringDesc*) &TM_k6kyf4Co79a84IkK9blFuQVA_8))
)) nimLoadLibraryError((NimStringDesc*) &TM_k6kyf4Co79a84IkK9blFuQVA_9);
	Dl_150625_ = (tyProc_9bc9cLDdaqTE6n5J78feKRYg) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetSystemTimeAsFileTime");
	Dl_149630_ = (tyProc_9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetLastError");
	Dl_149635_ = (tyProc_aO673xGTLLxou7P7GxoCXA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "FormatMessageW");
	Dl_149801_ = (tyProc_im9buRnIvptJfzdASYMEbBA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "LocalFree");
	Dl_150432_ = (tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetEnvironmentStringsW");
	Dl_150434_ = (tyProc_hayl9b1HhJokJ1Zo9ctoglPg) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "FreeEnvironmentStringsW");
	Dl_149818_ = (tyProc_IwsYs9blTXXmAlfsBWq604w) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "SetEnvironmentVariableW");
	Dl_150629_ = (tyProc_Tjolzh1w2dIIpj3oCDGPFw) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "Sleep");
	Dl_149804_ = (tyProc_5HgIhqDabtYAePzjhB7xSA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetCurrentDirectoryW");
	Dl_149822_ = (tyProc_M3PxDlueeoWgT3BgpzrqYw) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetModuleFileNameW");
	Dl_150411_ = (tyProc_hayl9b1HhJokJ1Zo9ctoglPg) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_6, "GetFileAttributesW");
}
