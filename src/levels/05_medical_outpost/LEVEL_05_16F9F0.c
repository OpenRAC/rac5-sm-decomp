/* LEVEL_05:0x16F9F0 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_003827B4[2][2];
extern struct Cfg D_0020FDD0[2];
extern int func_0A3E20(int a, int b);
extern void func_16F860(void);
extern void func_0EC570(int a);
extern void func_0EB888(int a);
extern void func_16EFB0(void);

void func_16F9F0(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_0020FDD0[j].n * (2 * i + 1);
            f = D_0020FDD0[j].f;
            if (f >= 1.0f) {
                D_003827B4[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_003827B4[i][j].val = u + w + w;
            } else {
                D_003827B4[i][j].val = (t + 1) * 2;
            }
            D_003827B4[i][j].h = func_0A3E20(D_003827B4[i][j].val * 0x30, 0);
        }
    }
    func_16F860();
    func_0EC570(0);
    func_0EB888(0x12);
    func_0EB888(0x13);
    func_16EFB0();
}
