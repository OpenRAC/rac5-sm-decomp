/* LEVEL_10:0x096E90 -- placement copy of LEVEL_01_096B20.c: finds a four-word key among the cached records and returns its index, creating the record through a helper when it is absent. */
typedef struct Record {
    unsigned int key[4];
    unsigned char rest[24];
} Record;

typedef struct Cache {
    Record records[256];
    int count;
} Cache;

extern Cache D_002A16CC;
extern int func_096CF8(const void *key, int arg);

int func_096E90(const void *key_data)
{
    const unsigned int *key = key_data;
    Record *record = D_002A16CC.records;
    Record *end = record + D_002A16CC.count;
    int index;

    for (; record != end; ++record) {
        if (key[0] == record->key[0] && key[1] == record->key[1] && key[2] == record->key[2] && key[3] == record->key[3]) {
            break;
        }
    }
    index = record - D_002A16CC.records;
    if (index == D_002A16CC.count) {
        return func_096CF8(key_data, 0);
    }
    return index;
}
