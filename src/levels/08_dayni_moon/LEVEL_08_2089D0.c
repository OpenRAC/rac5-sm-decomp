/* LEVEL_08:0x2089D0 -- placement copy of LEVEL_04_1E13F8.c: lazily creates handles, then registers the object. */
typedef struct {
    char pad0[0x1C];
    int f1C;
    char pad20[0x208 - 0x20];
    int f208;
    char pad20C[0x214 - 0x20C];
    int f214;
} G;
extern int D_00252994;
extern int D_002529A8;
extern int D_003EB300;
extern int D_003EB338;
extern G D_002E7040;
extern int func_10B198(int a, int b, int c, int d, int e, int f);
extern int func_073C68(int x);
extern void func_09F4F0(void *p, int h, int z);
extern void func_13B540(void *p, void *q, int n);
extern char D_00278C00[];

void func_2089D0(char *o)
{
    if (D_00252994 < 0) {
        D_00252994 = func_10B198(0x18, D_002E7040.f1C, 0, 0, 0, 1);
        D_002529A8 = func_073C68((D_002E7040.f208 << 16) | 0x58006041);
        D_003EB300 = func_073C68((D_002E7040.f214 << 16) | 0x58006041);
    }
    func_09F4F0(o + 0x18, D_00252994, 0);
    if (D_003EB338 == 0)
        func_13B540(&D_003EB338, D_00278C00, 8);
}
