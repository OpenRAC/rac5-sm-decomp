/* LEVEL_01.REL:0x0023B0: 20 reviewed USA placements.
 * Ghidra body: 164 bytes; pinned C links 164 bytes and first differs at +128.
 * The 164-byte C agrees except that one branch skips an extra nop. Reopen with source-level control flow that preserves the retail branch target.
 * This source has no matching credit.
 */
float func_0023B0(float value, float velocity, float step,
                  float minimum, float maximum)
{
    float choices[3];
    float *result;
    float *high;
    choices[1] = minimum;
    choices[2] = maximum;
    if (velocity != 0.0f) {
        if (velocity * value < 0.0f)
            value = -value;
        choices[0] = value + velocity;
        result = &choices[1];
        high = &choices[2];
        if (!(choices[0] < minimum)) {
            result = &choices[0];
            if (maximum < choices[0])
                result = high;
        }
        value = *result;
    } else {
        if (value < 0.0f) {
            value += step;
            if (value > 0.0f)
                value = 0.0f;
        } else {
            value -= step;
            if (value < 0.0f)
                value = 0.0f;
        }
    }
    return value;
}
