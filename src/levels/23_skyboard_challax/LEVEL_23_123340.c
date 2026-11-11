/* LEVEL_23:0x123340 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_001ED218[];
extern int func_10B3A8(int key, char *name);
extern int func_10B558(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_123100(Entry *e);
extern int func_123508(Owner *o, Entry *e);
extern void func_10B6B0(int h);

int func_123340(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_10B3A8(key, D_001ED218);
    if (h != 0) {
        func_10B558(entry, val, 1, h);
        if (func_123100(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_123508(owner, entry);
                owner->key = key;
            }
        }
        func_10B6B0(h);
    }
    return ret;
}
