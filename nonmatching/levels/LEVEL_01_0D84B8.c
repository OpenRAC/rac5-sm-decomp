/* LEVEL_01.REL:0x0D84B8: 20 reviewed USA placements.
 * Ghidra body: 196 bytes; pinned C links 96 bytes and first differs at +5.
 * The seven-argument record append compiles a shorter field-store sequence. Reopen with caller evidence for argument slots and record layout.
 * This source has no matching credit.
 */
int func_0D84B8(int *context, int a, int b, int c, int d, int e, int f)
{
    char *entry;
    int index;
    if (context[0x13] != 0)
        return 0;
    index = context[0x14];
    entry = (char *)(unsigned int)context[0] + index * 0x1c;
    entry[0] = 1;
    *(int *)(entry + 0x0c) = c;
    *(int *)(entry + 0x10) = d;
    *(int *)(entry + 0x14) = e;
    *(int *)(entry + 0x18) = f;
    *(int *)(entry + 4) = a;
    *(int *)(entry + 8) = b;
    context[0x14] = index + 1;
    return 1;
}
