/* LEVEL_06:0x1712A0 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_003837FC[2][2];
extern struct Cfg D_00210860[2];
extern int func_0A0030(int a, int b);
extern void func_171110(void);
extern void func_0E94F0(int a);
extern void func_0E8808(int a);
extern void func_170860(void);

void func_1712A0(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_00210860[j].n * (2 * i + 1);
            f = D_00210860[j].f;
            if (f >= 1.0f) {
                D_003837FC[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_003837FC[i][j].val = u + w + w;
            } else {
                D_003837FC[i][j].val = (t + 1) * 2;
            }
            D_003837FC[i][j].h = func_0A0030(D_003837FC[i][j].val * 0x30, 0);
        }
    }
    func_171110();
    func_0E94F0(0);
    func_0E8808(0x12);
    func_0E8808(0x13);
    func_170860();
}
