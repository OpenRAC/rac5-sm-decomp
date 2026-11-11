/* LEVEL_07:0x134BC8 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_0022ED98[];
extern int func_11CE90(int key, char *name);
extern int func_11D040(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_134988(Entry *e);
extern int func_134D90(Owner *o, Entry *e);
extern void func_11D198(int h);

int func_134BC8(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_11CE90(key, D_0022ED98);
    if (h != 0) {
        func_11D040(entry, val, 1, h);
        if (func_134988(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_134D90(owner, entry);
                owner->key = key;
            }
        }
        func_11D198(h);
    }
    return ret;
}
