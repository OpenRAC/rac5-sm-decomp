/* LEVEL_22:0x109098 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_00177518[];
extern int func_0F4300(int key, char *name);
extern int func_0F44B0(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_108E58(Entry *e);
extern int func_109260(Owner *o, Entry *e);
extern void func_0F4608(int h);

int func_109098(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_0F4300(key, D_00177518);
    if (h != 0) {
        func_0F44B0(entry, val, 1, h);
        if (func_108E58(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_109260(owner, entry);
                owner->key = key;
            }
        }
        func_0F4608(h);
    }
    return ret;
}
