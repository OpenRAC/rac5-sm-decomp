/* LEVEL_01:0x027898 -- registers an id in the first free of eight slots unless already present. */
struct Tbl {
    char pad[0x864];
    int slot[8];
    int aux[8];
};
struct Glob {
    struct Tbl *tbl;
};
extern struct Glob D_001F3FAC;
#define T (D_001F3FAC.tbl)
extern char D_0020CC78[];
extern int func_0245C8(int id, int v);
extern void func_0B3C38(char *msg, int code, unsigned v);

int func_027898(int id)
{
    unsigned i;
    unsigned j;
    int idx;

    if (!func_0245C8(id, -1)) {
        for (i = 0; i < 8; i++) {
            if (T->slot[i] == id)
                return 0;
        }
        idx = -1;
        for (j = 0; j < 8; j++) {
            if (T->slot[j] == 0) {
                idx = j;
                break;
            }
        }
        if (idx >= 0) {
            T->slot[idx] = id;
            T->aux[idx] = 0;
            return 1;
        }
        func_0B3C38(D_0020CC78, -0x34, 0xFFFFFFFF);
    }
    return 0;
}
