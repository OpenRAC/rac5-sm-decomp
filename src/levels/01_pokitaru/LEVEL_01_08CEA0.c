/* LEVEL_01:0x08CEA0 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_00206D90;
extern int D_001F6354;
extern int func_08CDC8(void);
extern int func_08CF70(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_08CDE0(int result);

int func_08CEA0(void *a, int b, int c, void *d)
{
    int entry = func_08CDC8();

    func_08CDE0(func_08CF70(entry, D_001F6354, a, b, c, d, D_00206D90->f10, D_00206D90->fC, D_00206D90->f8, D_00206D90->f4));
    return entry;
}
