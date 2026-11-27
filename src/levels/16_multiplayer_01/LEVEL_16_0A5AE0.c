/* LEVEL_16:0x0A5AE0 -- updates one player's pad slot: records the state of the object that player is tracking, starting or refreshing its feedback effect. */
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

extern int D_001AA840[];
extern int D_001AA930[];
extern int D_001AAA20[];
extern int D_001AAA28[];

extern Player *func_112CE8(int i);
extern Target *func_022110(int a, int b);
extern void func_0A6278(unsigned int index, unsigned int value);
extern void *func_021F50(unsigned int a0, int a1);
extern long long func_0221C8(unsigned int o, int x);
extern int func_022C28(int mode, int field);
extern void func_0A68A0(int idx);
extern float func_0222E8(int a, int b);
extern void func_0A6290(float v, int idx);

void func_0A5AE0(int i)
{
    Player *p;
    int tgt;
    int field;
    int w;
    Target *t;

    w = D_001AA840[i];
    if (w == 1) {
        D_001AA930[i] = 1;
    } else if (w == 2) {
        D_001AA930[i] = 0;
    } else if (w == 3) {
        D_001AA930[i] = 0;
    } else {
        p = func_112CE8(i);
        tgt = p->w9A0;
        field = p->w0F8;
        if (tgt != 0) {
            t = func_022110(tgt, -1);
            func_0A6278(i, t->w18);
            D_001AA930[i] = 0;
            if (func_021F50(tgt, field) != 0) {
                if (func_0221C8(tgt, field) != 0) {
                    if (tgt != D_001AAA20[i] || D_001AAA28[i] != func_022C28(tgt, field))
                        func_0A68A0(i);
                    func_0A6290(func_0222E8(tgt, field), i);
                    D_001AA930[i] = 1;
                } else {
                    func_0A6290(1.0f, i);
                    D_001AA930[i] = 2;
                }
            }
        }
        D_001AAA20[i] = tgt;
        D_001AAA28[i] = func_022C28(tgt, field);
    }
}
