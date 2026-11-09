/* LEVEL_04.REL:0x170F78: reviewed 140-byte candidate, held for ABI review.
 * Returns zero for two flag values or when the squared distance between two
 * positions exceeds four, otherwise calls a helper and returns one.
 * pinned C with gnu-ee-trial links 140/140 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It defines the function returning int with (pointer, pointer), but the
 * accepted caller LEVEL_04_1710C0.c declares it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Vec3 {
    float x;
    float y;
    float z;
};

struct Node3 {
    unsigned char pad00[0x30];
    struct Vec3 pos;
    unsigned char pad3C[0x45 - 0x3C];
    unsigned char b45;
};

void func_170BB0(struct Node3 *a0, struct Node3 *a1);

int func_170F78(struct Node3 *a0, struct Node3 *a1)
{
    struct Vec3 *p;
    struct Vec3 *q;
    unsigned char b;
    float dx;
    float dy;
    float dz;
    float d2;

    b = a0->b45;
    if (b == 2 || b == 0) {
        return 0;
    }
    p = &a0->pos;
    q = &a1->pos;
    dx = a1->pos.x - a0->pos.x;
    dy = q->y - p->y;
    dz = q->z - p->z;
    d2 = dx * dx + dy * dy + dz * dz;
    if (d2 > 4.0f) {
        return 0;
    }
    func_170BB0(a0, a1);
    return 1;
}
