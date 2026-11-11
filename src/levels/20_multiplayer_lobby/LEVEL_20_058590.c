/* LEVEL_20:0x058590 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_00143D58[];
extern int D_001061E4;

Entry *func_058590(void *key)
{
    Entry *item;
    Entry *end = D_00143D58 + D_001061E4;

    for (item = D_00143D58; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
