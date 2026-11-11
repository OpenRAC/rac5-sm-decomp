/* LEVEL_04:0x1A2E48 -- placement copy of LEVEL_01_197B58.c: registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_002B25C0;
extern int D_00221FE4;
extern int D_00221FE8;

extern void func_1A30D0(void);
extern void func_0F6C80(int index);
extern void func_1F9EC8(int *out1, unsigned int flags, int *out2, int a, int b);

void func_1A2E48(void)
{
    Block *b = &D_002B25C0;

    func_1F9EC8(&D_00221FE4, (b->f1F0 << 16) | 0x580064D9u, &D_00221FE8, (b->f1F8 << 16) | 0x580024D9u, (int)func_1A30D0);
    func_0F6C80(0x1D);
}
