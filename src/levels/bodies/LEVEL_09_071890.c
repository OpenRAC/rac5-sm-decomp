/* LEVEL_09:0x071890 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_002215A0[];
extern int D_001DFEB4;

Entry *func_071890(void *key)
{
    Entry *item;
    Entry *end = D_002215A0 + D_001DFEB4;

    for (item = D_002215A0; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
