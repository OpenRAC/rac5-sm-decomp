/* LEVEL_01.REL:0x0174B0: 20 USA placements.
 * Ghidra body: 84 bytes; pinned C links 64 bytes and first differs at +4.
 * The enum-to-float cases compile to 64 bytes instead of 84; the pinned compiler folds the redundant range checks. Reopen with caller evidence for original return type and condition structure.
 * This source has no matching credit.
 */
float func_0174B0(int value)
{
    if (value == 0x12)
        return 48.0f;
    if (value > 0x11 && value < 0x18 && value > 0x15)
        return 64.0f;
    return 38.0f;
}
