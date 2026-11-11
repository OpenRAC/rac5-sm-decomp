/* LEVEL_09:0x171B08 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_0037E15C[2][2];
extern struct Cfg D_0020B4F0[2];
extern int func_0A2B10(int a, int b);
extern void func_171978(void);
extern void func_0EC310(int a);
extern void func_0EB628(int a);
extern void func_1710C8(void);

void func_171B08(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_0020B4F0[j].n * (2 * i + 1);
            f = D_0020B4F0[j].f;
            if (f >= 1.0f) {
                D_0037E15C[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_0037E15C[i][j].val = u + w + w;
            } else {
                D_0037E15C[i][j].val = (t + 1) * 2;
            }
            D_0037E15C[i][j].h = func_0A2B10(D_0037E15C[i][j].val * 0x30, 0);
        }
    }
    func_171978();
    func_0EC310(0);
    func_0EB628(0x12);
    func_0EB628(0x13);
    func_1710C8();
}
