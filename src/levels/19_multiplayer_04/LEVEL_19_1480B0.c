/* LEVEL_19:0x1480B0 -- advances the object's phase and its record's phase by the step (the record's one wrapped by fmodf at 0.016667 first), publishes the record's phase and runs the follow-ups. */
typedef struct Rec {
    char pad0[0x30];
    float phase;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
    char pad5C[0x14];
    float phase;
} Obj;

extern float fmodf(float x, float y);
extern void func_013040(float x);
extern void func_148250(Obj *o, float step);
extern void func_013050(void);

void func_1480B0(Obj *o, float step)
{
    Rec *r = o->rec;

    r->phase = fmodf(r->phase, 0.016667f);
    o->phase = o->phase + step;
    r->phase = r->phase + step;
    func_013040(r->phase);
    func_148250(o, step);
    func_013050();
}
