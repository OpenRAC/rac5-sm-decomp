/* LEVEL_24:0x085EE0 -- placement copy of LEVEL_05_08A598.c: placement copy of LEVEL_01_08CEA0.c: creates an entry, forwards the caller's four values plus the manager's parameters to the registration helper, finishes it, and returns the entry. */
typedef struct Mgr {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
} Mgr;

extern Mgr *D_001D7A10;
extern int D_001C6FD4;
extern int func_085E08(void);
extern int func_085FB0(int entry, int tag, void *a, int b, int c, void *d, int e, int f, int g, int h);
extern void func_085E20(int result);

int func_085EE0(void *a, int b, int c, void *d)
{
    int entry = func_085E08();

    func_085E20(func_085FB0(entry, D_001C6FD4, a, b, c, d, D_001D7A10->f10, D_001D7A10->fC, D_001D7A10->f8, D_001D7A10->f4));
    return entry;
}
