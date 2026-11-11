/* LEVEL_02:0x194008 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_003AEAD4[2][2];
extern struct Cfg D_00239D70[2];
extern int func_0AC170(int a, int b);
extern void func_193E78(void);
extern void func_0F65E0(int a);
extern void func_0F58F8(int a);
extern void func_1935C8(void);

void func_194008(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_00239D70[j].n * (2 * i + 1);
            f = D_00239D70[j].f;
            if (f >= 1.0f) {
                D_003AEAD4[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_003AEAD4[i][j].val = u + w + w;
            } else {
                D_003AEAD4[i][j].val = (t + 1) * 2;
            }
            D_003AEAD4[i][j].h = func_0AC170(D_003AEAD4[i][j].val * 0x30, 0);
        }
    }
    func_193E78();
    func_0F65E0(0);
    func_0F58F8(0x12);
    func_0F58F8(0x13);
    func_1935C8();
}
