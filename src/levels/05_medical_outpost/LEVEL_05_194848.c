/* LEVEL_05:0x194848 -- placement copy of LEVEL_01_197B58.c: registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_00283C80;
extern int D_001F7AA4;
extern int D_001F7AA8;

extern void func_194AD0(void);
extern void func_0EB888(int index);
extern void func_1D1120(int *out1, unsigned int flags, int *out2, int a, int b);

void func_194848(void)
{
    Block *b = &D_00283C80;

    func_1D1120(&D_001F7AA4, (b->f1F0 << 16) | 0x580064D9u, &D_001F7AA8, (b->f1F8 << 16) | 0x580024D9u, (int)func_194AD0);
    func_0EB888(0x1D);
}
