/* LEVEL_16.REL:0x15D590: reviewed 84-byte candidate.
 * Clears the tag of the first table entry that matches a key.
 * pinned C with gnu-ee-trial links 84/84 bytes; first differs at +28 (3
 * words).
 * The loop entry schedules the duplicate count test and the index
 * initialisation differently in the first branch delay slot.
 * Retry: Recover the loop header and initialisation order.
 * No matching credit.
 */
struct Ent16 {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
};

struct Tab16 {
    struct Ent16 ents[64];
    unsigned int count;
};

struct Root16 {
    char pad0[0x58];
    struct Tab16 *p58;
};

extern struct Root16 *D_001BDDE0;

void func_15D590(int key)
{
    struct Tab16 *t;
    struct Ent16 *e;
    unsigned int i;

    if (D_001BDDE0 == 0) {
        return;
    }
    t = D_001BDDE0->p58;
    if (t->count == 0) {
        return;
    }
    for (i = 0, e = (struct Ent16 *)t; i < t->count; i++, e++) {
        if (e->f4 == key) {
            e->f4 = 0;
            return;
        }
    }
}
