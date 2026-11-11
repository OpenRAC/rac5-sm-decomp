/* LEVEL_03:0x17E788 -- placement copy of LEVEL_01_17E078.c: fills a two-by-two table of handles and values from the config pairs, then runs the setup calls. */
struct Cfg {
    int n;
    float f;
};

struct Ent {
    int h;
    int pad;
    int val;
};

extern struct Ent D_003B198C[2][2];
extern struct Cfg D_0023BFF0[2];
extern int func_0A55E0(int a, int b);
extern void func_17E5F8(void);
extern void func_0EECC8(int a);
extern void func_0EDFE0(int a);
extern void func_17DD48(void);

void func_17E788(void)
{
    int i;
    int j;
    int t;
    int u;
    int w;
    float f;

    for (i = 0; i < 2; i++) {
        for (j = 0; j != 2; j++) {
            t = D_0023BFF0[j].n * (2 * i + 1);
            f = D_0023BFF0[j].f;
            if (f >= 1.0f) {
                D_003B198C[i][j].val = ((t + 1) << 2) | 1;
            } else if (f > 0.0f) {
                u = (t + 1) * 2;
                w = u + 1;
                D_003B198C[i][j].val = u + w + w;
            } else {
                D_003B198C[i][j].val = (t + 1) * 2;
            }
            D_003B198C[i][j].h = func_0A55E0(D_003B198C[i][j].val * 0x30, 0);
        }
    }
    func_17E5F8();
    func_0EECC8(0);
    func_0EDFE0(0x12);
    func_0EDFE0(0x13);
    func_17DD48();
}
