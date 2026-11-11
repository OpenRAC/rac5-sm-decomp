/* LEVEL_05:0x073D98 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_00225B20[];
extern int D_001E5434;

Entry *func_073D98(void *key)
{
    Entry *item;
    Entry *end = D_00225B20 + D_001E5434;

    for (item = D_00225B20; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
