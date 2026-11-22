/* LEVEL_17:0x0A4FC0 -- placement copy of LEVEL_16_0A5AE0.c: updates one player's pad slot: records the state of the object that player is tracking, starting or refreshing its feedback effect. */
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

extern int D_0019DE40[];
extern int D_0019DF30[];
extern int D_0019E020[];
extern int D_0019E028[];

extern Player *func_112478(int i);
extern Target *func_021A90(int a, int b);
extern void func_0A5758(unsigned int index, unsigned int value);
extern void *func_0218D0(unsigned int a0, int a1);
extern int func_021B48(unsigned int o, int x);
extern int func_0225A8(int mode, int field);
extern void func_0A5DC8(int idx);
extern float func_021C68(int a, int b);
extern void func_0A5770(float v, int idx);

void func_0A4FC0(int i)
{
    Player *p;
    int tgt;
    int field;
    int w;
    Target *t;

    w = D_0019DE40[i];
    if (w == 1) {
        D_0019DF30[i] = 1;
    } else if (w == 2) {
        D_0019DF30[i] = 0;
    } else if (w == 3) {
        D_0019DF30[i] = 0;
    } else {
        p = func_112478(i);
        tgt = p->w9A0;
        field = p->w0F8;
        if (tgt != 0) {
            t = func_021A90(tgt, -1);
            func_0A5758(i, t->w18);
            D_0019DF30[i] = 0;
            if (func_0218D0(tgt, field) != 0) {
                if (func_021B48(tgt, field) != 0) {
                    if (tgt != D_0019E020[i] || D_0019E028[i] != func_0225A8(tgt, field))
                        func_0A5DC8(i);
                    func_0A5770(func_021C68(tgt, field), i);
                    D_0019DF30[i] = 1;
                } else {
                    func_0A5770(1.0f, i);
                    D_0019DF30[i] = 2;
                }
            }
        }
        D_0019E020[i] = tgt;
        D_0019E028[i] = func_0225A8(tgt, field);
    }
}
