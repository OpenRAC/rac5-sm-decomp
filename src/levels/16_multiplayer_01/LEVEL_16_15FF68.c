/* LEVEL_16:0x15FF68 -- advances the object's clocks by dt (the record's phase wrapped to one tick), publishes the phase and runs the regular step plus the shared reset. */
struct Rec {
    char pad00[0xB0];
    float fB0;
    float fB4;
    float fB8;
};

struct Obj {
    char pad00[0x58];
    struct Rec *rec;
    char pad5C[0x14];
    float f70;
};

extern float fmodf(float x, float y);
extern void func_013040(float x);
extern void func_013050(void);
extern void func_1602B8(struct Obj *o, float dt);

void func_15FF68(struct Obj *o, float dt)
{
    struct Rec *rec;

    rec = o->rec;
    rec->fB0 = fmodf(rec->fB0, 0.016666999086737633f);
    o->f70 = o->f70 + dt;
    rec->fB0 = rec->fB0 + dt;
    rec->fB8 = rec->fB8 + dt;
    rec->fB4 = rec->fB4 + dt;
    func_013040(rec->fB0);
    func_1602B8(o, dt);
    func_013050();
}
