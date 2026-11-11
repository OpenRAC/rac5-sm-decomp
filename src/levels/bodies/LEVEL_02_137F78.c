/* LEVEL_02:0x137F78 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_0022F018[];
extern int func_120188(int key, char *name);
extern int func_120338(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_137D38(Entry *e);
extern int func_138140(Owner *o, Entry *e);
extern void func_120490(int h);

int func_137F78(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_120188(key, D_0022F018);
    if (h != 0) {
        func_120338(entry, val, 1, h);
        if (func_137D38(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_138140(owner, entry);
                owner->key = key;
            }
        }
        func_120490(h);
    }
    return ret;
}
