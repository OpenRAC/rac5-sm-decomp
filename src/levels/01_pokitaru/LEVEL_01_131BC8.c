/* LEVEL_01:0x131BC8 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_0021A098[];
extern int func_119E40(int key, char *name);
extern int func_119FF0(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_131988(Entry *e);
extern int func_131D90(Owner *o, Entry *e);
extern void func_11A148(int h);

int func_131BC8(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_119E40(key, D_0021A098);
    if (h != 0) {
        func_119FF0(entry, val, 1, h);
        if (func_131988(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_131D90(owner, entry);
                owner->key = key;
            }
        }
        func_11A148(h);
    }
    return ret;
}
