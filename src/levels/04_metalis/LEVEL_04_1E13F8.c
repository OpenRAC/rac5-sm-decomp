/* LEVEL_04:0x1E13F8 -- lazily creates handles, then registers the object. */
typedef struct {
    char pad0[0x1C];
    int f1C;
    char pad20[0x208 - 0x20];
    int f208;
    char pad20C[0x214 - 0x20C];
    int f214;
} G;
extern int D_0022279C;
extern int D_002227B0;
extern int D_003B3DB8;
extern int D_003B3DF0;
extern G D_002B25C0;
extern int func_106C88(int a, int b, int c, int d, int e, int f);
extern int func_070000(int x);
extern void func_09A5A0(void *p, int h, int z);
extern void func_136488(void *p, void *q, int n);
extern char D_00244570[];

void func_1E13F8(char *o)
{
    if (D_0022279C < 0) {
        D_0022279C = func_106C88(0x18, D_002B25C0.f1C, 0, 0, 0, 1);
        D_002227B0 = func_070000((D_002B25C0.f208 << 16) | 0x58006041);
        D_003B3DB8 = func_070000((D_002B25C0.f214 << 16) | 0x58006041);
    }
    func_09A5A0(o + 0x18, D_0022279C, 0);
    if (D_003B3DF0 == 0)
        func_136488(&D_003B3DF0, D_00244570, 8);
}
