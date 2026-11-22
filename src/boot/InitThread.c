/* 0x01ED18E0 -- creates the library's helper semaphore and thread (once), starts it and raises the caller's priority; returns the thread id or -1. Ported from OpenRAC/rac4-decomp src/core/00127878.c (func_00127878; itself adapted from rac3-decomp func_0011FAE8). */
typedef unsigned int u32;
typedef unsigned char u8;

typedef struct {
    int f0;
    void *f4;
    void *f8;
    int fC;
    void *f10;
    int f14;
    int f18;
    u32 f1C;
    u32 f20;
    u8 pad24[0x30 - 0x24];
} Type1;
typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
    u32 f10;
    u32 f14;
} Type2;
extern int D_01EFEF48;
extern int D_01FE3550;
extern int D_01FE3558[];
extern u8 D_01FE3150[];
extern u8 D_01F300F0[];
extern char D_01F27500[];
extern int CreateSema();
extern int DeleteSema();
extern int CreateThread();
extern int StartThread();
extern int GetThreadId();
extern int ChangeThreadPriority();
extern void func_01ED1808();

int InitThread(void)
{
    Type1 tp;
    Type2 sp;

    if (D_01EFEF48 > 0) {
        return -1;
    }
    sp.f4 = 0xFF;
    sp.f8 = 0;
    sp.f14 = (u32)D_01F27500;
    D_01FE3550 = CreateSema(&sp);
    if (D_01FE3550 < 0) {
        return -1;
    }
    tp.f4 = func_01ED1808;
    tp.f8 = D_01FE3150;
    tp.fC = 0x400;
    tp.f10 = D_01F300F0;
    tp.f14 = 0;
    tp.f20 = (u32)D_01F27500;
    D_01EFEF48 = CreateThread(&tp);
    if (D_01EFEF48 < 0) {
        DeleteSema(D_01FE3550);
        return -1;
    }
    D_01FE3558[0] = 0;
    D_01FE3558[1] = 0;
    StartThread(D_01EFEF48, D_01FE3558);
    ChangeThreadPriority(GetThreadId(), 1);
    return D_01EFEF48;
}
