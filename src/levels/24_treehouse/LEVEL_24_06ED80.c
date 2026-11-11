/* LEVEL_24:0x06ED80 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_00205D20[];
extern int D_001C6D34;

Entry *func_06ED80(void *key)
{
    Entry *item;
    Entry *end = D_00205D20 + D_001C6D34;

    for (item = D_00205D20; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
