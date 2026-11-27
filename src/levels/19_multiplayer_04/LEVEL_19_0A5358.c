/* LEVEL_19:0x0A5358 -- placement copy of LEVEL_16_0A5AE0.c: updates one player's pad slot: records the state of the object that player is tracking, starting or refreshing its feedback effect. */
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

extern int D_001AB9C0[];
extern int D_001ABAB0[];
extern int D_001ABBA0[];
extern int D_001ABBA8[];

extern Player *func_113490(int i);
extern Target *func_021D50(int a, int b);
extern void func_0A5AF0(unsigned int index, unsigned int value);
extern void *func_021B90(unsigned int a0, int a1);
extern long long func_021E08(unsigned int o, int x);
extern int func_022868(int mode, int field);
extern void func_0A6160(int idx);
extern float func_021F28(int a, int b);
extern void func_0A5B08(float v, int idx);

void func_0A5358(int i)
{
    Player *p;
    int tgt;
    int field;
    int w;
    Target *t;

    w = D_001AB9C0[i];
    if (w == 1) {
        D_001ABAB0[i] = 1;
    } else if (w == 2) {
        D_001ABAB0[i] = 0;
    } else if (w == 3) {
        D_001ABAB0[i] = 0;
    } else {
        p = func_113490(i);
        tgt = p->w9A0;
        field = p->w0F8;
        if (tgt != 0) {
            t = func_021D50(tgt, -1);
            func_0A5AF0(i, t->w18);
            D_001ABAB0[i] = 0;
            if (func_021B90(tgt, field) != 0) {
                if (func_021E08(tgt, field) != 0) {
                    if (tgt != D_001ABBA0[i] || D_001ABBA8[i] != func_022868(tgt, field))
                        func_0A6160(i);
                    func_0A5B08(func_021F28(tgt, field), i);
                    D_001ABAB0[i] = 1;
                } else {
                    func_0A5B08(1.0f, i);
                    D_001ABAB0[i] = 2;
                }
            }
        }
        D_001ABBA0[i] = tgt;
        D_001ABBA8[i] = func_022868(tgt, field);
    }
}
