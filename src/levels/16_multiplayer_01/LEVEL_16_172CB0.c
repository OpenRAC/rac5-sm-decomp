/* LEVEL_16:0x172CB0 -- charges a per-slot meter on the owner's state when the target passes the checks, finishing the slot once it fills, and otherwise clears or tops up the slot according to the target's flags. */

struct Pair172CB0 {
    unsigned int lo;
    unsigned int hi;
};
struct State172CB0 {
    float f_00[5];
    unsigned int w_14;
};
struct Link172CB0 {
    void *p_00;
};
struct Own172CB0 {
    char pad_00[0x54];
    struct Link172CB0 *p_54;
    struct State172CB0 *p_58;
};
struct Tgt172CB0 {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[0xB8];
    void *p_F4;
};

int func_037298(struct Tgt172CB0 *t);
int func_17D7E8(void *a, float *p);
void func_172E18(struct Own172CB0 *o, struct Tgt172CB0 *t, int idx);
struct Pair172CB0 func_037C00(struct Tgt172CB0 *t);

int func_172CB0(struct Own172CB0 *o, struct Tgt172CB0 *t, int idx, float amt)
{
    struct State172CB0 *st;
    void *key;
    float *pos;
    unsigned int bit;

    pos = t->pos_30;
    bit = 1 << idx;
    key = o->p_54->p_00;
    st = o->p_58;
    if (t->p_F4 != 0 && func_037298(t) == 0x1B && (key == 0 || func_17D7E8(key, pos) == 0)) {
        st->w_14 = st->w_14 | bit;
        st->f_00[idx] = st->f_00[idx] + amt;
        if (st->f_00[idx] >= 1.0f) {
            func_172E18(o, t, idx);
            return 1;
        }
        return 0;
    }
    if (func_037C00(t).lo & 2) {
        st->f_00[idx] = 0;
        st->w_14 = st->w_14 & ~bit;
    } else if (st->w_14 & bit) {
        st->f_00[idx] = st->f_00[idx] + amt;
    }
    return 0;
}
