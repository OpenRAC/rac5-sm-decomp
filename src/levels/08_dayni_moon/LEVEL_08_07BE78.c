/* LEVEL_08:0x07BE78 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_002890B0[];
extern int D_0023EF74;

Entry *func_07BE78(void *key)
{
    Entry *item;
    Entry *end = D_002890B0 + D_0023EF74;

    for (item = D_002890B0; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
