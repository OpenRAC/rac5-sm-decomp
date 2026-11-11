/* LEVEL_04:0x13E048 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_00233A18[];
extern int func_1253A8(int key, char *name);
extern int func_125558(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_13DE08(Entry *e);
extern int func_13E210(Owner *o, Entry *e);
extern void func_1256B0(int h);

int func_13E048(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_1253A8(key, D_00233A18);
    if (h != 0) {
        func_125558(entry, val, 1, h);
        if (func_13DE08(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_13E210(owner, entry);
                owner->key = key;
            }
        }
        func_1256B0(h);
    }
    return ret;
}
