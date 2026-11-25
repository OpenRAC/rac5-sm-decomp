/* LEVEL_02:0x093570 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_0021BD50;
extern int D_0020B314;
extern int func_093498(void);
extern int func_093640(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_0934B0(int result);

int func_093570(void *a, int b, int c, void *d)
{
    int entry = func_093498();

    func_0934B0(func_093640(entry, D_0020B314, a, b, c, d, D_0021BD50->f10, D_0021BD50->fC, D_0021BD50->f8, D_0021BD50->f4));
    return entry;
}
