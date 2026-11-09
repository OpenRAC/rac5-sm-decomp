/* LEVEL_01.REL:0x14F0C8: reviewed 332-byte candidate, held for ABI review.
 * When the owner's linked record has the expected tag, consumes one use, sets
 * the hit effect and returns to state 8.
 * pinned C with gnu-ee-trial links 332/332 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_024628 returning pointer with (int, int), but the accepted
 * LEVEL_01_024628.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Link {
    char pad[0x24];
    unsigned int tag;
};

struct Ent {
    char pad0[0xF8];
    int id;
    char pad1[0x174];
    float heat;
};

struct Uses {
    char pad[0x40];
    int count;
};

struct Fx {
    struct Ent *ent;
    float a;
    int mode;
    float b;
};

struct Owner {
    char pad0[0x40];
    struct Link *link;
    char pad1[1];
    unsigned char state;
    char pad2[0x12];
    struct Fx *fx;
};

extern const int D_0021A7F0;
extern unsigned char D_00230F30[];
extern struct Uses *func_024628(int a, int b);
extern void func_07CD28(struct Owner *o, int a, int b, int c, float d, float e);

void func_14F0C8(struct Owner *o)
{
    struct Fx *p;
    struct Ent *g;
    struct Uses *r;

    if (o->link->tag != 0xEF38865E) {
        return;
    }
    p = o->fx;
    g = p->ent;
    r = func_024628(3, g->id);
    r->count -= 1;
    p->a = 1.5000300407409668f;
    p->b = 6.000119209289551f;
    if (g->heat > 0.009999999776482582f) {
        p->b = 0.5000099539756775f;
    }
    p->mode = 3;
    func_07CD28(o, 3, 0, 1, 0.10000000149011612f, 0.0f);
    o->state = 8;
    if (D_0021A7F0 == 7 && (unsigned int)(D_00230F30[0xD] - 1) < 0x3F) {
        D_00230F30[0xD] = 0x80;
    } else if (D_0021A7F0 == 9 && (unsigned int)(D_00230F30[0xD] - 1) < 0x3F) {
        D_00230F30[0xD] = 0x80;
    }
}
