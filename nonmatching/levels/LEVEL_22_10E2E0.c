/* USA LEVEL_22.REL:0x10E2E0, 560-byte candidate (22 November 2026).
 * Measured gnu-ee-trial --flag=-fno-gcse --as: 11 differing words; first
 * difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x20];
    int id;
    char pad24[0x10];
} Ent;

typedef struct {
    char pad00[4];
    Ent *ents;
} Tbl;

typedef struct {
    char pad00[0x18];
    float v[2];
} Rec;

typedef struct {
    char pad00[4];
    float f04;
    char pad08[8];
    float f10;
    char pad14[0x50];
    int i64;
    char pad68;
    unsigned char b69;
    char pad6A;
    unsigned char b6B;
} State;

typedef struct {
    char pad00[0x14];
    float a;
    float b;
    float c;
    float d;
} Fx;

typedef struct {
    char pad00[0x40];
    Tbl *tbl;
    unsigned char idx;
    unsigned char mode;
    char pad46[0xE];
    Rec *rec;
    State *st;
} Obj;

extern Fx *D_002E7240;
extern Fx *D_002E7244;

extern void func_0733A8(Obj *o, Fx *fx, int p0, int p1, int p2, int p3, float a, float b, float c, float d, int p4, int p5);

void func_10E2E0(Obj *o, unsigned char old, unsigned char new)
{
    Rec *rec;
    State *st;
    Fx *fx;

    if (old == new) {
        return;
    }
    rec = o->rec;
    st = o->st;
    if (old == 1) {
        st->b6B = (st->b6B == 0);
    }
    switch (new) {
    case 1:
    {
        float *v;
        int off;
        int idx;
        int up;
        int lt;

        if (st->b69 == 0) {
            goto done;
        }
        if (st->b6B != 0) {
            up = st->f04 < st->f10;
        } else {
            up = st->f04 > st->f10;
        }
        v = rec->v;
        idx = st->b6B;
        off = st->b6B != 0 ? 0 : 4;
        lt = *(float *)((char *)v + idx * 4) < *(float *)((char *)v + off);
        if (o->tbl->ents[o->idx].id != 0x7808F395 || !up || !lt) {
            goto done;
        }
        fx = D_002E7240;
        break;
    }
    case 2:
    {
        float *v;
        int off;
        int idx;
        int up;
        int lt;

        if (st->b6B != 0) {
            up = st->f04 < st->f10;
        } else {
            up = st->f04 > st->f10;
        }
        v = rec->v;
        idx = st->b6B;
        off = st->b6B != 0 ? 0 : 4;
        lt = *(float *)((char *)v + idx * 4) < *(float *)((char *)v + off);
        if (o->tbl->ents[o->idx].id != 0x7808F395 || up || lt) {
            goto done;
        }
        fx = D_002E7244;
        break;
    }
    case 0:
    default:
        o->mode = new;
        return;
    }
    if (fx != 0) {
        func_0733A8(o, fx, 0, 0, 0, 0, fx->a, fx->b, fx->c, fx->d, 0, 1);
    }
done:
    if (old != 0) {
        st->i64 = 0;
    }
    o->mode = new;
}
