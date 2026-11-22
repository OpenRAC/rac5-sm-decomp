/* USA LEVEL_04.REL:0x1299D0, 276-byte candidate (21 November 2026).
 * Measured pinned: 21 differing words; first difference at 0x40.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float z;
} Vec2;

typedef struct {
    float axisX0;
    char pad4[4];
    float axisX1;
    char padC[0x14];
    float axisZ0;
    char pad24[4];
    float axisZ1;
    float pad2C;
    float x;
    char pad34[4];
    float z;
} Obj;

extern void *retail_memset(void *p, int c, unsigned int n) __asm__("memset");

int func_1299D0(Obj *o, float *half, float px, float pz, float radius)
{
    Vec2 v;
    Vec2 d;
    float u;
    float w;
    float a;
    float b;

    retail_memset(&d, 0, 8);
    d.x = px - o->x;
    radius = radius * radius;
    d.z = pz - o->z;
    v = d;
    u = v.x * o->axisX0 + v.z * o->axisX1;
    w = v.x * o->axisZ0 + v.z * o->axisZ1;
    a = __builtin_fabsf(u) - half[0];
    b = __builtin_fabsf(w) - half[1];
    a = (a + __builtin_fabsf(a)) * 0.5f;
    b = (b + __builtin_fabsf(b)) * 0.5f;
    return a * a + b * b < radius;
}
