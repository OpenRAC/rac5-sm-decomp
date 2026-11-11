/* LEVEL_24:0x1276C8 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_001EAE18[];
extern int func_1100A8(int key, char *name);
extern int func_110258(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_127488(Entry *e);
extern int func_127890(Owner *o, Entry *e);
extern void func_1103B0(int h);

int func_1276C8(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_1100A8(key, D_001EAE18);
    if (h != 0) {
        func_110258(entry, val, 1, h);
        if (func_127488(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_127890(owner, entry);
                owner->key = key;
            }
        }
        func_1103B0(h);
    }
    return ret;
}
