/* LEVEL_23:0x139EE8 -- placement copy of LEVEL_22_112B30.c: four passes over 60-byte records, calling a helper for each set flag byte and clearing it. */
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

extern void func_067BA8(struct E112B30 *e);

void func_139EE8(struct P112B30 *p)
{
    struct C112B30 *c;
    int i;

    c = p->f58;
    for (i = 0; i < 4; i++) {
        if (c->flag[i] != 0) {
            func_067BA8(&c->ent[i]);
            c->flag[i] = 0;
        }
    }
}
