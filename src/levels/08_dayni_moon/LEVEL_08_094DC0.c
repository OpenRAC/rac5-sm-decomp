/* LEVEL_08:0x094DC0 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_0024FC50;
extern int D_0023F214;
extern int func_094CE8(void);
extern int func_094E90(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_094D00(int result);

int func_094DC0(void *a, int b, int c, void *d)
{
    int entry = func_094CE8();

    func_094D00(func_094E90(entry, D_0023F214, a, b, c, d, D_0024FC50->f10, D_0024FC50->fC, D_0024FC50->f8, D_0024FC50->f4));
    return entry;
}
