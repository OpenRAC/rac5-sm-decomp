/* USA LEVEL_16.REL:0x12B570, 220-byte candidate (21 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x48.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Owner {
    char pad_00[0x40];
    char pad_40;
};
struct Node {
    int pad_00;
    float pos[3];
    char pad_10[4];
    float f_14;
    float f_18;
};
struct Inner {
    char pad_00[0x40];
    int count_40;
};
struct Type {
    char pad_00[0x24];
    int id_24;
};
struct Obj {
    char pad_00[0x40];
    struct Type *type_40;
    char pad_44;
    char state_45;
    char pad_46[0x12];
    struct Node *node_58;
};
struct Flags {
    char pad_00[0xD];
    unsigned char b_0D;
};
extern int D_001D04A0;
extern struct Flags D_001DFC30;
extern struct Inner *func_0220C8(unsigned int, int);

void func_12B570(struct Obj *o, float *v)
{
    struct Node *n;
    struct Inner *in;
    struct Inner *r;
    float *d;
    int mode;

    if (o->type_40->id_24 == 0x802FD8C8) {
        n = o->node_58;
        in = *(struct Inner **)n;
        r = func_0220C8(6, *(int *)((char *)in + 0xF8));
        d = n->pos;
        d[0] = v[0];
        d[1] = v[1];
        d[2] = v[2];
        r->count_40--;
        n->f_14 = 3.000119686126709f;
        mode = D_001D04A0;
        n->f_18 = 0.35000696778297424f;
        o->state_45 = 5;
        if (mode == 9) {
            if ((unsigned char)(D_001DFC30.b_0D - 1) < 0x3F)
                D_001DFC30.b_0D = 0x80;
        }
    }
}
