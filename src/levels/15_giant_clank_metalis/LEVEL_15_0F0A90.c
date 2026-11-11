/* LEVEL_15:0x0F0A90 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_0016E818[];
extern int func_0DE1A0(int key, char *name);
extern int func_0DE350(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_0F0850(Entry *e);
extern int func_0F0C58(Owner *o, Entry *e);
extern void func_0DE4A8(int h);

int func_0F0A90(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_0DE1A0(key, D_0016E818);
    if (h != 0) {
        func_0DE350(entry, val, 1, h);
        if (func_0F0850(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_0F0C58(owner, entry);
                owner->key = key;
            }
        }
        func_0DE4A8(h);
    }
    return ret;
}
