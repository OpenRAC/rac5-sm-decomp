/* LEVEL_01.REL:0x171388: Ghidra body 100 bytes.
 * Pinned pure C links 100 bytes and first differs at +4.
 * Recheck saved-register order around the state test. No matching credit.
 */
extern int func_171330(void);
extern void func_170158(void *);

void func_171388(char *record)
{
    char *entry = *(char **)(record + 0x58);
    unsigned char state;
    if (func_171330() != 0) {
        unsigned int value = *(unsigned int *)(entry + 0x58);
        if (value == 1) {
            state = 8;
            goto done;
        }
        if (value > 1) {
            state = 6;
            goto done;
        }
    }
    func_170158(record);
    state = 2;
done:
    record[0x45] = state;
}
