/* LEVEL_17:0x07EAF0 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_001A7EA0;
extern int D_00197984;
extern int func_07EA18(void);
extern int func_07EBC0(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_07EA30(int result);

int func_07EAF0(void *a, int b, int c, void *d)
{
    int entry = func_07EA18();

    func_07EA30(func_07EBC0(entry, D_00197984, a, b, c, d, D_001A7EA0->f10, D_001A7EA0->fC, D_001A7EA0->f8, D_001A7EA0->f4));
    return entry;
}
