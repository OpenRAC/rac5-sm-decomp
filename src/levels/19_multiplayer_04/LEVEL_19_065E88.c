/* LEVEL_19:0x065E88 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_001EC670[];
extern int D_001A4C84;

Entry *func_065E88(void *key)
{
    Entry *item;
    Entry *end = D_001EC670 + D_001A4C84;

    for (item = D_001EC670; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
