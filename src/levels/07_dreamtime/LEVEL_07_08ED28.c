/* LEVEL_07:0x08ED28 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_0021B090;
extern int D_0020A654;
extern int func_08EC50(void);
extern int func_08EDF8(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_08EC68(int result);

int func_08ED28(void *a, int b, int c, void *d)
{
    int entry = func_08EC50();

    func_08EC68(func_08EDF8(entry, D_0020A654, a, b, c, d, D_0021B090->f10, D_0021B090->fC, D_0021B090->f8, D_0021B090->f4));
    return entry;
}
