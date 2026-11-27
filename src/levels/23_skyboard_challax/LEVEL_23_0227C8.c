/* LEVEL_23:0x0227C8 -- placement copy of LEVEL_01_024728.c: looks up an entry index and reports whether the next index is still below 8 when the entry is active. */
typedef struct Entry {
    char pad00[0x20];
    int active;
} Entry;

extern int func_023320(int mode, int field);
extern Entry *func_022770(int a, int b, int c);

long long func_0227C8(int mode, int field)
{
    unsigned int index;
    long long result;
    Entry *entry;

    result = 0;
    index = func_023320(mode, field);
    entry = func_022770(mode, index, field);
    if (entry->active != 0) {
        int t = index + 1 < 8;
        result = t;
    }
    return result;
}
