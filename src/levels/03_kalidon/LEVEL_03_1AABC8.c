/* LEVEL_03:0x1AABC8 -- placement copy of LEVEL_01_197B58.c: registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_002B2C40;
extern int D_002218AC;
extern int D_002218B0;

extern void func_1AAE50(void);
extern void func_0EDFE0(int index);
extern void func_1F8CB8(int *out1, unsigned int flags, int *out2, int a, int b);

void func_1AABC8(void)
{
    Block *b = &D_002B2C40;

    func_1F8CB8(&D_002218AC, (b->f1F0 << 16) | 0x580064D9u, &D_002218B0, (b->f1F8 << 16) | 0x580024D9u, (int)func_1AAE50);
    func_0EDFE0(0x1D);
}
