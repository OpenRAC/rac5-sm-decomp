/* LEVEL_01:0x1DB620 -- finds an entry by key in a global table, then calls a helper with it (or NULL) and the two pass-through arguments. */
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

extern struct Mgr8 *D_00206D90;
void func_1DB4E0(struct Ent8 *e, int p1, int p2);

void func_1DB620(int key, int p1, int p2)
{
    struct Mgr8 *m;
    struct Ent8 *cur;
    unsigned int i;

    m = D_00206D90;
    for (i = 0; i < m->f38; i++) {
        if (m->f34[i].f24 == key) {
            cur = &m->f34[i];
            goto call;
        }
    }
    cur = 0;
call:
    func_1DB4E0(cur, p1, p2);
}
