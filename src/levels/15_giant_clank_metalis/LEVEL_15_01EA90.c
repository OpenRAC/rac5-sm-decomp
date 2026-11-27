/* LEVEL_15:0x01EA90 -- placement copy of LEVEL_01_024728.c: looks up an entry index and reports whether the next index is still below 8 when the entry is active. */
typedef struct Entry {
    char pad00[0x20];
    int active;
} Entry;

extern int func_01F5E8(int mode, int field);
extern Entry *func_01EA38(int a, int b, int c);

long long func_01EA90(int mode, int field)
{
    unsigned int index;
    long long result;
    Entry *entry;

    result = 0;
    index = func_01F5E8(mode, field);
    entry = func_01EA38(mode, index, field);
    if (entry->active != 0) {
        int t = index + 1 < 8;
        result = t;
    }
    return result;
}
