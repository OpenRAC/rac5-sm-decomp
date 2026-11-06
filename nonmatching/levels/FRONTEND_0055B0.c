/* FRONTEND.REL:0x0055B0: 21 USA placements.
 * Ghidra body: 100 bytes; pinned C links 96 bytes and first differs at +16.
 * The scalar sign classifier links 96 bytes but differs in the first branch target and direction. Reopen with source-level sign/zero decision order.
 * This source has no matching credit.
 */
int func_0055B0(float first, float second)
{
    int flags;
    if (first == 0.0f)
        flags = 0;
    else if (first > 0.0f)
        flags = 0x20;
    else
        flags = 0x80;
    if (second != 0.0f) {
        flags |= 0x10;
        if (second > 0.0f)
            flags |= 0x40;
    }
    return flags;
}
