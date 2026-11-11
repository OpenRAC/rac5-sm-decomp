/* LEVEL_05:0x12D540 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_00208F98[];
extern int func_115E60(int key, char *name);
extern int func_116010(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_12D300(Entry *e);
extern int func_12D708(Owner *o, Entry *e);
extern void func_116168(int h);

int func_12D540(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_115E60(key, D_00208F98);
    if (h != 0) {
        func_116010(entry, val, 1, h);
        if (func_12D300(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_12D708(owner, entry);
                owner->key = key;
            }
        }
        func_116168(h);
    }
    return ret;
}
