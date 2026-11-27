/* LEVEL_15:0x10D748 -- callback on an embedded member (owner = member - 0x2D8): subtracts the step from the first value, counts the timer down by half the step and fires the owner's burst at the given position when it runs out. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Owner {
    char pad0[0x238];
    float a;
    char pad23C[4];
    float timer;
} Owner;

extern void func_10D508(Owner *o, Vec3 *c, float radius);

void func_10D748(char *member, int a1, Vec3 *pos, float *src)
{
    Owner *o = (Owner *)(member - 0x2D8);
    float t;

    o->a = o->a - src[1];
    t = o->timer - src[1] * 0.5f;
    if (t <= 0.0f) {
        func_10D508(o, pos, src[1]);
        o->timer = 0.0f;
    } else {
        o->timer = t;
    }
}
