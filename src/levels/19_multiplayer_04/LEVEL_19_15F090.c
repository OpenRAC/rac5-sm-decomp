/* LEVEL_19:0x15F090 -- placement copy of LEVEL_16_15D590.c: clears the tag of the first table entry that matches a key. */
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

extern struct Root16 *D_001BF098;

void func_15F090(int key)
{
    struct Tab16 *t;
    struct Ent16 *e;
    unsigned int i;

    if (D_001BF098 == 0) {
        return;
    }
    t = D_001BF098->p58;
    for (i = 0; i < t->count; i++) {
        e = &t->ents[i];
        if (e->f4 == key) {
            e->f4 = 0;
            return;
        }
    }
}
