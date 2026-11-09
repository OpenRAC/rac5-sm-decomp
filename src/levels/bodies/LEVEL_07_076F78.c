/* LEVEL_07:0x076F78 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_0024F720[];
extern int D_0020A3B4;

Entry *func_076F78(void *key)
{
    Entry *item;
    Entry *end = D_0024F720 + D_0020A3B4;

    for (item = D_0024F720; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
