/* LEVEL_15:0x0710B0 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_0015B710;
extern int D_0014AFD4;
extern int func_070FD8(void);
extern int func_071180(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_070FF0(int result);

int func_0710B0(void *a, int b, int c, void *d)
{
    int entry = func_070FD8();

    func_070FF0(func_071180(entry, D_0014AFD4, a, b, c, d, D_0015B710->f10, D_0015B710->fC, D_0015B710->f8, D_0015B710->f4));
    return entry;
}
