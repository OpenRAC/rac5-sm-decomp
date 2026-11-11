/* LEVEL_10:0x176420 -- checks an object's state flags and returns a code (2, 5, 1 or 6 for a flagged or pending state); otherwise it asks the object check and, when that says 4, either restarts the timer with a random duration after a random effect (timer below zero) or counts the timer down; returns -1. */
struct Timer {
    char pad00[4];
    float f04;
};

struct Obj {
    char pad00[0x74];
    unsigned int w74;
    unsigned int w78;
    float f7C;
    char pad80[0x70];
    int wF0;
};

extern int rand(void);

extern int func_173020(char *object);
extern void func_1730A0(struct Obj *o, int kind, float a, float b);

static __inline__ float RandRange(float low, float span)
{
    return (float)rand() * 4.656613e-10f * span + low;
}

int func_176420(struct Timer *t, struct Obj *o)
{
    if (o->w78 & 0x4000) {
        return 2;
    }
    if (o->w78 & 0x8000) {
        return 5;
    }
    if (0.0001f < o->f7C) {
        return 1;
    }
    if (o->w74 & 0x2000) {
        if (o->wF0 > 0) {
            return 6;
        }
    }
    if (func_173020((char *)o) != 4) {
        return -1;
    }
    if (t->f04 < 0.0f) {
        func_1730A0(o, (rand() & 1) + 5, 0.0f, 0.15f);
        t->f04 = RandRange(2.0f, 4.0f);
    } else {
        t->f04 = t->f04 - 0.033333335f;
    }
    return -1;
}
