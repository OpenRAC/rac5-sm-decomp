/* LEVEL_20:0x090060 -- placement copy of LEVEL_16_0A5AE0.c: updates one player's pad slot: records the state of the object that player is tracking, starting or refreshing its feedback effect. */
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

extern int D_0010CF20[];
extern int D_0010D010[];
extern int D_0010D100[];
extern int D_0010D108[];

extern Player *func_0E5858(int i);
extern Target *func_01EE10(int a, int b);
extern void func_0907F8(unsigned int index, unsigned int value);
extern void *func_01EC50(unsigned int a0, int a1);
extern int func_01EEC8(unsigned int o, int x);
extern int func_01F8D0(int mode, int field);
extern void func_090E20(int idx);
extern float func_01EFE8(int a, int b);
extern void func_090810(float v, int idx);

void func_090060(int i)
{
    Player *p;
    int tgt;
    int field;
    int w;
    Target *t;

    w = D_0010CF20[i];
    if (w == 1) {
        D_0010D010[i] = 1;
    } else if (w == 2) {
        D_0010D010[i] = 0;
    } else if (w == 3) {
        D_0010D010[i] = 0;
    } else {
        p = func_0E5858(i);
        tgt = p->w9A0;
        field = p->w0F8;
        if (tgt != 0) {
            t = func_01EE10(tgt, -1);
            func_0907F8(i, t->w18);
            D_0010D010[i] = 0;
            if (func_01EC50(tgt, field) != 0) {
                if (func_01EEC8(tgt, field) != 0) {
                    if (tgt != D_0010D100[i] || D_0010D108[i] != func_01F8D0(tgt, field))
                        func_090E20(i);
                    func_090810(func_01EFE8(tgt, field), i);
                    D_0010D010[i] = 1;
                } else {
                    func_090810(1.0f, i);
                    D_0010D010[i] = 2;
                }
            }
        }
        D_0010D100[i] = tgt;
        D_0010D108[i] = func_01F8D0(tgt, field);
    }
}
