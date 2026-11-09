/* LEVEL_01.REL:0x1D0770: reviewed 228-byte candidate, held for ABI review.
 * Resolves a position against the world and updates the object position.
 * pinned C with gnu-ee-trial links 228/228 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * It declares func_110D08 returning pointer with no arguments, but the
 * accepted LEVEL_01_110D08.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { float x, y, z, w; } Vec;
typedef struct { char pad[8]; int f8; char pad2[0x4C - 12]; } Ent;
typedef struct { char pad[0xC]; Ent *tab; } World;
typedef struct { char pad[0x30]; float x, y, z; char pad2[0x45 - 0x3C]; unsigned char hit; } Obj;
extern int func_1123C8(Vec *a, Vec *b);
extern World *func_110D08(void);
extern int func_1D02E0(Obj *o, int p, float *q, Vec *b, Vec *a, int *e);

void func_1D0770(Obj *obj, int p, float *q)
{
    Vec a;
    Vec b;
    Vec *pos;
    int idx;

    pos = (Vec *)&obj->x;
    a.x = obj->x;
    a.y = pos->y;
    a.z = pos->z;
    a.w = *q;
    idx = func_1123C8(&a, &b);
    if (idx >= 0) {
        if (func_1D02E0(obj, p, q, &b, &a, &func_110D08()->tab[idx].f8)) {
            obj->hit = 1;
        }
    }
    pos = (Vec *)&obj->x;
    obj->x = a.x;
    pos->y = a.y;
    pos->z = a.z;
}
