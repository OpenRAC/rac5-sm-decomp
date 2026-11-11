/* LEVEL_09:0x18C6A0 -- placement copy of LEVEL_01_197B58.c: registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_0027F540;
extern int D_001F273C;
extern int D_001F2740;

extern void func_18C928(void);
extern void func_0EB628(int index);
extern void func_1CA490(int *out1, unsigned int flags, int *out2, int a, int b);

void func_18C6A0(void)
{
    Block *b = &D_0027F540;

    func_1CA490(&D_001F273C, (b->f1F0 << 16) | 0x580064D9u, &D_001F2740, (b->f1F8 << 16) | 0x580024D9u, (int)func_18C928);
    func_0EB628(0x1D);
}
