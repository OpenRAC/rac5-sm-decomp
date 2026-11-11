/* LEVEL_23:0x168F60 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_00364F5C[2][2];
extern struct Cfg D_001F39E0[2];
extern int func_09C5A0(int a, int b);
extern void func_168DD0(void);
extern void func_0E3318(int a);
extern void func_0E2630(int a);
extern void func_168520(void);

void func_168F60(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_001F39E0[j].n * (2 * i + 1);
            f = D_001F39E0[j].f;
            if (f >= 1.0f) {
                D_00364F5C[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_00364F5C[i][j].val = u + w + w;
            } else {
                D_00364F5C[i][j].val = (t + 1) * 2;
            }
            D_00364F5C[i][j].h = func_09C5A0(D_00364F5C[i][j].val * 0x30, 0);
        }
    }
    func_168DD0();
    func_0E3318(0);
    func_0E2630(0x12);
    func_0E2630(0x13);
    func_168520();
}
