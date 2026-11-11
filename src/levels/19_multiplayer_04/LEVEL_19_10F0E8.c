/* LEVEL_19:0x10F0E8 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_001CFF68[];
extern int func_0FA758(int key, char *name);
extern int func_0FA908(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_10EEA8(Entry *e);
extern int func_10F2B0(Owner *o, Entry *e);
extern void func_0FAA60(int h);

int func_10F0E8(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_0FA758(key, D_001CFF68);
    if (h != 0) {
        func_0FA908(entry, val, 1, h);
        if (func_10EEA8(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_10F2B0(owner, entry);
                owner->key = key;
            }
        }
        func_0FAA60(h);
    }
    return ret;
}
