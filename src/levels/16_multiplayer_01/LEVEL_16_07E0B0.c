/* LEVEL_16:0x07E0B0 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_001B48A0;
extern int D_001A4384;
extern int func_07DFD8(void);
extern int func_07E180(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_07DFF0(int result);

int func_07E0B0(void *a, int b, int c, void *d)
{
    int entry = func_07DFD8();

    func_07DFF0(func_07E180(entry, D_001A4384, a, b, c, d, D_001B48A0->f10, D_001B48A0->fC, D_001B48A0->f8, D_001B48A0->f4));
    return entry;
}
