/* USA LEVEL_01:096B20, 188-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link, but held for a local prototype conflict; no matching credit.
 * Remaining issue: earlier exact draft re-tried; accepted LEVEL_01 callers use int
 * func_096B20(void *) (compatible); func_096988 has no accepted LEVEL_01 definition, declared
 * int (const void *, int) from the a0/a1 setup and the v0 return; 19 address variants left to
 * the coordinator
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x096B20 -- finds a four-word key among the cached records and returns its index, creating the record through a helper when it is absent. */
typedef struct Record {
    unsigned int key[4];
    unsigned char rest[24];
} Record;

typedef struct Cache {
    Record records[256];
    int count;
} Cache;

extern Cache D_002982CC;
extern int func_096988(const void *key, int arg);

int func_096B20(const void *key_data)
{
    const unsigned int *key = key_data;
    Record *record = D_002982CC.records;
    Record *end = record + D_002982CC.count;
    int index;

    for (; record != end; ++record) {
        if (key[0] == record->key[0] && key[1] == record->key[1] && key[2] == record->key[2] && key[3] == record->key[3]) {
            break;
        }
    }
    index = record - D_002982CC.records;
    if (index == D_002982CC.count) {
        return func_096988(key_data, 0);
    }
    return index;
}
