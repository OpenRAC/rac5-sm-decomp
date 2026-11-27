/* LEVEL_01:0x024728 -- looks up an entry index and reports whether the next index is still below 8 when the entry is active. */
typedef struct Entry {
    char pad00[0x20];
    int active;
} Entry;

extern int func_0252D8(int mode, int field);
extern Entry *func_0246D0(int a, int b, int c);

long long func_024728(int mode, int field)
{
    unsigned int index;
    long long result;
    Entry *entry;

    result = 0;
    index = func_0252D8(mode, field);
    entry = func_0246D0(mode, index, field);
    if (entry->active != 0) {
        int t = index + 1 < 8;
        result = t;
    }
    return result;
}
