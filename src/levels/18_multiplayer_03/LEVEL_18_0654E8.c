/* LEVEL_18:0x0654E8 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_001EC870[];
extern int D_001A4F84;

Entry *func_0654E8(void *key)
{
    Entry *item;
    Entry *end = D_001EC870 + D_001A4F84;

    for (item = D_001EC870; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
