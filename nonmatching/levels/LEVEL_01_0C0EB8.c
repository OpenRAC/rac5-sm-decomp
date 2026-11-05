/* USA LEVEL_01.REL:0x0C0EB8. Search a two-level record table. */
typedef struct Record34 {
    char unused00[0x20];
    void *key;
    char unused24[0x10];
} Record34;

typedef struct Record44 {
    char unused00[4];
    Record34 *children;
    char unused08[0x1C];
    void *key;
    char unused28[0x14];
    unsigned char child_count;
    char unused3D[7];
} Record44;

typedef struct Table {
    char unused00[0x34];
    Record44 *records;
    int record_count;
} Table;

extern Table *D_00206D90;
extern Record34 *D_00329008;

int func_0C0EB8(void *outer_key, void *inner_key)
{
    Record44 *record;
    Record44 *record_end;
    Record34 *child;
    Record34 *child_end;

    if (outer_key != 0) {
        record = D_00206D90->records;
        record_end = record + D_00206D90->record_count;
        while (record != record_end) {
            if (record->key == outer_key)
                break;
            record++;
        }
        if (record == record_end)
            return 0;

        child = record->children;
        if (child == 0)
            return 0;
        child_end = child + record->child_count;
        while (child != child_end) {
            if (child->key == inner_key) {
                D_00329008 = child;
                return 1;
            }
            child++;
        }
    }
    return 0;
}
