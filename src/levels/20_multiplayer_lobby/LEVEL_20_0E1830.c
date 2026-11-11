/* LEVEL_20:0x0E1830 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_0012FDD8[];
extern int func_0D3390(int key, char *name);
extern int func_0D3540(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_0E15F0(Entry *e);
extern int func_0E19F8(Owner *o, Entry *e);
extern void func_0D3698(int h);

int func_0E1830(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_0D3390(key, D_0012FDD8);
    if (h != 0) {
        func_0D3540(entry, val, 1, h);
        if (func_0E15F0(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_0E19F8(owner, entry);
                owner->key = key;
            }
        }
        func_0D3698(h);
    }
    return ret;
}
