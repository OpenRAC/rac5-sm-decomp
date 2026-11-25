/* LEVEL_20:0x06BC38 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_00116F80;
extern int D_00106A64;
extern int func_06BB60(void);
extern int func_06BD08(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_06BB78(int result);

int func_06BC38(void *a, int b, int c, void *d)
{
    int entry = func_06BB60();

    func_06BB78(func_06BD08(entry, D_00106A64, a, b, c, d, D_00116F80->f10, D_00116F80->fC, D_00116F80->f8, D_00116F80->f4));
    return entry;
}
