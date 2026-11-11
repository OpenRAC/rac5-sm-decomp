/* LEVEL_22:0x06A5F0 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_0018BA20[];
extern int D_00155434;

Entry *func_06A5F0(void *key)
{
    Entry *item;
    Entry *end = D_0018BA20 + D_00155434;

    for (item = D_0018BA20; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
