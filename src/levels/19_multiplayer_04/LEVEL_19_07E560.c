/* LEVEL_19:0x07E560 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_001B5A20;
extern int D_001A5504;
extern int func_07E488(void);
extern int func_07E630(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_07E4A0(int result);

int func_07E560(void *a, int b, int c, void *d)
{
    int entry = func_07E488();

    func_07E4A0(func_07E630(entry, D_001A5504, a, b, c, d, D_001B5A20->f10, D_001B5A20->fC, D_001B5A20->f8, D_001B5A20->f4));
    return entry;
}
