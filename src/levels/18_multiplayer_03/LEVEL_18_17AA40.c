/* LEVEL_18:0x17AA40 -- probes up to ten times for a ground hit below an object and writes the hit point to its target. */

struct Tgt17AA40 {
    float x;
    float z;
    char pad08[0x28];
    int w30;
    char pad34;
    unsigned char b35;
};

struct Obj17AA40 {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x18];
    struct Tgt17AA40 *p54;
};

struct World17AA40 {
    char pad0[0xC];
    float f0C;
};

extern struct World17AA40 D_001DE778;

extern void *memset(void *s, int c, unsigned int n);
extern void func_0762F0(int h, float *v);
extern int func_02DB40(struct Tgt17AA40 *t, float *v, int a);
extern int func_01DAC8(float *h, float *n, float *v, int a, int b, float f);

int func_17AA40(struct Obj17AA40 *o)
{
    struct Tgt17AA40 *t;
    float v[4];
    float n[8];
    float h;
    unsigned int i;
    unsigned char hit;

    t = o->p54;
    for (i = 0; i < 10; i++) {
        memset(v, 0, 16);
        v[3] = 1.0f;
        func_0762F0(t->w30, v);
        func_02DB40(t, v, 0);
        if (t->b35 == 0) {
            v[1] = o->pos[1] + 0.25f;
            h = 100.0f;
            hit = func_01DAC8(&h, n, v, 0x28, 0, v[1] - D_001DE778.f0C);
            if (hit != 0 && h <= 0.5f) {
                t->x = v[0];
                t->z = v[2];
                return 1;
            }
        }
    }
    t->x = o->pos[0];
    t->z = o->pos[2];
    return 0;
}
