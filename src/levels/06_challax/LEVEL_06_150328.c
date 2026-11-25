/* LEVEL_06:0x150328 -- placement copy of LEVEL_02_174628.c: steps a three-state object, then runs a proximity test against a reference point to pick its next handler. */
struct Sub { char pad_00[0x10]; unsigned char b_10; };
struct Obj {
    char pad_00[0x30];
    float pos[4];
    char pad_40[5];
    unsigned char state;
    char pad_46[0x54 - 0x46];
    struct Sub *sub;
};
struct Ref { char pad_00[0x30]; float pos[3]; };

extern struct Ref D_00221EC0;
extern void func_150528(long long value);
extern void func_1506B0(void *o);
extern void func_150518(void *o);
extern void func_150560(void *o, float dt);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

static __inline__ float Dist2(struct Ref *r, float *b)
{
    float *a = r->pos;
    float dx = a[0] - b[0];
    float dy = a[1] - b[1];
    float dz = a[2] - b[2];

    return dx * dx + dy * dy + dz * dz;
}

void func_150328(struct Obj *o, float dt)
{
    struct Sub *s;
    float tmp[4];

    s = o->sub;
    switch (o->state) {
    case 0:
        o->state = 1;
        break;
    case 1:
        ((void (*)(void *))func_150528)(o);
        break;
    case 2:
        func_1506B0(o);
        break;
    }
    if (s->b_10 == 0) {
        Copy4(tmp, o->pos);
        if (Dist2(&D_00221EC0, tmp) < 1.21f) {
            func_150518(o);
        }
    } else {
        func_150560(o, dt);
    }
}
