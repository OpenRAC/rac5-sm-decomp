/* LEVEL_04:0x1F3010 -- placement copy of LEVEL_01_1DB620.c: finds an entry by key in a global table, then calls a helper with it (or NULL) and the two pass-through arguments. */
struct Ent8 {
    char pad0[0x24];
    int f24;
    char pad1[0x44 - 0x28];
};

struct Mgr8 {
    char pad0[0x34];
    struct Ent8 *f34;
    unsigned int f38;
};

extern struct Mgr8 *D_002201B0;
int func_1F2ED0(struct Ent8 *e, int p1, void *p2);

int func_1F3010(int key, int p1, void *p2)
{
    struct Mgr8 *m;
    struct Ent8 *cur;
    unsigned int i;

    m = D_002201B0;
    for (i = 0; i < m->f38; i++) {
        if (m->f34[i].f24 == key) {
            cur = &m->f34[i];
            goto call;
        }
    }
    cur = 0;
call:
    return func_1F2ED0(cur, p1, p2);
}
