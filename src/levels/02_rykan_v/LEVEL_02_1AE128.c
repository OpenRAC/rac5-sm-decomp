/* LEVEL_02:0x1AE128 -- placement copy of LEVEL_01_197B58.c: registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_002AF2C0;
extern int D_0021D93C;
extern int D_0021D940;

extern void func_1AE3B0(void);
extern void func_0F58F8(int index);
extern void func_1F69C0(int *out1, unsigned int flags, int *out2, int a, int b);

void func_1AE128(void)
{
    Block *b = &D_002AF2C0;

    func_1F69C0(&D_0021D93C, (b->f1F0 << 16) | 0x580064D9u, &D_0021D940, (b->f1F8 << 16) | 0x580024D9u, (int)func_1AE3B0);
    func_0F58F8(0x1D);
}
