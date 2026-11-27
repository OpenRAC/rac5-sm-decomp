/* LEVEL_20:0x01EEC8 -- placement copy of LEVEL_01_024728.c: looks up an entry index and reports whether the next index is still below 8 when the entry is active. */
typedef struct Entry {
    char pad00[0x20];
    int active;
} Entry;

extern int func_01F8D0(int mode, int field);
extern Entry *func_01EE70(int a, int b, int c);

long long func_01EEC8(int mode, int field)
{
    unsigned int index;
    long long result;
    Entry *entry;

    result = 0;
    index = func_01F8D0(mode, field);
    entry = func_01EE70(mode, index, field);
    if (entry->active != 0) {
        int t = index + 1 < 8;
        result = t;
    }
    return result;
}
