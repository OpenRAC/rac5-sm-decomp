/* LEVEL_23:0x179E58 -- placement copy of LEVEL_01_197B58.c: registers a pair of hashed outputs with a callback, then runs setup helper 0x1D. */
typedef struct {
    char pad000[0x1F0];
    unsigned int f1F0;
    int pad1F4;
    unsigned int f1F8;
} Block;

extern Block D_00269200;
extern int D_001DBDCC;
extern int D_001DBDD0;

extern void func_17A0E0(void);
extern void func_0E2630(int index);
extern void func_1B31A8(int *out1, unsigned int flags, int *out2, int a, int b);

void func_179E58(void)
{
    Block *b = &D_00269200;

    func_1B31A8(&D_001DBDCC, (b->f1F0 << 16) | 0x580064D9u, &D_001DBDD0, (b->f1F8 << 16) | 0x580024D9u, (int)func_17A0E0);
    func_0E2630(0x1D);
}
