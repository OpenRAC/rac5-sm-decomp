/* LEVEL_01:0x197B58 -- registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_00297DC0;
extern int D_002088FC;
extern int D_00208900;

extern void func_197DE0(void);
extern void func_0EF748(int index);
extern void func_1E1D28(int *out1, unsigned int flags, int *out2, int a, int b);

void func_197B58(void)
{
    Block *b = &D_00297DC0;

    func_1E1D28(&D_002088FC, (b->f1F0 << 16) | 0x580064D9u, &D_00208900, (b->f1F8 << 16) | 0x580024D9u, (int)func_197DE0);
    func_0EF748(0x1D);
}
