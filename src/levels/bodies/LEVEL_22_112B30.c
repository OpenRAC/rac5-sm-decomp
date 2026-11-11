/* LEVEL_22:0x112B30 -- four passes over 60-byte records, calling a helper for each set flag byte and clearing it. */
struct E112B30 {
    char pad0[0x3C];
};

struct C112B30 {
    struct E112B30 ent[4];
    char pad_f0[0x108];
    unsigned char flag[4];
};

struct P112B30 {
    char pad0[0x58];
    struct C112B30 *f58;
};

extern void func_063718(struct E112B30 *e);

void func_112B30(struct P112B30 *p)
{
    struct C112B30 *c;
    int i;

    c = p->f58;
    for (i = 0; i < 4; i++) {
        if (c->flag[i] != 0) {
            func_063718(&c->ent[i]);
            c->flag[i] = 0;
        }
    }
}
