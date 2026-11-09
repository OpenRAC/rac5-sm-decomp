/* LEVEL_21:0x05D3B8 -- placement copy of LEVEL_01_074D60.c: finds the first 36-byte table entry whose first word equals a key. */
typedef struct Entry {
    void *key;
    int rest[8];
} Entry;

extern Entry D_00181E88[];
extern int D_0014AD34;

Entry *func_05D3B8(void *key)
{
    Entry *item;
    Entry *end = D_00181E88 + D_0014AD34;

    for (item = D_00181E88; item != end; item++) {
        if (item->key == key)
            return item;
    }
    return 0;
}
