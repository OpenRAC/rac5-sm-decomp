/* LEVEL_17:0x15B770 -- advances the object's clocks by dt (the record's phase wrapped to one tick), publishes the phase and runs either the pending handler (flag set) or the regular step plus the shared reset. */
struct Rec {
    char pad00[8];
    float f08;
    char pad0C[0x38];
    float f44;
};

struct Obj {
    char pad00[0x58];
    struct Rec *rec;
    char pad5C[8];
    unsigned int flags;
    char pad68[8];
    float f70;
};

extern float fmodf(float x, float y);
extern void func_013040(float x);
extern void func_013050(void);
extern void func_06FF78(struct Obj *o, int mode);
extern void func_15B9D0(struct Obj *o, float dt);

void func_15B770(struct Obj *o, float dt)
{
    struct Rec *rec;

    rec = o->rec;
    rec->f44 = fmodf(rec->f44, 0.016667f);
    o->f70 = o->f70 + dt;
    rec->f44 = rec->f44 + dt;
    rec->f08 = rec->f08 + dt;
    func_013040(rec->f44);
    if (o->flags & 0x200000) {
        func_06FF78(o, 1);
    } else {
        func_15B9D0(o, dt);
        func_013050();
    }
}
