/* USA LEVEL_01.REL:0x138C90, 372-byte candidate (21 November 2026).
 * Measured pinned: 30 differing words; first difference at 0x40.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int key;
    float val;
} Key;

typedef struct {
    Key keys[8];
    int n_40;
    int cur_44;
    unsigned char done_48;
    char pad_49[3];
} Track;

typedef struct {
    char pad_00[0x24];
    unsigned char count_24;
} Ctx;

typedef struct {
    char pad_00[0x58];
    Ctx *ctx_58;
} Owner;

extern Owner *D_00207104;

int func_138C90(int unused, Track *arr)
{
    Ctx *c;
    Track *e;
    Track *f;
    int i;
    int j;

    c = D_00207104->ctx_58;
    for (i = 0; i < c->count_24 - 1; i++) {
        e = &arr[i];
        if (e->n_40 == 0 || e->done_48 != 0) {
            continue;
        }
        for (j = i + 1; j < c->count_24; j++) {
            f = &arr[j];
            if (f->n_40 == 0 || f->done_48 != 0) {
                continue;
            }
            if (e->keys[e->cur_44].key != f->keys[f->cur_44].key) {
                continue;
            }
            if (e->cur_44 == e->n_40 - 1 && f->cur_44 == f->n_40 - 1) {
                continue;
            }
            if (e->keys[e->cur_44].val > f->keys[f->cur_44].val) {
                e->cur_44 = e->cur_44 + 1;
                if (e->cur_44 == e->n_40) {
                    e->done_48 = 1;
                    e->cur_44 = 0;
                }
            } else {
                f->cur_44 = f->cur_44 + 1;
                if (f->cur_44 == f->n_40) {
                    f->done_48 = 1;
                    f->cur_44 = 0;
                }
            }
            return 0;
        }
    }
    return 1;
}
