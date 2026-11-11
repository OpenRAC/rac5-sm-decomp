/* LEVEL_18:0x174708 -- placement copy of LEVEL_16_171580.c: counts down the record's timer when the object is active and starts the follow-up when it runs out or on request 10; returns the resulting state. */
struct Rec {
    char pad0[0x28];
    float f28;
};

struct Obj {
    char pad0[0x45];
    unsigned char f45;
    char pad46[0x12];
    struct Rec *f58;
};

extern void func_174768(struct Obj *o, int a1);

int func_174708(struct Obj *o, int request, float dt)
{
    float t;

    if (o->f45 < 2)
        return 0;
    t = o->f58->f28 - dt;
    o->f58->f28 = t;
    if (t <= 0.0f || request == 10) {
        func_174768(o, 1);
        return 3;
    }
    return 2;
}
