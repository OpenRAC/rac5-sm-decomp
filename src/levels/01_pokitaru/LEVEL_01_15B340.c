/* LEVEL_01:0x15B340 -- randomly mirrors or copies a vector into the owner's slot and picks a timer. */
extern int rand(void);
struct Vec4 {
    float x, y, z, w;
};
struct Owner {
    char pad[0x10];
    struct Vec4 v;
    char pad20[0x40];
    int timer;
};
struct Src {
    float x, y, z, w;
    char pad[0x48];
    struct Owner *owner;
};
extern void func_07CD28(struct Src *s, int a, int b, int c, float f, float g);

static __inline__ void Neg3(float *d, float *v)
{
    d[0] = -v[0];
    d[1] = -v[1];
    d[2] = -v[2];
}

static __inline__ void Copy4(float *d, float *v)
{
    d[0] = v[0];
    d[1] = v[1];
    d[2] = v[2];
    d[3] = v[3];
}

void func_15B340(struct Src *s)
{
    struct Owner *o = s->owner;
    int r = rand();

    if ((r >> 30) & 1) {
        Neg3(&o->v.x, &s->x);
        func_07CD28(s, 0x10, 0, 1, 0.15000000596046448f, 0.0f);
    } else {
        Copy4(&o->v.x, &s->x);
        func_07CD28(s, 0x11, 0, 1, 0.15000000596046448f, 0.0f);
    }
    r &= ~0x40000000;
    o->timer = r % 60 + 30;
}
