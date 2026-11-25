/* LEVEL_05:0x08A598 -- placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_001F5E10;
extern int D_001E56D4;
extern int func_08A4C0(void);
extern int func_08A668(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_08A4D8(int result);

int func_08A598(void *a, int b, int c, void *d)
{
    int entry = func_08A4C0();

    func_08A4D8(func_08A668(entry, D_001E56D4, a, b, c, d, D_001F5E10->f10, D_001F5E10->fC, D_001F5E10->f8, D_001F5E10->f4));
    return entry;
}
