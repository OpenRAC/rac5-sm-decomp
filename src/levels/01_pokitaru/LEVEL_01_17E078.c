/* LEVEL_01:0x17E078 -- fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_00396AC4[2][2];
extern struct Cfg D_00222A10[2];
extern int func_0A5860(int a, int b);
extern void func_17DEE8(void);
extern void func_0F0430(int a);
extern void func_0EF748(int a);
extern void func_17D638(void);

void func_17E078(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_00222A10[j].n * (2 * i + 1);
            f = D_00222A10[j].f;
            if (f >= 1.0f) {
                D_00396AC4[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_00396AC4[i][j].val = u + w + w;
            } else {
                D_00396AC4[i][j].val = (t + 1) * 2;
            }
            D_00396AC4[i][j].h = func_0A5860(D_00396AC4[i][j].val * 0x30, 0);
        }
    }
    func_17DEE8();
    func_0F0430(0);
    func_0EF748(0x12);
    func_0EF748(0x13);
    func_17D638();
}
