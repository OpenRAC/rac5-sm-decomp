/* LEVEL_22:0x07DEB0 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_00165D70;
extern int D_001556D4;
extern int func_07DDD8(void);
extern int func_07DF80(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_07DDF0(int result);

int func_07DEB0(void *a, int b, int c, void *d)
{
    int entry = func_07DDD8();

    func_07DDF0(func_07DF80(entry, D_001556D4, a, b, c, d, D_00165D70->f10, D_00165D70->fC, D_00165D70->f8, D_00165D70->f4));
    return entry;
}
