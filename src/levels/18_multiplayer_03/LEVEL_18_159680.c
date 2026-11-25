/* LEVEL_18:0x159680 -- per-frame timer update: advances the object's clock and the three timers of its state record, wraps the first timer, and runs one of two update hooks depending on the attached record's mode. */
extern float fmodf(float x, float y);

typedef struct {
    char pad_00[0x170];
    float t170;
    float t174;
    char pad_178[0x74];
    float t1EC;
} State;

typedef struct {
    char pad_00[0x18];
    unsigned char mode;
} Attach;

typedef struct {
    char pad_00[0x54];
    Attach *attach;
    State *state;
    char pad_5C[0x14];
    float clock;
} Obj;

extern unsigned int func_111BB8(void);
extern unsigned int func_111BF0(void);
extern void func_0130B0(float x);
extern void func_0130C0(void);
extern void func_15C898(Obj *o, float dt);
extern void func_15A0A0(Obj *o, float dt);

void func_159680(Obj *o, float dt)
{
    State *s;
    Attach *a;

    if (func_111BB8() == 1) {
        return;
    }
    o->clock += dt;
    s = o->state;
    a = o->attach;
    s->t170 += dt;
    s->t174 += dt;
    s->t1EC += dt;
    func_0130B0(s->t170);
    if (func_111BF0() != 0 && a->mode == 1) {
        func_15C898(o, dt);
    } else {
        func_15A0A0(o, dt);
    }
    s->t170 = fmodf(s->t170, 0.016666999086737633f);
    func_0130C0();
}
