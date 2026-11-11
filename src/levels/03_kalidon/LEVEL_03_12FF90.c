/* LEVEL_03:0x12FF90 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_00232F98[];
extern int func_117FB0(int key, char *name);
extern int func_118160(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_12FD50(Entry *e);
extern int func_130158(Owner *o, Entry *e);
extern void func_1182B8(int h);

int func_12FF90(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_117FB0(key, D_00232F98);
    if (h != 0) {
        func_118160(entry, val, 1, h);
        if (func_12FD50(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_130158(owner, entry);
                owner->key = key;
            }
        }
        func_1182B8(h);
    }
    return ret;
}
