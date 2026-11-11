/* LEVEL_09:0x12AB60 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_00203C98[];
extern int func_113230(int key, char *name);
extern int func_1133E0(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_12A920(Entry *e);
extern int func_12AD28(Owner *o, Entry *e);
extern void func_113538(int h);

int func_12AB60(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_113230(key, D_00203C98);
    if (h != 0) {
        func_1133E0(entry, val, 1, h);
        if (func_12A920(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_12AD28(owner, entry);
                owner->key = key;
            }
        }
        func_113538(h);
    }
    return ret;
}
