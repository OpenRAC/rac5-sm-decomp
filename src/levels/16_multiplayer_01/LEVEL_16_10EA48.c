/* LEVEL_16:0x10EA48 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_001CED68[];
extern int func_0FA530(int key, char *name);
extern int func_0FA6E0(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_10E808(Entry *e);
extern int func_10EC10(Owner *o, Entry *e);
extern void func_0FA838(int h);

int func_10EA48(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_0FA530(key, D_001CED68);
    if (h != 0) {
        func_0FA6E0(entry, val, 1, h);
        if (func_10E808(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_10EC10(owner, entry);
                owner->key = key;
            }
        }
        func_0FA838(h);
    }
    return ret;
}
