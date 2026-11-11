/* LEVEL_02:0x07B648 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_00251330[];
extern int D_0020B074;

Entry *func_07B648(void *key)
{
    Entry *item;
    Entry *end = D_00251330 + D_0020B074;

    for (item = D_00251330; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
