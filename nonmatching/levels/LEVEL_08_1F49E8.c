/* USA LEVEL_08.REL:0x1F49E8, 124-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Ent {
    char pad00[0xC];
    int w0C;
    char pad10[0x24 - 0x10];
    unsigned int key;
    char pad28[0x44 - 0x28];
};

struct Tbl {
    char pad00[0x34];
    struct Ent *ents;
    unsigned int count;
};

extern struct Tbl *D_0024FC50;
extern int D_00252744;
extern int D_00252748;
extern int func_13B5A0(unsigned int value);

void func_1F49E8(void)
{
    struct Tbl *m;
    struct Ent *cur;
    unsigned int i;
    unsigned int key;

    D_00252748 = func_13B5A0(0x534C93F3u);
    key = 0x131380ACu;
    m = D_0024FC50;
    for (i = 0; i < m->count; i++) {
        if (m->ents[i].key == key) {
            cur = &m->ents[i];
            goto found;
        }
    }
    cur = 0;
found:
    D_00252744 = cur->w0C;
}
