/* LEVEL_20:0x074F40 -- placement copy of LEVEL_01_096B20.c: finds a four-word key among the cached records and returns its index, creating the record through a helper when it is absent. */
typedef struct Record {
    unsigned int key[4];
    unsigned char rest[24];
} Record;

typedef struct Cache {
    Record records[256];
    int count;
} Cache;

extern Cache D_00171F4C;
extern int func_074DA8(const void *key, int arg);

int func_074F40(const void *key_data)
{
    const unsigned int *key = key_data;
    Record *record = D_00171F4C.records;
    Record *end = record + D_00171F4C.count;
    int index;

    for (; record != end; ++record) {
        if (key[0] == record->key[0] && key[1] == record->key[1] && key[2] == record->key[2] && key[3] == record->key[3]) {
            break;
        }
    }
    index = record - D_00171F4C.records;
    if (index == D_00171F4C.count) {
        return func_074DA8(key_data, 0);
    }
    return index;
}
