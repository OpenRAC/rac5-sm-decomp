/* USA LEVEL_15.REL:0x13BB20, 172-byte candidate (14 November 2026).
 * Measured pinned: 13 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Obj {
    char pad00[0x24];
    Vec3 pos;
} Obj;

typedef struct Src {
    char pad00[0x10];
    Vec3 dir;
    char pad1C[4];
    Vec3 vel;
} Src;

extern void func_0E8910(Obj *o, Src *s);
extern void func_0ECE10(int flag, Obj *o, float m0, float m1, float m2);

void func_13BB20(Obj *o, Src *s)
{
    Vec3 delta;
    Vec3 *vel = &s->vel;
    Vec3 *dir;

    delta.x = vel->x * 0.00124359130859375f;
    delta.y = vel->y * 0.00124359130859375f;
    delta.z = vel->z * 0.00124359130859375f;
    func_0E8910(o, s);
    dir = &s->dir;
    func_0ECE10(0, o, dir->x, dir->y, dir->z);
    o->pos.x = o->pos.x + delta.x;
    o->pos.y = o->pos.y + delta.y;
    o->pos.z = o->pos.z + delta.z;
}
