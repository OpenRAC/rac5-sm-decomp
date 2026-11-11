/* LEVEL_06:0x18E680 -- placement copy of LEVEL_01_197B58.c: registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_00284B40;
extern int D_001F79AC;
extern int D_001F79B0;

extern void func_18E908(void);
extern void func_0E8808(int index);
extern void func_1CF570(int *out1, unsigned int flags, int *out2, int a, int b);

void func_18E680(void)
{
    Block *b = &D_00284B40;

    func_1CF570(&D_001F79AC, (b->f1F0 << 16) | 0x580064D9u, &D_001F79B0, (b->f1F8 << 16) | 0x580024D9u, (int)func_18E908);
    func_0E8808(0x1D);
}
