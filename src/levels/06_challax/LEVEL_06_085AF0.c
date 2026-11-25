/* LEVEL_06:0x085AF0 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_001F5990;
extern int D_001E5254;
extern int func_085A18(void);
extern int func_085BC0(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_085A30(int result);

int func_085AF0(void *a, int b, int c, void *d)
{
    int entry = func_085A18();

    func_085A30(func_085BC0(entry, D_001E5254, a, b, c, d, D_001F5990->f10, D_001F5990->fC, D_001F5990->f8, D_001F5990->f4));
    return entry;
}
