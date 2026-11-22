/* LEVEL_09:0x1708F8 -- placement copy of LEVEL_01_17CE68.c: state tick: after three ticks fires a one-shot, otherwise plays five timed effects. */
typedef struct State {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
    char pad;
    unsigned char flag;
} State;

typedef struct Obj {
    char pad0[0x54];
    State *state;
    char pad1[0x70 - 0x58];
    float tick;
} Obj;

typedef struct Vec3 Vec3;

extern void func_0018A0(int a);
extern unsigned int func_0849D8(int a);
extern Vec3 *func_019740(void);
extern void func_003170(float rate, Vec3 *pos, int snap);
extern void func_079108(Obj *o, int a);
extern void func_0036E8(int a, int b, float x, float y);
extern void func_003718(float x, int a, float y, int b);
extern void func_003748(int a, float x, float y, int b);
extern void func_003838(float x, int a, float y, int b);
extern void func_003888(float x, float y, int a, int b);
extern void func_0382B8(int a);
extern void func_003BA0(int a);

void func_1708F8(Obj *self)
{
    State *s;
    State *t;

    s = self->state;
    func_0018A0(0);
    if (s->flag == 0) {
        if (self->tick >= 3.0f) {
            s->flag = (func_0849D8(2) & ~8) != 0;
        }
    }
    self->tick = self->tick + 1.0f;
    if (self->tick >= 3.0f) {
        if (s->flag != 0) {
            func_003170(0.016666668f, func_019740(), 0);
            func_079108(self, 1);
            return;
        }
    }
    t = self->state;
    func_0036E8(0xC8, 3, t->f0, 1.0f);
    func_003718(t->f4, 0xC8, 1.0f, 3);
    func_003748(0xC8, t->f10, 1.0f, 3);
    func_003838(t->fC, 0xC8, 1.0f, 3);
    func_003888(t->f8, 1.0f, 0xC8, 3);
    func_0382B8(1);
    func_003BA0(0);
}
