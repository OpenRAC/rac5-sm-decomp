/* USA LEVEL_01.REL:0x0C4F20, 424-byte candidate (22 November 2026).
 * Measured pinned: 11 differing words; first difference at 0x40.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_003294E0[];
extern int *D_003295E0[];
extern int D_00200B04;

extern unsigned int func_01BBE0(int a, int b, int c);
extern void func_01BBA8(void);
extern int func_01BCB8(int **arr, int a, int b, int c);
extern void func_0B9B18(int *ctx, int a, int b, int c);
extern void func_0AE708(float f, int a, short *out);
extern void func_0B9E90(int *ctx, int a, int b, int c, int d);
extern void func_0B9E78(int *ctx, int a, int b);
extern void func_0B9998(int *ctx, int a, int b);
extern void func_0B9A78(int *ctx, int a, int b);
extern void func_0BA240(int *ctx, int a, int b, int idx, int c, int d, int e, int f, unsigned int g);
extern void func_0B9C10(int *ctx);

void func_0C4F20(void)
{
    int i;
    int n;
    int j;
    int *e;
    int **p;
    short v[8];

    n = 0;
    if (func_01BBE0(-1, 0, 0) < 0x2000) {
        func_01BBA8();
        n = func_01BCB8(D_003295E0, -1, 0, 0);
    }
    func_0B9B18(D_003294E0, D_00200B04, 0x20800, 0);
    func_0AE708(0.0f, 0x215, v);
    func_0B9E90(D_003294E0, v[0], v[2], v[4], v[6]);
    func_0B9E78(D_003294E0, 0x21C, 0x21A);
    func_0B9998(D_003294E0, 0x40602020, 0xFFB07050);
    i = n;
    if (i > 0) {
        j = i - 1;
        p = D_003295E0 + j;
        do {
            func_0B9A78(D_003294E0, 1, 1);
            e = *p--;
            func_0BA240(D_003294E0, e[1], e[2], i - 1, 0, 0, 0, e[3] == 3 ? 0xE : 0, 0xFFFFFFFF);
            i--;
        } while (i > 0);
    }
    D_003294E0[5] |= 0x14;
    func_0B9C10(D_003294E0);
}
