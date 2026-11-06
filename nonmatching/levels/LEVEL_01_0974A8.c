/* LEVEL_01.REL:0x0974A8: Ghidra body 88 bytes.
 * Pinned pure C with `-mno-check-zero-division` links 88 bytes and first differs at +2.
 * Recheck the packed table and division operand scheduling. No matching credit.
 */
extern int D_002108E0[];
extern char D_002982CC[];

void func_0974A8(char *record, int kind, int index)
{
    int numerator;
    int divisor;
    *(short *)(record + 0x10) = kind;
    *(int *)(record + 0x00) = (int)record;
    *(int *)(record + 0x04) = (int)record;
    *(int *)(record + 0x08) = (int)record;
    *(int *)(record + 0x0c) = (int)record;
    record[0x12] = (char)index;
    numerator = D_002108E0[index];
    divisor = *(unsigned short *)(D_002982CC + kind * 0x28 + 8);
    record[0x13] = (char)(numerator / divisor - 1);
}
