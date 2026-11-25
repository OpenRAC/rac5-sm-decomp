/* LEVEL_09:0x0895F8 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_001F0890;
extern int D_001E0154;
extern int func_089520(void);
extern int func_0896C8(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_089538(int result);

int func_0895F8(void *a, int b, int c, void *d)
{
    int entry = func_089520();

    func_089538(func_0896C8(entry, D_001E0154, a, b, c, d, D_001F0890->f10, D_001F0890->fC, D_001F0890->f8, D_001F0890->f4));
    return entry;
}
