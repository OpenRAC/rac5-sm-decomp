/* LEVEL_08:0x1A08F0 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_003E79DC[2][2];
extern struct Cfg D_0026E520[2];
extern int func_0B0158(int a, int b);
extern void func_1A0760(void);
extern void func_0FBE78(int a);
extern void func_0FB190(int a);
extern void func_19FEB0(void);

void func_1A08F0(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_0026E520[j].n * (2 * i + 1);
            f = D_0026E520[j].f;
            if (f >= 1.0f) {
                D_003E79DC[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_003E79DC[i][j].val = u + w + w;
            } else {
                D_003E79DC[i][j].val = (t + 1) * 2;
            }
            D_003E79DC[i][j].h = func_0B0158(D_003E79DC[i][j].val * 0x30, 0);
        }
    }
    func_1A0760();
    func_0FBE78(0);
    func_0FB190(0x12);
    func_0FB190(0x13);
    func_19FEB0();
}
