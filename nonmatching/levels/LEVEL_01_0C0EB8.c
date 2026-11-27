/* USA LEVEL_01:0C0EB8, 148-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 144 bytes: 14 differing words; first difference +0x4. No matching credit.
 * Remaining issue: block layout (144 vs 148 B, from 20 words): for(;;) loops with the end test
 * first and break on match reproduce retail through the first loop, its inline return 0 and the
 * children test (instructions equal through +0x58, the outer-null branch offset differs); retail
 * sends the child-loop exhaustion to the separate final return 0 (shared with the null outer
 * key) and hoists the global lui before the child loop, ours merges that exit into the first
 * inline return; goto/break/while/do forms and -fexceptions/-fno-sched-interblock tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x0C0EB8 -- finds a record by outer key, then a child by inner key; stores the child in a global and returns 1 on success. */
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
    Record44 *rec;
    Record44 *rec_end;
    Record34 *c;
    Record34 *c_end;

    if (outer_key != 0) {
        rec = D_00206D90->records;
        rec_end = rec + D_00206D90->record_count;
        for (;;) {
            if (rec == rec_end)
                return 0;
            if (rec->key == outer_key)
                break;
            rec++;
        }
        c = rec->children;
        if (c == 0)
            return 0;
        c_end = c + rec->child_count;
        for (;;) {
            if (c == c_end)
                goto done;
            if (c->key == inner_key)
                break;
            c++;
        }
        D_00329008 = c;
        return 1;
    }
done:
    return 0;
}
