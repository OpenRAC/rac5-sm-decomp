/* USA LEVEL_03.REL:0x1789C0, 428-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 9 differing words; first difference at 0x3C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x54];
    int id_54;
    Vec3 *seg_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0x18];
} Ent;

typedef struct {
    char pad_00[0xC];
    Ent *ents_0C;
    char pad_10[0x14];
    unsigned int tag_24;
    char pad_28[8];
    int count_30;
    char pad_34[0x10];
} Rec;

typedef struct {
    char pad_00[0x34];
    Rec *recs_34;
    unsigned int cnt_38;
} Hdr;

extern Hdr *D_0021F410;

extern int func_119090(Vec3 *pos, Vec3 *a, Vec3 *b);

int func_1789C0(Vec3 *outA, Vec3 *outB, Vec3 *pos)
{
    float best;
    float d;
    int found;
    unsigned int i;
    unsigned int tag;
    Rec *r;
    Ent *e;
    Ent *end;
    Vec3 *seg;

    tag = 0x4D4E4415;
    best = 1e30f;
    found = 0;
    i = 0;
    r = D_0021F410->recs_34;
    for (; i < D_0021F410->cnt_38; i++) {
        if (r->tag_24 == tag) {
            goto found;
        }
        r++;
    }
    r = 0;
found:
    e = r->ents_0C;
    end = e + r->count_30;
    for (; e != end; e++) {
        if (e->flags_64 & 1) {
            seg = e->seg_58;
            if (func_119090(pos, seg, seg + 1)) {
                d = (seg->x - pos->x) * (seg->x - pos->x) + (seg->y - pos->y) * (seg->y - pos->y) + (seg->z - pos->z) * (seg->z - pos->z);
                if (d < best) {
                    found = e->id_54;
                    *outA = seg[0];
                    *outB = seg[1];
                    best = d;
                }
            }
        }
    }
    if (found == 0) {
        outA->x = 0;
        outA->y = 0;
        outA->z = 0;
        outB->x = 2000.0f;
        outB->y = 2000.0f;
        outB->z = 2000.0f;
    }
    return found;
}
