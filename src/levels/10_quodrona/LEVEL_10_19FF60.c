/* LEVEL_10:0x19FF60 -- finds the table entry tagged 0x4F2901B6, forwards it to a helper with the first argument, and runs a second helper with the second argument on a successful result; returns that result. */
typedef struct Entry {
    unsigned char pad_00[0x24];
    unsigned int key_24;
    unsigned char pad_28[0x44 - 0x28];
} Entry;

typedef struct Obj {
    unsigned char pad_00[0x34];
    Entry *entries_34;
    unsigned int count_38;
} Obj;

extern Obj *D_0020F9F0;
extern int func_07CB88(void *p, unsigned int key, int z, int w);
extern void func_1A06B0(int r, int a);

static inline Entry *find_entry(Obj *o, unsigned int key)
{
    Entry *cur;
    unsigned int i;

    for (i = 0; i < o->count_38; i++) {
        cur = &o->entries_34[i];
        if (cur->key_24 == key)
            return cur;
    }
    return 0;
}

int func_19FF60(int a, int b)
{
    Entry *found;
    unsigned int key;
    int r;

    key = 0x4F2901B6;
    found = find_entry(D_0020F9F0, key);
    if (found == 0)
        r = 0;
    else
        r = func_07CB88(found, key, a, 0xFF);
    if (r != 0)
        func_1A06B0(r, b);
    return r;
}
