/* LEVEL_06:0x1AA250 -- placement copy of LEVEL_01_1B6248.c: probes the ground below a point and sets an object position. */
struct V3 { float x, y, z; };
struct A { float x, y, z, w; } __attribute__((aligned(16)));
extern struct V3 D_00206D08;
extern float D_0021C484;
extern int func_01ED70(float *t, struct A *o, struct A *p, int a, int b, float f);

static inline void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_1AA250(char *obj, struct V3 *in)
{
    struct A v;
    struct A pos;
    struct A hit[2];
    float t;
    float *d;

    v.x = D_00206D08.x;
    v.y = D_00206D08.y;
    v.z = D_00206D08.z;
    pos.x = in->x + v.x;
    pos.y = in->y + v.y;
    pos.z = in->z + v.z;
    t = 0;
    if (func_01ED70(&t, hit, &pos, 0x28, 0, pos.y - D_0021C484) & 0xFF) {
        if (t < 1.1f) {
            pos.y -= t - 1.1f;
        }
    }
    Copy3((float *)(obj + 0x30), &pos.x);
}
