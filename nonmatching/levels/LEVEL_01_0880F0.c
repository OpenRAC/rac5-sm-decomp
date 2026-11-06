/* LEVEL_01.REL:0x0880F0: 20 reviewed USA placements.
 * Ghidra body: 168 bytes; pinned C links 160 bytes and first differs at +1.
 * The floating range function differs in initial FPR allocation and size. Reopen with the original absolute-value expression and conversion order.
 * This source has no matching credit.
 */
float func_0880F0(int position, int step)
{
    float range = (float)step * 0.0078125f;
    float value = ((float)position / 255.0f +
                   (float)position / 255.0f) - 1.0f;
    float magnitude = value < 0.0f ? -value : value;
    if (range < magnitude) {
        if (value > 0.0f)
            value -= range;
        else
            value += range;
        return value / (1.0f - range);
    }
    return 0.0f;
}
