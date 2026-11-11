/* LEVEL_04:0x189618 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_003B1304[2][2];
extern struct Cfg D_0023C3E0[2];
extern int func_0AAA70(int a, int b);
extern void func_189488(void);
extern void func_0F7968(int a);
extern void func_0F6C80(int a);
extern void func_188BD8(void);

void func_189618(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_0023C3E0[j].n * (2 * i + 1);
            f = D_0023C3E0[j].f;
            if (f >= 1.0f) {
                D_003B1304[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_003B1304[i][j].val = u + w + w;
            } else {
                D_003B1304[i][j].val = (t + 1) * 2;
            }
            D_003B1304[i][j].h = func_0AAA70(D_003B1304[i][j].val * 0x30, 0);
        }
    }
    func_189488();
    func_0F7968(0);
    func_0F6C80(0x12);
    func_0F6C80(0x13);
    func_188BD8();
}
