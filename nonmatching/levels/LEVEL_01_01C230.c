/* USA LEVEL_01.REL:0x01C230, 440-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 6 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } Vec3;

typedef struct {
    Vec3 lo;
    float padC;
    Vec3 hi;
    float pad1C;
    float spare[4];
} Query;

typedef struct {
    unsigned char kind;
    char pad01[3];
    int w04;
} Prof;

typedef struct {
    char pad00[0xC];
    Prof *profs[1];
} Slot;

typedef struct {
    char pad00[4];
    Slot *slots;
    char pad08[0x37];
    unsigned char layer;
} Info;

typedef struct {
    char pad00[0x40];
    Info *info;
    unsigned char slot;
} Ent;

typedef struct {
    int w00;
    Ent *ent;
} Ref;

typedef struct {
    char pad00[0x68];
} Cell;

extern Cell D_0022F6F8[2];
extern Ref **D_0022F7C8;
extern int func_095AA0(Ref **list, Cell *cell, Vec3 *lo, Vec3 *hi, int a, int b);
extern int func_01F3B0(float r, Vec3 *pos, int a, int b, Ent *e);
extern int func_113618(float r, Vec3 *pos, int a, Ent *e);

Ent *func_01C230(float r, Vec3 *pos, int a, int b, int mask, int index)
{
    Query q;
    Ref **list;
    Ref **base;
    Ref **end;
    Ref **p;
    Cell *cell;
    Ent *e;
    Info *info;
    Slot *s;
    Prof *prof;
    int hit;

    q.lo.x = pos->x - r;
    q.lo.y = pos->y - r;
    q.lo.z = pos->z - r;
    q.hi.x = pos->x + r;
    q.hi.y = pos->y + r;
    q.hi.z = pos->z + r;
    list = D_0022F7C8;
    cell = D_0022F6F8;
    do {
        list += func_095AA0(list, cell, &q.lo, &q.hi, a, b);
        cell++;
    } while (cell < D_0022F6F8 + 2);
    base = D_0022F7C8;
    end = base + (list - base);
    for (p = base; p != end; p++) {
        e = (*p)->ent;
        info = e->info;
        if (((mask >> info->layer) ^ 1) & 1) {
            continue;
        }
        s = (Slot *)((char *)info->slots + e->slot * 0x34);
        prof = s->profs[index];
        if (prof != 0) {
            hit = func_01F3B0(r, pos, prof->w04, prof->kind, e);
        } else {
            hit = func_113618(r, pos, *(int *)((char *)s + 0x14), e);
        }
        if (hit != 0) {
            return e;
        }
    }
    return 0;
}
