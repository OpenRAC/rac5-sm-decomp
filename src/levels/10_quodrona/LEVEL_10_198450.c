/* LEVEL_10:0x198450 -- placement copy of LEVEL_01_197B58.c: registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_002A11C0;
extern int D_002117CC;
extern int D_002117D0;

extern void func_1986D8(void);
extern void func_0EF088(int index);
extern void func_1E9680(int *out1, unsigned int flags, int *out2, int a, int b);

void func_198450(void)
{
    Block *b = &D_002A11C0;

    func_1E9680(&D_002117CC, (b->f1F0 << 16) | 0x580064D9u, &D_002117D0, (b->f1F8 << 16) | 0x580024D9u, (int)func_1986D8);
    func_0EF088(0x1D);
}
