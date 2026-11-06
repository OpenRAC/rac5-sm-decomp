/* LEVEL_01.REL:0x054E98: 20 reviewed USA placements.
 * Ghidra body: 160 bytes; pinned C links 160 bytes and first differs at +2.
 * The vector update has the right size but different initial FPR and pointer allocation. Reopen with the input and output lifetime order.
 * This source has no matching credit.
 */
typedef struct { float x, y, z; } Vec3;
typedef struct {
    char pad0[0x30];
    Vec3 pos;
    float w;
    char pad1[0x1B4 - 0x40];
    Vec3 vel;
    int  i1C0;
    char pad2[0xC5C - 0x1C4];
    Vec3 acc;
} Ctx;
void func_054E98(Ctx *c, Vec3 *v, float s)
{
    Vec3 *pos = &c->pos;
    Vec3 *vel = &c->vel;
    Vec3 *acc = &c->acc;
    float sx = v->x * s;

    vel->x = sx;
    pos->x = pos->x + sx;
    vel->y = v->y * s;
    vel->z = v->z * s;
    c->i1C0 = 0;
    pos->y = pos->y + vel->y;
    pos->z = pos->z + vel->z;
    pos->x = pos->x + acc->x;
    pos->y = pos->y + acc->y;
    pos->z = pos->z + acc->z;

    c->w = 1.0f;
}
