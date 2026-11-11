/* LEVEL_18:0x10D6F8 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_001D02E8[];
extern int func_0F8D68(int key, char *name);
extern int func_0F8F18(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_10D4B8(Entry *e);
extern int func_10D8C0(Owner *o, Entry *e);
extern void func_0F9070(int h);

int func_10D6F8(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_0F8D68(key, D_001D02E8);
    if (h != 0) {
        func_0F8F18(entry, val, 1, h);
        if (func_10D4B8(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_10D8C0(owner, entry);
                owner->key = key;
            }
        }
        func_0F9070(h);
    }
    return ret;
}
