/* LEVEL_07:0x1A9AD8 -- placement copy of LEVEL_01_197B58.c: registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_002AD6C0;
extern int D_0021D504;
extern int D_0021D508;

extern void func_1A9D60(void);
extern void func_0F0548(int index);
extern void func_1F26A0(int *out1, unsigned int flags, int *out2, int a, int b);

void func_1A9AD8(void)
{
    Block *b = &D_002AD6C0;

    func_1F26A0(&D_0021D504, (b->f1F0 << 16) | 0x580064D9u, &D_0021D508, (b->f1F8 << 16) | 0x580024D9u, (int)func_1A9D60);
    func_0F0548(0x1D);
}
