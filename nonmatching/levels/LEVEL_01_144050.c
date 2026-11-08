/* LEVEL_01.REL:0x144050: Isolated C links exactly 72/72 bytes, but the ABI remains a semantic hold.
 * Retry: Reconcile the 16 complete 140-byte Ghidra callees returning bool with 40
 * accepted C callers: 12 int(int,int,int), 12 int(unsigned int,void*,int), and 16
 * void*(int,int,int). Establish one valid return/second-argument contract or
 * justified per-call conversion, reprove affected objects and all placements, then
 * pass independent QA and a combined 21-module gate.
 * No C matching credit.
 */
extern int func_024C98(int category, int index, int selector);

void func_144050(char *object)
{
    char *holder = *(char **)(object + 0x58);
    char *member = *(char **)holder;
    int selector = *(int *)(member + 0xf8);
    int state = func_024C98(6, 14, selector);
    if (state != 0)
        state = 7;
    else
        state = 6;
    object[0x45] = state;
}
