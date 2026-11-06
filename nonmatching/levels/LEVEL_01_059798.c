/* LEVEL_01.REL:0x059798: 20 reviewed USA placements.
 * Ghidra body: 168 bytes; pinned C links 168 bytes and first differs at +40.
 * The vector dot product differs in field-load scheduling after the mode check. Reopen with vector layout and value lifetimes.
 * This source has no matching credit.
 */
typedef struct { float x, y, z; } VEC3;

typedef struct {
    char pad_00[0x04];
    int base;
    char pad_08[0x0C];
    unsigned short count;
} Ent;

typedef struct {
    char pad_00[0x30];
    VEC3 a;
    char pad_3C[0x200 - 0x3C];
    VEC3 b;
} Obj;

int func_059798(Obj *o, Ent *e, int mode)
{
    VEC3 d;
    VEC3 *p;
    VEC3 *va;
    VEC3 *vb;
    float s;
    int r;

    if (mode != 3)
        return 0;
    p = (VEC3 *)(e->base + (e->count << 4) - 0x10);
    va = &o->a;
    vb = &o->b;
    d.y = p->y - va->y;
    d.x = p->x - va->x;
    d.z = p->z - va->z;
    s = d.x * vb->x + d.y * vb->y + d.z * vb->z;
    r = 1;
    if (s < 0.0f) {
    } else {
        r = 0;
    }
    return r;
}
