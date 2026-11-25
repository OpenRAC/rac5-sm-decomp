/* LEVEL_10:0x08D210 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_0020F9F0;
extern int D_001FF354;
extern int func_08D138(void);
extern int func_08D2E0(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_08D150(int result);

int func_08D210(void *a, int b, int c, void *d)
{
    int entry = func_08D138();

    func_08D150(func_08D2E0(entry, D_001FF354, a, b, c, d, D_0020F9F0->f10, D_0020F9F0->fC, D_0020F9F0->f8, D_0020F9F0->f4));
    return entry;
}
