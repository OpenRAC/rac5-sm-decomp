/* LEVEL_07:0x1C37A8 -- placement copy of LEVEL_18_17AA40.c: probes up to ten times for a ground hit below an object and writes the hit point to its target. */

struct Tgt17AA40 {
    float x;
    float z;
    char pad08[0x2C];
    int w34;
    char pad38[5];
    unsigned char b3D;
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

extern struct World17AA40 D_00244FF8;

extern void *memset(void *s, int c, unsigned int n);
extern void func_086FC0(int h, float *v);
extern int func_030A18(struct Tgt17AA40 *t, float *v, int a);
extern int func_020C30(float *h, float *n, float *v, int a, int b, float f);

int func_1C37A8(struct Obj17AA40 *o)
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
        func_086FC0(t->w34, v);
        func_030A18(t, v, 0);
        if (t->b3D == 0) {
            v[1] = o->pos[1] + 0.25f;
            h = 100.0f;
            hit = func_020C30(&h, n, v, 0x28, 0, v[1] - D_00244FF8.f0C);
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
