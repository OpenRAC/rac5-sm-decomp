/* LEVEL_01.REL:0x0D9170: 20 reviewed USA placements.
 * Ghidra body: 140 bytes; pinned C links 136 bytes and first differs at +1.
 * The wrap-index helper differs in its early argument registers. Reopen with caller evidence for count and index ABI types.
 * This source has no matching credit.
 */
void func_0D9170(int count, long long unused, int index,
                 int *left, int *right)
{
    int length;
    int value;
    *left = index;
    *right = index;
    length = count;
    if (length < 4) {
        *left = 0;
        *right = length - 1;
        return;
    }
    value = index - 2;
    *left = value;
    if (value < 0)
        *left = length + value;
    else if (value > length - 1)
        *left = (index - 1) - length;
    value = index + 2;
    *right = value;
    if (value < 0)
        *right = length + value;
    else if (value > length - 1)
        *right = (index + 3) - length;
}
