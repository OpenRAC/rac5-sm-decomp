/* LEVEL_01.REL:0x09A568: Ghidra body 88 bytes.
 * Pinned pure C links 68 bytes and first differs at +2.
 * Recheck record-stride pointer roles and global aliasing. No matching credit.
 */
extern char D_0029AEF8[];

void func_09A568(int index)
{
    char *record = D_0029AEF8 + index * 0x170c;
    unsigned int *toggle_field = (unsigned int *)(record + 0x20);
    unsigned int toggle = *toggle_field ^ 1;
    int value;
    *toggle_field = toggle;
    value = *(int *)(record + 0x0c + toggle * 4);
    *(int *)(record + 0x18) = value;
    *(int *)(record + 0x1c) = value + *(int *)(record + 0x14) - 0x80;
}
