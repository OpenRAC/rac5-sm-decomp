/* LEVEL_08:0x143100 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_00263D18[];
extern int func_12A5E0(int key, char *name);
extern int func_12A790(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_142EC0(Entry *e);
extern int func_1432C8(Owner *o, Entry *e);
extern void func_12A8E8(int h);

int func_143100(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_12A5E0(key, D_00263D18);
    if (h != 0) {
        func_12A790(entry, val, 1, h);
        if (func_142EC0(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_1432C8(owner, entry);
                owner->key = key;
            }
        }
        func_12A8E8(h);
    }
    return ret;
}
