/* LEVEL_10:0x075400 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_00243220[];
extern int D_001FF0B4;

Entry *func_075400(void *key)
{
    Entry *item;
    Entry *end = D_00243220 + D_001FF0B4;

    for (item = D_00243220; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
