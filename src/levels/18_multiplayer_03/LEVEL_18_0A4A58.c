/* LEVEL_18:0x0A4A58 -- placement copy of LEVEL_16_0A5AE0.c: updates one player's pad slot: records the state of the object that player is tracking, starting or refreshing its feedback effect. */
typedef struct Player {
    char pad000[0xF8];
    int w0F8;
    char pad0FC[0x9A0 - 0xFC];
    int w9A0;
} Player;

typedef struct Target {
    char pad00[0x18];
    int w18;
} Target;

extern int D_001ABCC0[];
extern int D_001ABDB0[];
extern int D_001ABEA0[];
extern int D_001ABEA8[];

extern Player *func_111AA0(int i);
extern Target *func_021758(int a, int b);
extern void func_0A51F0(unsigned int index, unsigned int value);
extern void *func_021598(unsigned int a0, int a1);
extern int func_021810(unsigned int o, int x);
extern int func_022270(int mode, int field);
extern void func_0A5860(int idx);
extern float func_021930(int a, int b);
extern void func_0A5208(float v, int idx);

void func_0A4A58(int i)
{
    Player *p;
    int tgt;
    int field;
    int w;
    Target *t;

    w = D_001ABCC0[i];
    if (w == 1) {
        D_001ABDB0[i] = 1;
    } else if (w == 2) {
        D_001ABDB0[i] = 0;
    } else if (w == 3) {
        D_001ABDB0[i] = 0;
    } else {
        p = func_111AA0(i);
        tgt = p->w9A0;
        field = p->w0F8;
        if (tgt != 0) {
            t = func_021758(tgt, -1);
            func_0A51F0(i, t->w18);
            D_001ABDB0[i] = 0;
            if (func_021598(tgt, field) != 0) {
                if (func_021810(tgt, field) != 0) {
                    if (tgt != D_001ABEA0[i] || D_001ABEA8[i] != func_022270(tgt, field))
                        func_0A5860(i);
                    func_0A5208(func_021930(tgt, field), i);
                    D_001ABDB0[i] = 1;
                } else {
                    func_0A5208(1.0f, i);
                    D_001ABDB0[i] = 2;
                }
            }
        }
        D_001ABEA0[i] = tgt;
        D_001ABEA8[i] = func_022270(tgt, field);
    }
}
