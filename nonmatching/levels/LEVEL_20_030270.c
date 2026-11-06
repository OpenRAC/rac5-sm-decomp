/* LEVEL_20.REL:0x030270, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +6.
 * The indexed record lookup differs in call-argument registers. Reopen with the record field layout and callee prototype.
 */
extern void func_06AA08(int, int);

void func_030270(char *record)
{
    char *first = *(char **)(record + 0x40);
    char *array = *(char **)(first + 4);
    unsigned int index = (unsigned char)record[0x44];
    char *item = *(char **)(array + index * 0x34 + 4);
    char *second = *(char **)(record + 0x48);
    func_06AA08(*(int *)(item + 0x20), *(int *)(second + 0xe4));
}
