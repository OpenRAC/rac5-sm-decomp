/* LEVEL_24:0x1630A8 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_00360AAC[2][2];
extern struct Cfg D_001F0E70[2];
extern int func_09F0D8(int a, int b);
extern void func_162F18(void);
extern void func_0E8040(int a);
extern void func_0E7358(int a);
extern void func_162668(void);

void func_1630A8(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_001F0E70[j].n * (2 * i + 1);
            f = D_001F0E70[j].f;
            if (f >= 1.0f) {
                D_00360AAC[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_00360AAC[i][j].val = u + w + w;
            } else {
                D_00360AAC[i][j].val = (t + 1) * 2;
            }
            D_00360AAC[i][j].h = func_09F0D8(D_00360AAC[i][j].val * 0x30, 0);
        }
    }
    func_162F18();
    func_0E8040(0);
    func_0E7358(0x12);
    func_0E7358(0x13);
    func_162668();
}
