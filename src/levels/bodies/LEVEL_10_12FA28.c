/* LEVEL_10:0x12FA28 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_00223028[];
extern int func_118058(int key, char *name);
extern int func_118208(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_12F7E8(Entry *e);
extern int func_12FBF0(Owner *o, Entry *e);
extern void func_118360(int h);

int func_12FA28(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_118058(key, D_00223028);
    if (h != 0) {
        func_118208(entry, val, 1, h);
        if (func_12F7E8(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_12FBF0(owner, entry);
                owner->key = key;
            }
        }
        func_118360(h);
    }
    return ret;
}
