/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\Nim\nim-0.18.0_x64\nim-0.18.0\dist\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN  -IC:\Nim\nim-0.18.0_x64\nim-0.18.0\lib -o C:\Users\hkota\@Programming_projects\Nim\nigui_examples\my_examples\nimcache\stdlib_tables.o C:\Users\hkota\@Programming_projects\Nim\nigui_examples\my_examples\nimcache\stdlib_tables.c */
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
typedef struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg;
typedef struct tySequence_63PnD6A6cP3Lf2gDOtuoig tySequence_63PnD6A6cP3Lf2gDOtuoig;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_gnxAzkWHXyGbTTlgBpS65Q tyTuple_gnxAzkWHXyGbTTlgBpS65Q;
typedef struct tyObject_TimerEntry_z9aNGN5Rtmhr7usPsSEw6GQ tyObject_TimerEntry_z9aNGN5Rtmhr7usPsSEw6GQ;
typedef struct tyObject_TimerEventcolonObjectType__wnv00NGl2sDOJsAGTpBNnw tyObject_TimerEventcolonObjectType__wnv00NGl2sDOJsAGTpBNnw;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
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
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct Exception Exception;
typedef struct tySequence_WF89a8QyKeDCh4DYWTmSiBg tySequence_WF89a8QyKeDCh4DYWTmSiBg;
typedef struct TSafePoint TSafePoint;
typedef struct GcFrameHeader GcFrameHeader;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef NF tyArray_iV2wVpdhi9coq9cstlcqapXg[2001];
struct tyObject_GcThread_hgJQSlfXDOK3SwSHjeZBXg {
tyArray_iV2wVpdhi9coq9cstlcqapXg tls;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg {
tySequence_63PnD6A6cP3Lf2gDOtuoig* data;
NI counter;
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
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_TimerEventcolonObjectType__wnv00NGl2sDOJsAGTpBNnw* event, void* ClE_0);
void* ClE_0;
} tyProc_rVMTth349c7k44sPDCKI25Q;
struct tyObject_TimerEntry_z9aNGN5Rtmhr7usPsSEw6GQ {
tyProc_rVMTth349c7k44sPDCKI25Q timerProc;
void* data;
};
struct tyTuple_gnxAzkWHXyGbTTlgBpS65Q {
NI Field0;
NI64 Field1;
tyObject_TimerEntry_z9aNGN5Rtmhr7usPsSEw6GQ Field2;
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
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
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
struct tyObject_TimerEventcolonObjectType__wnv00NGl2sDOJsAGTpBNnw {
NI timer;
void* data;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef void* tyArray_Rrw59cMvNu8cDA9cQDh4v2oA[100];
struct tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw {
tyObject_SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* next;
NI dataLen;
tyArray_Rrw59cMvNu8cDA9cQDh4v2oA d;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_hgOQFBQi19biNdOUUkFOOxA) (Exception* e);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_IIomJ6ptE6vfJ5zRbATgkQ;
struct tySequence_63PnD6A6cP3Lf2gDOtuoig {
  TGenericSeq Sup;
  tyTuple_gnxAzkWHXyGbTTlgBpS65Q data[SEQ_DECL_SIZE];
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
static N_INLINE(NIM_BOOL, isEmpty_IxXD1UAPoEehVDW9cv9cRaewtables)(NI hcode);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void*, GetThreadLocalVars)(void);
N_LIB_PRIVATE N_NIMCALL(void*, threadVarGetValue_RA7AnSIB7ATZq3Th1d9czYg)(NI32 dwTlsIndex);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables)(NI hcode);
static N_INLINE(NIM_BOOL, mustRehash_CT8KHtrz1uoHrT4RgfOSmQtables)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, nextTry_OLPhxSyW9bte5CwHzzQVhfAtables)(NI h, NI maxHash);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NI, rightSize_l3wfAVpWNBWtzL8kQfvMMAtables)(NI count);
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA)(NI x);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence_63PnD6A6cP3Lf2gDOtuoig)(void* p, NI op);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg)(NI x);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, rawGet_aBp6CZd3silSOXKEIjDLVAtables)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg t, NI64 key, NI* hc);
static N_INLINE(NI, hash_wXLApNp4hVfHIRffgEB6jwhashes)(NI64 x);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, enlarge_r4qFo6ZWQElvCb0V5HMtaw)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg* t);
N_LIB_PRIVATE N_NIMCALL(void, rawInsert_kZ9a2LDQmdqla1XYM5e6F8Q)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg* t, tySequence_63PnD6A6cP3Lf2gDOtuoig** data, NI64 key, tyObject_TimerEntry_z9aNGN5Rtmhr7usPsSEw6GQ val, NI hc, NI h);
static N_INLINE(NI, rawGetKnownHC_IEgk1Cf233norbeBkugawQtables)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg t, NI64 key, NI hc);
extern NI32 globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;
TNimType NTI_TU9ayGijwYDpTg1thSSqo9cg_;
TNimType NTI_gnxAzkWHXyGbTTlgBpS65Q_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_Aav8dQoMlCFnZRxA0IhTHQ_;
extern TNimType NTI_z9aNGN5Rtmhr7usPsSEw6GQ_;
TNimType NTI_63PnD6A6cP3Lf2gDOtuoig_;
STRING_LITERAL(TM_4SoG2KRQy3oMm9aUzSLtGrA_2, "\012counter < length ", 18);
STRING_LITERAL(TM_4SoG2KRQy3oMm9aUzSLtGrA_12, "isPowerOfTwo(initialSize) ", 26);

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

