/* LEVEL_09:0x0268A0 -- placement copy of LEVEL_01_027898.c: registers an id in the first free of eight slots unless already present. */
struct Tbl {
    char pad[0x864];
    int slot[8];
    int aux[8];
};
struct Glob {
    struct Tbl *tbl;
};
extern struct Glob D_001DDDAC;
#define T (D_001DDDAC.tbl)
extern char D_001F6878[];
extern int func_0238C0(int id, int v);
extern void func_0B0EE8(char *msg, int code, unsigned v);

int func_0268A0(int id)
{
    unsigned i;
    unsigned j;
    int idx;

    if (!func_0238C0(id, -1)) {
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
        func_0B0EE8(D_001F6878, -0x34, 0xFFFFFFFF);
    }
    return 0;
}
