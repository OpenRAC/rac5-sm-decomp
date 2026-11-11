/* LEVEL_17:0x066458 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_001DD7F0[];
extern int D_00197104;

Entry *func_066458(void *key)
{
    Entry *item;
    Entry *end = D_001DD7F0 + D_00197104;

    for (item = D_001DD7F0; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
