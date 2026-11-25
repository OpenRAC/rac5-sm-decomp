/* LEVEL_03:0x08CAD0 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_0021F410;
extern int D_0020E9D4;
extern int func_08C9F8(void);
extern int func_08CBA0(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_08CA10(int result);

int func_08CAD0(void *a, int b, int c, void *d)
{
    int entry = func_08C9F8();

    func_08CA10(func_08CBA0(entry, D_0020E9D4, a, b, c, d, D_0021F410->f10, D_0021F410->fC, D_0021F410->f8, D_0021F410->f4));
    return entry;
}
