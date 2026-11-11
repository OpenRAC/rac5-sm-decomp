/* LEVEL_04:0x0273F0 -- placement copy of LEVEL_01_027760.c: appends a value to a 25-slot list unless it is already present. */
typedef struct List_1F3FAC {
    char pad_00[0x80];
    void *entries[25];
    unsigned int count;
} List_1F3FAC;

extern List_1F3FAC *D_0020D12C;

int func_0273F0(void *value)
{
    int result = 0;
    unsigned int i;
    int found;

    if (D_0020D12C->count + 1 < 25) {
        found = 0;
        for (i = 0; i < 25; i++) {
            if (D_0020D12C->entries[i] == value) {
                found = 1;
                break;
            }
        }
        if (!found) {
            List_1F3FAC *list = D_0020D12C;
            unsigned int n = list->count;

            list->entries[n] = value;
            list->count = n + 1;
            result = 1;
        }
    }
    return result;
}