static N_INLINE(NIM_BOOL, isEmpty_IxXD1UAPoEehVDW9cv9cRaewtables)(NI hcode) {
	NIM_BOOL result;
	nimfr_("isEmpty", "tableimpl.nim");
	result = (NIM_BOOL)0;
	nimln_(15, "tableimpl.nim");
	result = (hcode == ((NI) 0));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables)(NI hcode) {
	NIM_BOOL result;
	nimfr_("isFilled", "tableimpl.nim");
	result = (NIM_BOOL)0;
	nimln_(18, "tableimpl.nim");
	nimln_(398, "system.nim");
	nimln_(18, "tableimpl.nim");
	result = !((hcode == ((NI) 0)));
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustRehash_CT8KHtrz1uoHrT4RgfOSmQtables)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T5_;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_3;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_4;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_5;
	nimfr_("mustRehash", "tableimpl.nim");
	result = (NIM_BOOL)0;
	nimln_(24, "tableimpl.nim");
	{
		if (!!((counter < length))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_4SoG2KRQy3oMm9aUzSLtGrA_2));
	}
	LA3_: ;
	nimln_(25, "tableimpl.nim");
	T5_ = (NIM_BOOL)0;
	TM_4SoG2KRQy3oMm9aUzSLtGrA_3 = mulInt(length, ((NI) 2));
	TM_4SoG2KRQy3oMm9aUzSLtGrA_4 = mulInt(counter, ((NI) 3));
	T5_ = ((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_3) < (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_4));
	if (T5_) goto LA6_;
	TM_4SoG2KRQy3oMm9aUzSLtGrA_5 = subInt(length, counter);
	T5_ = ((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_5) < ((NI) 4));
	LA6_: ;
	result = T5_;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, nextTry_OLPhxSyW9bte5CwHzzQVhfAtables)(NI h, NI maxHash) {
	NI result;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_6;
	nimfr_("nextTry", "tableimpl.nim");
	result = (NI)0;
	nimln_(28, "tableimpl.nim");
	TM_4SoG2KRQy3oMm9aUzSLtGrA_6 = addInt(h, ((NI) 1));
	result = (NI)((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_6) & maxHash);
	popFrame();
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T7_)) goto LA8_;
		T7_ = (b == ((NI) -1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, rightSize_l3wfAVpWNBWtzL8kQfvMMAtables)(NI count) {
	NI result;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_7;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_8;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_9;
	nimfr_("rightSize", "tables.nim");
	result = (NI)0;
	nimln_(136, "tables.nim");
	TM_4SoG2KRQy3oMm9aUzSLtGrA_7 = mulInt(((NI) (count)), ((NI) 3));
	TM_4SoG2KRQy3oMm9aUzSLtGrA_8 = divInt((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_7), ((NI) 2));
	TM_4SoG2KRQy3oMm9aUzSLtGrA_9 = addInt((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_8), ((NI) 4));
	result = nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_9));
	popFrame();
	return result;
}
static N_NIMCALL(void, Marker_tySequence_63PnD6A6cP3Lf2gDOtuoig)(void* p, NI op) {
	tySequence_63PnD6A6cP3Lf2gDOtuoig* a;
	NI T1_;
	a = (tySequence_63PnD6A6cP3Lf2gDOtuoig*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_].Field2.timerProc.ClE_0, op);
	}
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, initTable_bPmQLESwRuPjQMNeQmoOUg)(NI initialSize, tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg* Result) {
	nimfr_("initTable", "tables.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_TU9ayGijwYDpTg1thSSqo9cg_));
	nimln_(324, "tables.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg(initialSize);
		if (!!(T3_)) goto LA4_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_4SoG2KRQy3oMm9aUzSLtGrA_12));
	}
	LA4_: ;
	nimln_(325, "tables.nim");
	(*Result).counter = ((NI) 0);
	nimln_(326, "tables.nim");
	unsureAsgnRef((void**) (&(*Result).data), (tySequence_63PnD6A6cP3Lf2gDOtuoig*) newSeq((&NTI_63PnD6A6cP3Lf2gDOtuoig_), ((NI)chckRange(initialSize, ((NI) 0), ((NI) IL64(9223372036854775807))))));
	popFrame();
}

