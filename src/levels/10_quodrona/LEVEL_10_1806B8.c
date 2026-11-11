/* LEVEL_10:0x1806B8 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_0039FEE4[2][2];
extern struct Cfg D_0022B9C0[2];
extern int func_0A6978(int a, int b);
extern void func_180528(void);
extern void func_0EFD70(int a);
extern void func_0EF088(int a);
extern void func_17FC78(void);

void func_1806B8(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_0022B9C0[j].n * (2 * i + 1);
            f = D_0022B9C0[j].f;
            if (f >= 1.0f) {
                D_0039FEE4[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_0039FEE4[i][j].val = u + w + w;
            } else {
                D_0039FEE4[i][j].val = (t + 1) * 2;
            }
            D_0039FEE4[i][j].h = func_0A6978(D_0039FEE4[i][j].val * 0x30, 0);
        }
    }
    func_180528();
    func_0EFD70(0);
    func_0EF088(0x12);
    func_0EF088(0x13);
    func_17FC78();
}
