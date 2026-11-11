/* LEVEL_19:0x0374C0 -- placement copy of LEVEL_16_038230.c: stores doubled vector components into the record, marks a halfword, then calls a helper. */
struct Dst14 {
    char pad0[0x102];
    short h102;
    char pad1[0x1B4 - 0x104];
    float f1B4;
    float f1B8;
    float f1BC;
};

struct Src14 {
    float x;
    float y;
    float z;
};

void func_03A488(struct Dst14 *a0, struct Src14 *a1);

static __inline__ void vec3_copy(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_0374C0(struct Dst14 *a0, struct Src14 *a1)
{
    float t[3];

    t[2] = a1->z + a1->z;
    t[0] = a1->x + a1->x;
    t[1] = a1->y + a1->y;
    vec3_copy(&a0->f1B4, t);
    a0->h102 = 63;
    func_03A488(a0, a1);
}