static N_INLINE(NI, hash_wXLApNp4hVfHIRffgEB6jwhashes)(NI64 x) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(113, "hashes.nim");
	result = ((NI) (((NI32)(NU32)(NU64)(x))));
	popFrame();
	return result;
}

static N_INLINE(NI, rawGet_aBp6CZd3silSOXKEIjDLVAtables)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg t, NI64 key, NI* hc) {
	NI result;
	NI h;
	NI T5_;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_13;
	nimfr_("rawGet", "tableimpl.nim");
{	result = (NI)0;
	nimln_(53, "tableimpl.nim");
	(*hc) = hash_wXLApNp4hVfHIRffgEB6jwhashes(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3_;
		nimln_(45, "tableimpl.nim");
		(*hc) = ((NI) 314159265);
	}
	LA3_: ;
	nimln_(31, "tableimpl.nim");
	nimln_(116, "tables.nim");
	T5_ = (t.data ? (t.data->Sup.len-1) : -1);
	h = (NI)((*hc) & T5_);
	{
		nimln_(32, "tableimpl.nim");
		while (1) {
			NIM_BOOL T8_;
			NI T15_;
			if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
			T8_ = (NIM_BOOL)0;
			T8_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(t.data->data[h].Field0);
			if (!T8_) goto LA7;
			nimln_(37, "tableimpl.nim");
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T11_ = (t.data->data[h].Field0 == (*hc));
				if (!(T11_)) goto LA12_;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T11_ = (t.data->data[h].Field1 == key);
				LA12_: ;
				if (!T11_) goto LA13_;
				nimln_(38, "tableimpl.nim");
				result = h;
				goto BeforeRet_;
			}
			LA13_: ;
			nimln_(39, "tableimpl.nim");
			nimln_(116, "tables.nim");
			T15_ = (t.data ? (t.data->Sup.len-1) : -1);
			h = nextTry_OLPhxSyW9bte5CwHzzQVhfAtables(h, T15_);
		} LA7: ;
	}
	nimln_(40, "tableimpl.nim");
	TM_4SoG2KRQy3oMm9aUzSLtGrA_13 = subInt(((NI) -1), h);
	result = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_13);
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, getOrDefault_EdJ2lUZlq89bMm0KwD1qoQA)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg t, NI64 key, tyObject_TimerEntry_z9aNGN5Rtmhr7usPsSEw6GQ* Result) {
	NI hc;
	NI index;
	nimfr_("getOrDefault", "tables.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_z9aNGN5Rtmhr7usPsSEw6GQ_));
	hc = (NI)0;
	nimln_(158, "tables.nim");
	index = rawGet_aBp6CZd3silSOXKEIjDLVAtables(t, key, (&hc));
	nimln_(178, "tables.nim");
	{
		nimln_(159, "tables.nim");
		if (!(((NI) 0) <= index)) goto LA3_;
		if ((NU)(index) >= (NU)(t.data->Sup.len)) raiseIndexError();
		unsureAsgnRef((void**) (&(*Result).timerProc.ClE_0), t.data->data[index].Field2.timerProc.ClE_0);
		(*Result).timerProc.ClP_0 = t.data->data[index].Field2.timerProc.ClP_0;
		(*Result).data = t.data->data[index].Field2.data;
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim");
	nimln_(191, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	NimThreadVars* NimTV_;
	nimfr_("rtlAddZCT", "gc.nim");
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&NimTV_->gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim");
	nimln_(218, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(219, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim");
	nimln_(264, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(398, "system.nim");
		nimln_(264, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(265, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(398, "system.nim");
		nimln_(265, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(266, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, del_63d7fuemXlWZHI7KYa6Uxg)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg* t, NI64 key) {
	NI hc;
	NI i;
	NI msk;
	NI T1_;
	nimfr_("del", "tables.nim");
	hc = (NI)0;
	nimln_(148, "tableimpl.nim");
	i = rawGet_aBp6CZd3silSOXKEIjDLVAtables((*t), key, (&hc));
	nimln_(124, "tableimpl.nim");
	nimln_(116, "tables.nim");
	T1_ = ((*t).data ? ((*t).data->Sup.len-1) : -1);
	msk = T1_;
	nimln_(270, "tables.nim");
	{
		NI TM_4SoG2KRQy3oMm9aUzSLtGrA_14;
		nimln_(125, "tableimpl.nim");
		if (!(((NI) 0) <= i)) goto LA4_;
		nimln_(126, "tableimpl.nim");
		TM_4SoG2KRQy3oMm9aUzSLtGrA_14 = subInt((*t).counter, ((NI) 1));
		(*t).counter = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_14);
		{
			{
				nimln_(128, "tableimpl.nim");
				while (1) {
					NI j;
					NI r;
					NI64 v;
					tyObject_TimerEntry_z9aNGN5Rtmhr7usPsSEw6GQ v_2;
					nimln_(129, "tableimpl.nim");
					j = i;
					nimln_(130, "tableimpl.nim");
					r = j;
					if ((NU)(i) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					nimln_(131, "tableimpl.nim");
					(*t).data->data[i].Field0 = ((NI) 0);
					if ((NU)(i) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					nimln_(132, "tableimpl.nim");
					v = (NI64)0;
					(*t).data->data[i].Field1 = v;
					if ((NU)(i) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					nimln_(133, "tableimpl.nim");
					memset((void*)(&v_2), 0, sizeof(v_2));
					asgnRef((void**) (&(*t).data->data[i].Field2.timerProc.ClE_0), v_2.timerProc.ClE_0);
					(*t).data->data[i].Field2.timerProc.ClP_0 = v_2.timerProc.ClP_0;
					(*t).data->data[i].Field2.data = v_2.data;
					{
						nimln_(134, "tableimpl.nim");
						while (1) {
							NI TM_4SoG2KRQy3oMm9aUzSLtGrA_15;
							nimln_(135, "tableimpl.nim");
							nimln_(149, "tableimpl.nim");
							TM_4SoG2KRQy3oMm9aUzSLtGrA_15 = addInt(i, ((NI) 1));
							i = (NI)((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_15) & msk);
							nimln_(136, "tableimpl.nim");
							{
								NIM_BOOL T13_;
								if ((NU)(i) >= (NU)((*t).data->Sup.len)) raiseIndexError();
								T13_ = (NIM_BOOL)0;
								T13_ = isEmpty_IxXD1UAPoEehVDW9cv9cRaewtables((*t).data->data[i].Field0);
								if (!T13_) goto LA14_;
								nimln_(137, "tableimpl.nim");
								goto LA6;
							}
							LA14_: ;
							nimln_(138, "tableimpl.nim");
							if ((NU)(i) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							r = (NI)((*t).data->data[i].Field0 & msk);
							nimln_(139, "tableimpl.nim");
							{
								NIM_BOOL T18_;
								NIM_BOOL T19_;
								NIM_BOOL T20_;
								NIM_BOOL T23_;
								NIM_BOOL T26_;
								T18_ = (NIM_BOOL)0;
								T19_ = (NIM_BOOL)0;
								T20_ = (NIM_BOOL)0;
								T20_ = (r <= i);
								if (!(T20_)) goto LA21_;
								T20_ = (j < r);
								LA21_: ;
								T19_ = T20_;
								if (T19_) goto LA22_;
								T23_ = (NIM_BOOL)0;
								T23_ = (j < r);
								if (!(T23_)) goto LA24_;
								nimln_(149, "tableimpl.nim");
								T23_ = (i < j);
								LA24_: ;
								T19_ = T23_;
								LA22_: ;
								T18_ = T19_;
								if (T18_) goto LA25_;
								nimln_(139, "tableimpl.nim");
								T26_ = (NIM_BOOL)0;
								nimln_(149, "tableimpl.nim");
								T26_ = (i < j);
								if (!(T26_)) goto LA27_;
								nimln_(139, "tableimpl.nim");
								T26_ = (r <= i);
								LA27_: ;
								T18_ = T26_;
								LA25_: ;
								if (!!(T18_)) goto LA28_;
								nimln_(140, "tableimpl.nim");
								goto LA9;
							}
							LA28_: ;
						}
					} LA9: ;
					if ((NU)(j) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					nimln_(144, "tableimpl.nim");
					if ((NU)(i) >= (NU)((*t).data->Sup.len)) raiseIndexError();
					(*t).data->data[j].Field0 = (*t).data->data[i].Field0;
					(*t).data->data[j].Field1 = (*t).data->data[i].Field1;
					asgnRef((void**) (&(*t).data->data[j].Field2.timerProc.ClE_0), (*t).data->data[i].Field2.timerProc.ClE_0);
					(*t).data->data[j].Field2.timerProc.ClP_0 = (*t).data->data[i].Field2.timerProc.ClP_0;
					(*t).data->data[j].Field2.data = (*t).data->data[i].Field2.data;
				}
			}
		} LA6: ;
	}
	LA4_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, rawInsert_kZ9a2LDQmdqla1XYM5e6F8Q)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg* t, tySequence_63PnD6A6cP3Lf2gDOtuoig** data, NI64 key, tyObject_TimerEntry_z9aNGN5Rtmhr7usPsSEw6GQ val, NI hc, NI h) {
	nimfr_("rawInsert", "tableimpl.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	nimln_(64, "tableimpl.nim");
	(*data)->data[h].Field1 = key;
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	nimln_(65, "tableimpl.nim");
	asgnRef((void**) (&(*data)->data[h].Field2.timerProc.ClE_0), val.timerProc.ClE_0);
	(*data)->data[h].Field2.timerProc.ClP_0 = val.timerProc.ClP_0;
	(*data)->data[h].Field2.data = val.data;
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	nimln_(66, "tableimpl.nim");
	(*data)->data[h].Field0 = hc;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, enlarge_r4qFo6ZWQElvCb0V5HMtaw)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg* t) {
	tySequence_63PnD6A6cP3Lf2gDOtuoig* n;
	NI T1_;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_16;
	tySequence_63PnD6A6cP3Lf2gDOtuoig* T2_;
	nimfr_("enlarge", "tables.nim");
	n = (tySequence_63PnD6A6cP3Lf2gDOtuoig*)0;
	nimln_(286, "tables.nim");
	T1_ = ((*t).data ? (*t).data->Sup.len : 0);
	TM_4SoG2KRQy3oMm9aUzSLtGrA_16 = mulInt(T1_, ((NI) 2));
	n = (tySequence_63PnD6A6cP3Lf2gDOtuoig*) newSeq((&NTI_63PnD6A6cP3Lf2gDOtuoig_), ((NI)chckRange((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_16), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln_(287, "tables.nim");
	T2_ = (tySequence_63PnD6A6cP3Lf2gDOtuoig*)0;
	T2_ = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = T2_;
	{
		NI i;
		NI colontmp_;
		NI T4_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(288, "tables.nim");
		T4_ = (n ? (n->Sup.len-1) : -1);
		colontmp_ = T4_;
		nimln_(2032, "system.nim");
		res = ((NI) 0);
		{
			nimln_(2033, "system.nim");
			while (1) {
				NI eh;
				NI TM_4SoG2KRQy3oMm9aUzSLtGrA_17;
				if (!(res <= colontmp_)) goto LA6;
				nimln_(2034, "system.nim");
				i = res;
				nimln_(289, "tables.nim");
				if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
				eh = n->data[i].Field0;
				nimln_(290, "tables.nim");
				{
					NIM_BOOL T9_;
					NI j;
					NI T12_;
					T9_ = (NIM_BOOL)0;
					T9_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(eh);
					if (!T9_) goto LA10_;
					nimln_(291, "tables.nim");
					nimln_(116, "tables.nim");
					T12_ = ((*t).data ? ((*t).data->Sup.len-1) : -1);
					j = (NI)(eh & T12_);
					{
						nimln_(292, "tables.nim");
						while (1) {
							NIM_BOOL T15_;
							NI T16_;
							if ((NU)(j) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							T15_ = (NIM_BOOL)0;
							T15_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables((*t).data->data[j].Field0);
							if (!T15_) goto LA14;
							nimln_(293, "tables.nim");
							nimln_(116, "tables.nim");
							T16_ = ((*t).data ? ((*t).data->Sup.len-1) : -1);
							j = nextTry_OLPhxSyW9bte5CwHzzQVhfAtables(j, T16_);
						} LA14: ;
					}
					nimln_(294, "tables.nim");
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					rawInsert_kZ9a2LDQmdqla1XYM5e6F8Q(t, (&(*t).data), n->data[i].Field1, n->data[i].Field2, eh, j);
				}
				LA10_: ;
				nimln_(2035, "system.nim");
				TM_4SoG2KRQy3oMm9aUzSLtGrA_17 = addInt(res, ((NI) 1));
				res = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_17);
			} LA6: ;
		}
	}
	popFrame();
}

static N_INLINE(NI, rawGetKnownHC_IEgk1Cf233norbeBkugawQtables)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg t, NI64 key, NI hc) {
	NI result;
	NI h;
	NI T1_;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_18;
	nimfr_("rawGetKnownHC", "tableimpl.nim");
{	result = (NI)0;
	nimln_(31, "tableimpl.nim");
	nimln_(116, "tables.nim");
	T1_ = (t.data ? (t.data->Sup.len-1) : -1);
	h = (NI)(hc & T1_);
	{
		nimln_(32, "tableimpl.nim");
		while (1) {
			NIM_BOOL T4_;
			NI T11_;
			if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
			T4_ = (NIM_BOOL)0;
			T4_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(t.data->data[h].Field0);
			if (!T4_) goto LA3;
			nimln_(37, "tableimpl.nim");
			{
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T7_ = (t.data->data[h].Field0 == hc);
				if (!(T7_)) goto LA8_;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T7_ = (t.data->data[h].Field1 == key);
				LA8_: ;
				if (!T7_) goto LA9_;
				nimln_(38, "tableimpl.nim");
				result = h;
				goto BeforeRet_;
			}
			LA9_: ;
			nimln_(39, "tableimpl.nim");
			nimln_(116, "tables.nim");
			T11_ = (t.data ? (t.data->Sup.len-1) : -1);
			h = nextTry_OLPhxSyW9bte5CwHzzQVhfAtables(h, T11_);
		} LA3: ;
	}
	nimln_(40, "tableimpl.nim");
	TM_4SoG2KRQy3oMm9aUzSLtGrA_18 = subInt(((NI) -1), h);
	result = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_18);
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq__sQZlouBEzxikfy1lGiqYxw)(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg* t, NI64 key, tyObject_TimerEntry_z9aNGN5Rtmhr7usPsSEw6GQ val) {
	NI hc;
	NI index;
	nimfr_("[]=", "tables.nim");
	hc = (NI)0;
	nimln_(98, "tableimpl.nim");
	index = rawGet_aBp6CZd3silSOXKEIjDLVAtables((*t), key, (&hc));
	nimln_(307, "tables.nim");
	{
		nimln_(99, "tableimpl.nim");
		if (!(((NI) 0) <= index)) goto LA3_;
		if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		asgnRef((void**) (&(*t).data->data[index].Field2.timerProc.ClE_0), val.timerProc.ClE_0);
		(*t).data->data[index].Field2.timerProc.ClP_0 = val.timerProc.ClP_0;
		(*t).data->data[index].Field2.data = val.data;
	}
	goto LA1_;
	LA3_: ;
	{
		NI TM_4SoG2KRQy3oMm9aUzSLtGrA_19;
		NI TM_4SoG2KRQy3oMm9aUzSLtGrA_20;
		nimln_(89, "tableimpl.nim");
		{
			NI T8_;
			NIM_BOOL T9_;
			nimln_(117, "tables.nim");
			T8_ = ((*t).data ? (*t).data->Sup.len : 0);
			T9_ = (NIM_BOOL)0;
			T9_ = mustRehash_CT8KHtrz1uoHrT4RgfOSmQtables(T8_, (*t).counter);
			if (!T9_) goto LA10_;
			nimln_(90, "tableimpl.nim");
			enlarge_r4qFo6ZWQElvCb0V5HMtaw(t);
			nimln_(91, "tableimpl.nim");
			index = rawGetKnownHC_IEgk1Cf233norbeBkugawQtables((*t), key, hc);
		}
		LA10_: ;
		nimln_(92, "tableimpl.nim");
		TM_4SoG2KRQy3oMm9aUzSLtGrA_19 = subInt(((NI) -1), index);
		index = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_19);
		nimln_(93, "tableimpl.nim");
		rawInsert_kZ9a2LDQmdqla1XYM5e6F8Q(t, (&(*t).data), key, val, hc, index);
		nimln_(94, "tableimpl.nim");
		TM_4SoG2KRQy3oMm9aUzSLtGrA_20 = addInt((*t).counter, ((NI) 1));
		(*t).counter = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_20);
	}
	LA1_: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit000)(void) {
	nimfr_("tables", "tables.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit000)(void) {
static TNimNode* TM_4SoG2KRQy3oMm9aUzSLtGrA_10[2];
static TNimNode* TM_4SoG2KRQy3oMm9aUzSLtGrA_11[3];
static TNimNode TM_4SoG2KRQy3oMm9aUzSLtGrA_0[7];
NTI_TU9ayGijwYDpTg1thSSqo9cg_.size = sizeof(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg);
NTI_TU9ayGijwYDpTg1thSSqo9cg_.kind = 18;
NTI_TU9ayGijwYDpTg1thSSqo9cg_.base = 0;
TM_4SoG2KRQy3oMm9aUzSLtGrA_10[0] = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[1];
NTI_gnxAzkWHXyGbTTlgBpS65Q_.size = sizeof(tyTuple_gnxAzkWHXyGbTTlgBpS65Q);
NTI_gnxAzkWHXyGbTTlgBpS65Q_.kind = 18;
NTI_gnxAzkWHXyGbTTlgBpS65Q_.base = 0;
TM_4SoG2KRQy3oMm9aUzSLtGrA_11[0] = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[3];
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[3].kind = 1;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[3].offset = offsetof(tyTuple_gnxAzkWHXyGbTTlgBpS65Q, Field0);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[3].name = "Field0";
TM_4SoG2KRQy3oMm9aUzSLtGrA_11[1] = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[4];
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[4].kind = 1;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[4].offset = offsetof(tyTuple_gnxAzkWHXyGbTTlgBpS65Q, Field1);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[4].typ = (&NTI_Aav8dQoMlCFnZRxA0IhTHQ_);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[4].name = "Field1";
TM_4SoG2KRQy3oMm9aUzSLtGrA_11[2] = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[5];
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[5].kind = 1;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[5].offset = offsetof(tyTuple_gnxAzkWHXyGbTTlgBpS65Q, Field2);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[5].typ = (&NTI_z9aNGN5Rtmhr7usPsSEw6GQ_);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[5].name = "Field2";
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[2].len = 3; TM_4SoG2KRQy3oMm9aUzSLtGrA_0[2].kind = 2; TM_4SoG2KRQy3oMm9aUzSLtGrA_0[2].sons = &TM_4SoG2KRQy3oMm9aUzSLtGrA_11[0];
NTI_gnxAzkWHXyGbTTlgBpS65Q_.node = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[2];
NTI_63PnD6A6cP3Lf2gDOtuoig_.size = sizeof(tySequence_63PnD6A6cP3Lf2gDOtuoig*);
NTI_63PnD6A6cP3Lf2gDOtuoig_.kind = 24;
NTI_63PnD6A6cP3Lf2gDOtuoig_.base = (&NTI_gnxAzkWHXyGbTTlgBpS65Q_);
NTI_63PnD6A6cP3Lf2gDOtuoig_.marker = Marker_tySequence_63PnD6A6cP3Lf2gDOtuoig;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[1].kind = 1;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[1].offset = offsetof(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg, data);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[1].typ = (&NTI_63PnD6A6cP3Lf2gDOtuoig_);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[1].name = "data";
TM_4SoG2KRQy3oMm9aUzSLtGrA_10[1] = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[6];
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[6].kind = 1;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[6].offset = offsetof(tyObject_Table_TU9ayGijwYDpTg1thSSqo9cg, counter);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[6].name = "counter";
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[0].len = 2; TM_4SoG2KRQy3oMm9aUzSLtGrA_0[0].kind = 2; TM_4SoG2KRQy3oMm9aUzSLtGrA_0[0].sons = &TM_4SoG2KRQy3oMm9aUzSLtGrA_10[0];
NTI_TU9ayGijwYDpTg1thSSqo9cg_.node = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[0];
}

