/* LEVEL_24:0x179390 -- placement copy of LEVEL_01_197B58.c: registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_00263C80;
extern int D_001D988C;
extern int D_001D9890;

extern void func_179618(void);
extern void func_0E7358(int index);
extern void func_1B3578(int *out1, unsigned int flags, int *out2, int a, int b);

void func_179390(void)
{
    Block *b = &D_00263C80;

    func_1B3578(&D_001D988C, (b->f1F0 << 16) | 0x580064D9u, &D_001D9890, (b->f1F8 << 16) | 0x580024D9u, (int)func_179618);
    func_0E7358(0x1D);
}
