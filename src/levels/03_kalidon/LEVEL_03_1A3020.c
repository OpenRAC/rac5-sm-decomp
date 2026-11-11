/* LEVEL_03:0x1A3020 -- after func_075788, searches the table's entries for the key 0x804865E2 and stores the matching entry (or NULL) in a global. */
struct Ent {
    char pad00[0x24];
    unsigned int key;
    char pad28[0x44 - 0x28];
};

struct Tbl {
    char pad00[0x34];
    struct Ent *ents;
    unsigned int count;
};

extern struct Tbl *D_0021F410;
extern struct Ent *D_003B2028;
extern void func_075788(void);

void func_1A3020(void)
{
    struct Tbl *m;
    struct Ent *cur;
    unsigned int i;
    unsigned int key;

    func_075788();
    key = 0x804865E2u;
    m = D_0021F410;
    for (i = 0; i < m->count; i++) {
        if (m->ents[i].key == key) {
            cur = &m->ents[i];
            goto done;
        }
    }
    cur = 0;
done:
    D_003B2028 = cur;
}
