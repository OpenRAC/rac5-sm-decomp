/* LEVEL_06:0x070C30 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_00226BA0[];
extern int D_001E4FB4;

Entry *func_070C30(void *key)
{
    Entry *item;
    Entry *end = D_00226BA0 + D_001E4FB4;

    for (item = D_00226BA0; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
