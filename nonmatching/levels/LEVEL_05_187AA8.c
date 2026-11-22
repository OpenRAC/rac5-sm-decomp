/* USA LEVEL_05.REL:0x187AA8, 260-byte candidate (21 November 2026).
 * Measured pinned: 18 differing words; first difference at 0x50.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;
struct Ref { char pad_00[0x30]; float pos[3]; };
extern struct Ref D_00220E40;
static __inline__ void Copy3(float *d, struct Ref *r)
{
    float *s = r->pos;

    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

extern void func_07A658(void *o, float *m, void *a);
extern void func_187D88(void *o);

int func_187AA8(void *o, void *a)
{
    float m[16];
    Vec3 c;
    Vec3 q;
    float dx, dz;

    func_07A658(o, m, a);
    c.x = m[12] + m[0] * 0.5f;
    c.y = m[13] + m[1] * 0.5f;
    c.z = m[14] + m[2] * 0.5f;
    Copy3(&q.x, &D_00220E40);
    if (q.y + 0.5f < c.y) {
        return 0;
    }
    dz = q.z - c.z;
    dx = q.x - c.x;
    if (dx * dx + dz * dz < 12.25f) {
        goto hit;
    }
    dz = q.z - m[14];
    dx = q.x - m[12];
    if (dx * dx + dz * dz <= 12.25f) {
        goto hit;
    }
    return 0;
hit:
    func_187D88(o);
    return 1;
}
