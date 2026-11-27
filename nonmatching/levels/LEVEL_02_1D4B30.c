/* USA LEVEL_02:1D4B30, 252-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 244 bytes: 41 differing words; first difference +0x18. No matching credit.
 * Remaining issue: twin of LEVEL_02:1B6550 (same inline IsValid form, 244 vs 252 B): retail
 * index copy and copied int flag (daddu + andi 0xFF) not reproduced; draft had the CSE-folded
 * second 0xFF test (220 B)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_02:0x1D4B30 -- returns 1 when the actor's tracked target is valid and within 10 units on the ground plane. */
typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;
typedef struct Tgt {
    char pad0[0x30];
    Vec4 pos;
    char pad40[0x64 - 0x40];
    int f64;
} Tgt;
typedef struct Slot {
    Tgt *tgt;
    char pad4[12];
} Slot;
typedef struct Owner {
    char pad0[0x54];
    Slot *slots;
} Owner;
typedef struct Ctx {
    char pad0[0x2C];
    void *f2C;
    Owner *f30;
    char pad34[0x48 - 0x34];
    unsigned char f48;
} Ctx;
typedef struct Actor {
    char pad0[0x30];
    float x;
    char pad34[4];
    float z;
    char pad3C[0x54 - 0x3C];
    Ctx *f54;
} Actor;
extern int func_08B060(void *a, float *p);

static __inline__ unsigned char IsValid(Owner *o, unsigned char idx)
{
    unsigned char ok = 0;
    if (idx != 0xFF) {
        Tgt *t = o->slots[idx].tgt;
        if (t != 0) {
            if (t->f64 & 0x20)
                ok = 0;
            else
                ok = 1;
        }
    }
    return ok;
}

int func_1D4B30(Actor *a)
{
    Ctx *c;
    Owner *o;
    unsigned int idx;
    Tgt *t;
    float pos[4];
    float dx;
    float dz;

    c = a->f54;
    idx = c->f48;
    if (idx == 0xFF)
        return 0;
    o = c->f30;
    if (!IsValid(o, idx))
        return 0;
    t = o->slots[idx].tgt;
    pos[0] = t->pos.x;
    pos[1] = t->pos.y;
    pos[2] = t->pos.z;
    pos[3] = t->pos.w;
    if (func_08B060(c->f2C, pos) == 0)
        return 0;
    dx = a->x - pos[0];
    dz = a->z - pos[2];
    return dx * dx + dz * dz <= 100.0f;
}
