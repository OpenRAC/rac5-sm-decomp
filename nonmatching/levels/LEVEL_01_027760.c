/* LEVEL_01.REL:0x027760: reviewed 136-byte candidate.
 * pinned C with gnu-ee-trial links 128 bytes; first differs at +5.
 * Retry: Recover the fixed-slot scan and aliasing schedule that retains the input in
 * a3 and emits all 136 bytes.
 * No matching credit.
 */
typedef unsigned int u32;

typedef struct {
    char pad[0x80];
    void *entries[25];
    u32 count;
} List;

extern List *D_001F3FAC;

int func_027760(void *value)
{
    List *list = D_001F3FAC;
    int result = 0;
    u32 index = 0;
    int found = 0;

    if (list->count + 1 < 25) {
        do {
            if (list->entries[index] == value) {
                found = 1;
                break;
            }
            index++;
        } while (index < 25);
        if (!found) {
            list = D_001F3FAC;
            list->entries[list->count] = value;
            list->count++;
            result = 1;
        }
    }
    return result;
}
