/* LEVEL_01:0x1BEA80 -- checks the object's planar distance to its target against a radius; returns 1 when inside. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad0[0x38];
    void *p38;
    void *p3C;
    char pad1[0x4];
    float radius;
} Sub;

typedef struct {
    char pad0[0x30];
    Vec3 pos;
    char pad1[0x18];
    Sub *sub54;
} Obj;

void func_01A2A0(float *out);
int func_084708(void *a, float *v);

int func_1BEA80(Obj *o)
{
    Vec3 p;
    Vec3 d;
    Sub *s;
    void *t;

    s = o->sub54;
    func_01A2A0((float *)&p);
    t = s->p3C;
    if (t != 0) {
        if (func_084708(t, (float *)&p) == 0) {
            return 0;
        }
        s->p3C = 0;
    }
    if (func_084708(s->p38, (float *)&p) == 0) {
        return 0;
    }
    d.x = p.x - o->pos.x;
    d.z = p.z - o->pos.z;
    if (d.x * d.x + d.z * d.z <= s->radius * s->radius) {
        return 1;
    }
    return 0;
}
