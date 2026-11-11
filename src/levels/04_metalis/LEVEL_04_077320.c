/* LEVEL_04:0x077320 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_00254630[];
extern int D_0020F574;

Entry *func_077320(void *key)
{
    Entry *item;
    Entry *end = D_00254630 + D_0020F574;

    for (item = D_00254630; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
