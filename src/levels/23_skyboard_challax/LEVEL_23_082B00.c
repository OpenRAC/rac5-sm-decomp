/* LEVEL_23:0x082B00 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_001DA190;
extern int D_001C9754;
extern int func_082A28(void);
extern int func_082BD0(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_082A40(int result);

int func_082B00(void *a, int b, int c, void *d)
{
    int entry = func_082A28();

    func_082A40(func_082BD0(entry, D_001C9754, a, b, c, d, D_001DA190->f10, D_001DA190->fC, D_001DA190->f8, D_001DA190->f4));
    return entry;
}
