/* LEVEL_15:0x100D88 -- decays two timers of the object that precedes the argument by the step, and releases the object when the second runs out. */
typedef struct {
    char pad[0x230];
    float t230;
    float t234;
} Obj;

typedef struct {
    float f0;
    float step;
} Step;

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void func_100B78(Obj *o, Vec3 *c, float radius);

void func_100D88(char *a0, int a1, Vec3 *a2, Step *a3)
{
    Obj *o = (Obj *)(a0 - 0x240);
    float dt;
    float t;

    o->t230 = o->t230 - a3->step;
    dt = a3->step;
    t = o->t234 - dt * 0.3400000035762787f;
    if (t <= 0.0f) {
        func_100B78(o, a2, dt);
        o->t234 = 0.0f;
    } else {
        o->t234 = t;
    }
}
