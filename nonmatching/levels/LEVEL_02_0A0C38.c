/* LEVEL_02.REL:0x0A0C38: reviewed 88-byte candidate.
 * pinned C with gnu-ee-trial links 84 bytes; first differs at +6.
 * Retry: Recover the global-record base and separate selection pointer lifetimes
 * without folding the global offset into one address.
 * No matching credit.
 */
extern char D_002B23F8[];

void func_0A0C38(int index)
{
    int byte_offset = index * 0x170C;
    int *selection = (int *)(D_002B23F8 + 0x20 + byte_offset);
    char *record = D_002B23F8 + byte_offset;
    int selected = *selection ^ 1;
    int value;

    *selection = selected;
    value = *(int *)(D_002B23F8 + byte_offset + selected * 4 + 0x0C);
    *(int *)(record + 0x18) = value;
    *(int *)(record + 0x1C) = value + *(int *)(record + 0x14) - 0x80;
}
