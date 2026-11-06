/* LEVEL_01.REL:0x104D78: Ghidra body 168 bytes.
 * Pinned pure C links 164 bytes and first differs at +0.
 * Recheck the first rotation and nested loop bounds. No matching credit.
 */
void func_104D78(float *values, const char *source, int count)
{
    float first = values[1];
    float *current;
    const char *row;
    values[1] = values[2] * first + values[3] * values[0];
    values[0] = values[2] * values[0] - values[3] * first;
    current = values + 4;
    row = source + 0x18;
    do {
        float *next = current + 4;
        const float *transform = (const float *)(row + 0x30);
        do {
            float x = transform[0];
            float y = transform[1];
            float prior = current[1];
            current[1] = x * prior + y * current[0];
            current[0] = x * current[0] - y * prior;
            current += 2;
            transform += 2;
        } while (current != next);
        row += 0x40;
    } while (current != values + 4 + count * 4);
}
