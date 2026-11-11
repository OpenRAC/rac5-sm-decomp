/* LEVEL_06:0x128298 -- placement copy of FRONTEND_01F390.c: looks up a handle, validates an entry and updates it. */
typedef struct Entry {
    int pad0;
    unsigned int flags;
    unsigned int size;
} Entry;

typedef struct Owner {
    int pad0[2];
    int key;
} Owner;

extern char D_00208F18[];
extern int func_110410(int key, char *name);
extern int func_1105C0(void *dst, unsigned int n, int m, unsigned int slot);
extern int func_128058(Entry *e);
extern int func_128460(Owner *o, Entry *e);
extern void func_110718(int h);

int func_128298(Owner *owner, Entry *entry, unsigned int val, int key)
{
    int h;
    int ret;

    ret = 0;
    h = func_110410(key, D_00208F18);
    if (h != 0) {
        func_1105C0(entry, val, 1, h);
        if (func_128058(entry) != 0) {
            if (!(val < entry->size)) {
                entry->flags |= 4;
                ret = func_128460(owner, entry);
                owner->key = key;
            }
        }
        func_110718(h);
    }
    return ret;
}
