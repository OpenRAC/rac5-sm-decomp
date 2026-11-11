/* LEVEL_23:0x06EA80 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_002072A0[];
extern int D_001C94B4;

Entry *func_06EA80(void *key)
{
    Entry *item;
    Entry *end = D_002072A0 + D_001C94B4;

    for (item = D_002072A0; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
