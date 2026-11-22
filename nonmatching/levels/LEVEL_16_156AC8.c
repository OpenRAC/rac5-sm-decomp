/* USA LEVEL_16.REL:0x156AC8, 260-byte candidate (21 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x84.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Anchor {
    char pad_00[0x30];
    float pos[3];
} Anchor;

typedef struct Player {
    char pad_00[0x59C];
    Anchor *anchor_59C;
} Player;

typedef struct Rec {
    char pad_00[0x30];
    int probe_30;
    float reach_34;
} Rec;

typedef struct Block {
    char pad_00[0x50];
    Anchor *target_50;
} Block;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x54 - 0x3C];
    Rec *rec_54;
    Block *blk_58;
} Obj;

extern Player *func_112CE8(unsigned int index);
extern int func_0763F8(int probe, float *pos);

int func_156AC8(Obj *o)
{
    Rec *rec;
    Block *blk;
    Player *p;
    unsigned int i;
    float pos[3];
    float d[3];
    float r;
    Anchor *a;
    float *ap;
    float *op;

    op = o->pos;
    rec = o->rec_54;
    blk = o->blk_58;
    for (i = 0; i < 2; i++) {
        p = func_112CE8(i);
        if (p != 0 && (a = p->anchor_59C) != 0) {
            ap = a->pos;
            pos[0] = ap[0];
            pos[1] = ap[1];
            pos[2] = ap[2];
            if (func_0763F8(rec->probe_30, pos) != 0) {
                d[0] = pos[0] - o->pos[0];
                d[2] = pos[2] - op[2];
                r = rec->reach_34;
                if (d[0] * d[0] + d[2] * d[2] <= r * r) {
                    blk->target_50 = p->anchor_59C;
                    return 1;
                }
            }
        }
    }
    return 0;
}
