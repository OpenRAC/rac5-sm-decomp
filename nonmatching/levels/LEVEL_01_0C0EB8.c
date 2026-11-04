/* USA LEVEL_01.REL:0x0C0EB8. Retained C hypothesis, not a match.
 * The pinned profile links 172 bytes against a 148-byte candidate body;
 * the first difference is at body byte 4. See docs/MATCHING-BLOCKERS.md. */
typedef struct {
    char pad00[0x20];
    void *key;
    char pad24[0x34 - 0x24];
} SecondEntry;

typedef struct {
    char pad00[4];
    SecondEntry *second;
    char pad08[0x24 - 8];
    void *key;
    char pad28[0x3C - 0x28];
    unsigned char count;
    char pad3D[0x44 - 0x3D];
} FirstEntry;

typedef struct {
    char pad00[0x34];
    FirstEntry *entries;
    int count;
} Manager;

extern Manager *D_00206D90;
extern SecondEntry *D_00329008;

int func_0C0EB8(void *first_key, void *second_key) {
    FirstEntry *first;
    FirstEntry *first_end;
    SecondEntry *second;
    SecondEntry *second_end;

    if (first_key == 0)
        return 0;

    first = D_00206D90->entries;
    first_end = first + D_00206D90->count;
    while (first != first_end) {
        if (first->key == first_key)
            goto first_found;
        first++;
    }
    return 0;
first_found:
    second = first->second;
    if (second == 0)
        return 0;
    second_end = second + first->count;
    while (second != second_end) {
        if (second->key == second_key)
            goto second_found;
        second++;
    }
    return 0;
second_found:
    D_00329008 = second;
    return 1;
}
