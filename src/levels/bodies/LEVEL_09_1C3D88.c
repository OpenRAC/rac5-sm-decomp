/* LEVEL_09:0x1C3D88 -- placement copy of LEVEL_01_1DB620.c: finds an entry by key in a global table, then calls a helper with it (or NULL) and the two pass-through arguments. */
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

extern struct Mgr8 *D_001F0890;
void func_1C3C48(struct Ent8 *e, int p1, int p2);

void func_1C3D88(int key, int p1, int p2)
{
    struct Mgr8 *m;
    struct Ent8 *cur;
    unsigned int i;

    m = D_001F0890;
    for (i = 0; i < m->f38; i++) {
        if (m->f34[i].f24 == key) {
            cur = &m->f34[i];
            goto call;
        }
    }
    cur = 0;
call:
    func_1C3C48(cur, p1, p2);
}
