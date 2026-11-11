/* LEVEL_08:0x027EC0 -- placement copy of LEVEL_01_027898.c: registers an id in the first free of eight slots unless already present. */
struct Tbl {
    char pad[0x864];
    int slot[8];
    int aux[8];
};
struct Glob {
    struct Tbl *tbl;
};
extern struct Glob D_0023CB2C;
#define T (D_0023CB2C.tbl)
extern char D_002568F8[];
extern int func_024E48(int id, int v);
extern void func_0BEA10(char *msg, int code, unsigned v);

int func_027EC0(int id)
{
    unsigned i;
    unsigned j;
    int idx;

    if (!func_024E48(id, -1)) {
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
        func_0BEA10(D_002568F8, -0x34, 0xFFFFFFFF);
    }
    return 0;
}
