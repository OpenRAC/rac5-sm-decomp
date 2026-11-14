/* LEVEL_17:0x14F848 -- advances the object's clocks by dt (the record's phase wrapped to one tick), clears its flag byte, publishes the phase, runs the step and marks the record. */
struct Rec {
    char pad00[0x50];
    float f50;
    float f54;
    unsigned int w58;
    char pad5C[0xB];
    unsigned char b67;
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
extern void func_14F928(struct Obj *o, float dt);

void func_14F848(struct Obj *o, float dt)
{
    struct Rec *rec;

    rec = o->rec;
    rec->f50 = fmodf(rec->f50, 0.03333333507180214f);
    o->f70 = o->f70 + dt;
    rec->b67 = 0;
    rec->f50 = rec->f50 + dt;
    rec->f54 = rec->f54 + dt;
    func_013040(rec->f50);
    func_14F928(o, dt);
    rec->w58 = rec->w58 | 2;
    func_013050();
}
