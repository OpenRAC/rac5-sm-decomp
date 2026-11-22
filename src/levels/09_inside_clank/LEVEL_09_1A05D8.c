/* LEVEL_09:0x1A05D8 -- probes up to ten times for a ground hit below an object and writes the hit point to its target. */

struct Tgt1A05D8 {
    float x;
    float z;
    char pad08[0x2C];
    int w34;
};

struct Obj1A05D8 {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x18];
    struct Tgt1A05D8 *p54;
};

struct World1A05D8 {
    char pad0[0xC];
    float f0C;
};

extern struct World1A05D8 D_00216E78;

extern void func_0818A8(int h, float *v);
extern int func_02F540(struct Tgt1A05D8 *t, float *v, int a);
extern int func_01F960(float *h, float *n, float *v, int a, int b, float f);

int func_1A05D8(struct Obj1A05D8 *o)
{
    struct Tgt1A05D8 *t;
    float v[4];
    float n[8];
    float h;
    float *ph = &h;
    unsigned int i;
    unsigned char hit;

    t = o->p54;
    for (i = 0; i < 10; i++) {
        func_0818A8(t->w34, v);
        func_02F540(t, v, 0);
        v[1] = o->pos[1] + 0.25f;
        h = 100.0f;
        hit = func_01F960(ph, n, v, 0x28, 0, v[1] - D_00216E78.f0C);
        if (hit != 0 && h <= 0.5f) {
            t->x = v[0];
            t->z = v[2];
            return 1;
        }
    }
    t->x = o->pos[0];
    t->z = o->pos[2];
    return 0;
}
