/* LEVEL_08:0x1F49E8 -- stores the result of func_13B5A0 for a fixed key (0x534C93F3), then looks up the table entry with key 0x131380AC and stores its word at +0xC in a global. */
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
extern int D_00252748[1];
extern int func_13B5A0(unsigned int value);

void func_1F49E8(void)
{
    struct Tbl *m;
    struct Ent *cur;
    unsigned int i;
    unsigned int key;

    D_00252748[0] = func_13B5A0(0x534C93F3u);
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
