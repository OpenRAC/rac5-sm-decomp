/* LEVEL_01.REL:0x027760: reviewed 136-byte candidate, held for ABI review.
 * Appends a value to a 25-slot list unless it is already present.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct List_1F3FAC {
    char pad_00[0x80];
    void *entries[25];
    unsigned int count;
} List_1F3FAC;

extern List_1F3FAC *D_001F3FAC;

int func_027760(void *value)
{
    int result = 0;
    unsigned int i;
    int found;

    if (D_001F3FAC->count + 1 < 25) {
        found = 0;
        for (i = 0; i < 25; i++) {
            if (D_001F3FAC->entries[i] == value) {
                found = 1;
                break;
            }
        }
        if (!found) {
            List_1F3FAC *list = D_001F3FAC;
            unsigned int n = list->count;

            list->entries[n] = value;
            list->count = n + 1;
            result = 1;
        }
    }
    return result;
}
