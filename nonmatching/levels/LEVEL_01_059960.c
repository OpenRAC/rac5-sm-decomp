/* LEVEL_01.REL:0x059960: Ghidra body 124 bytes.
 * Pinned pure C links 124 bytes and first differs at +16.
 * Recheck stack buffer and helper call argument layout. No matching credit.
 */
extern char *func_059840(long long);
extern void func_135EC8(int, int *, int *);
extern void func_059958(int, int);

void func_059960(char *record, long long source, int enabled)
{
    int current;
    int values[2];
    if (enabled == 0) {
        *(int *)(record + 0xce8) = 0;
    } else {
        char *result = func_059840(source);
        if (result != 0) {
            *(int *)(record + 0xce8) = *(int *)(result + 4);
        }
    }
    current = *(int *)(record + 0xce8);
    if (current == 0) {
        func_059958(0, 0);
    } else {
        func_135EC8(current, &values[0], &values[1]);
        func_059958(values[0], values[1]);
    }
}
