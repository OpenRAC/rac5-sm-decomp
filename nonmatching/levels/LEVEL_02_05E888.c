/* LEVEL_02.REL:0x05E888: reviewed 124-byte candidate.
 * pinned C with gnu-ee-trial links 132 bytes; first differs at +60.
 * Retry: Find defined C that reproduces the retail stack loads and call when the per-
 * module output callee is an 8-byte stub; initializing both locals currently links
 * 132 B and first differs at +60.
 * No matching credit.
 */
extern int *func_05E768(void *handle);
extern void func_13C278(int value, int *first, int *second);
extern void func_05E880(int first, int second);

void func_05E888(char *state, void *handle, int enable)
{
    int value;
    if (enable != 0) {
        int *entry = func_05E768(handle);
        if (entry != 0)
            *(int *)(state + 0xce8) = entry[1];
    } else {
        *(int *)(state + 0xce8) = 0;
    }
    value = *(int *)(state + 0xce8);
    if (value != 0) {
        int first = 0;
        int second = 0;
        func_13C278(value, &first, &second);
        func_05E880(first, second);
    } else {
        func_05E880(0, 0);
    }
}
