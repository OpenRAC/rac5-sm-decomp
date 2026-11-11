/* LEVEL_07:0x18B158 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_003AC40C[2][2];
extern struct Cfg D_002381E0[2];
extern int func_0A7860(int a, int b);
extern void func_18AFC8(void);
extern void func_0F1230(int a);
extern void func_0F0548(int a);
extern void func_18A718(void);

void func_18B158(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_002381E0[j].n * (2 * i + 1);
            f = D_002381E0[j].f;
            if (f >= 1.0f) {
                D_003AC40C[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_003AC40C[i][j].val = u + w + w;
            } else {
                D_003AC40C[i][j].val = (t + 1) * 2;
            }
            D_003AC40C[i][j].h = func_0A7860(D_003AC40C[i][j].val * 0x30, 0);
        }
    }
    func_18AFC8();
    func_0F1230(0);
    func_0F0548(0x12);
    func_0F0548(0x13);
    func_18A718();
}
