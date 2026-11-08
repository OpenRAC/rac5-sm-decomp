/* LEVEL_02.REL:0x02B488: reviewed 148-byte candidate.
 * pinned C with gnu-ee-trial links 148 bytes; first differs at +42.
 * Retry: Recover the source loop shape and min/max register schedule including the
 * count-zero path.
 * No matching credit.
 */
/* LEVEL_02.REL:0x02B488: useful C candidate, no matching credit.
   Reopen when: Recover the source loop shape and min/max register schedule including the count-zero path. */
typedef struct {
    unsigned int unused;
    unsigned int key;
} KeyRecord;

extern char *func_08BBC0(unsigned int key);

int func_02B488(KeyRecord *record)
{
    char *table;
    char *items;
    int count;
    int minimum;
    int maximum;
    unsigned int index;

    if (record->key == 0xFFFFFFFFU)
        return -1;
    table = *(char **)(func_08BBC0(record->key) + 0x1C) + 8;
    minimum = 256;
    maximum = -1;
    count = *(int *)(table + 12);
    if (count == 0)
        return -1;
    items = *(char **)(table + 16);
    index = 0;
    do {
        int value = *(unsigned char *)(items + 3 + index * 12);
        if (!(value & 16)) {
            if (value > maximum)
                maximum = value;
            if (value < minimum)
                minimum = value;
        }
        index++;
    } while (index < (unsigned int)count);
    return minimum != maximum ? maximum : -1;
}
