/* LEVEL_16:0x065C98 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_001EC4F0[];
extern int D_001A3B04;

Entry *func_065C98(void *key)
{
    Entry *item;
    Entry *end = D_001EC4F0 + D_001A3B04;

    for (item = D_001EC4F0; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
