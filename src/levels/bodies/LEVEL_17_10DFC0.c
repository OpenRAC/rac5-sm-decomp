/* LEVEL_17:0x10DFC0 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_001C21E8[];
extern int func_0F9B40(int key, char *name);
extern int func_0F9CF0(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_10DD80(Entry *e);
extern int func_10E188(Owner *o, Entry *e);
extern void func_0F9E48(int h);

int func_10DFC0(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_0F9B40(key, D_001C21E8);
    if (h != 0) {
        func_0F9CF0(entry, val, 1, h);
        if (func_10DD80(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_10E188(owner, entry);
                owner->key = key;
            }
        }
        func_0F9E48(h);
    }
    return ret;
}
