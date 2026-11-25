/* LEVEL_04:0x08FF98 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_002201B0;
extern int D_0020F814;
extern int func_08FEC0(void);
extern int func_090068(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_08FED8(int result);

int func_08FF98(void *a, int b, int c, void *d)
{
    int entry = func_08FEC0();

    func_08FED8(func_090068(entry, D_0020F814, a, b, c, d, D_002201B0->f10, D_002201B0->fC, D_002201B0->f8, D_002201B0->f4));
    return entry;
}
