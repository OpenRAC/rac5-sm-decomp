/* LEVEL_01:0x059798 -- when mode is 3, returns whether the offset from a stored point to a vector is negative along a second vector. */
typedef struct { float x, y, z; } VEC3;
typedef struct { char pad_00[0x04]; int base; char pad_08[0x0C]; unsigned short count; } Ent;
typedef struct { char pad_00[0x30]; VEC3 a; char pad_3C[0x200 - 0x3C]; VEC3 b; } Obj;
static __inline__ void sub3(VEC3 *r, VEC3 *p, VEC3 *q) { r->x = p->x - q->x; r->y = p->y - q->y; r->z = p->z - q->z; }
static __inline__ float dot3(VEC3 *p, VEC3 *q) { return p->x * q->x + p->y * q->y + p->z * q->z; }
int func_059798(Obj *o, Ent *e, int mode)
{
    VEC3 d;
    VEC3 *p;
    if (mode != 3) return 0;
    p = (VEC3 *)((e->count << 4) + e->base);
    p = (VEC3 *)((char *)p - 0x10);
    sub3(&d, p, &o->a);
    return dot3(&d, &o->b) < 0.0f;
}
