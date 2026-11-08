/* LEVEL_02.REL:0x05D660: reviewed 60-byte candidate.
 * pinned C with gnu-ee-trial links 60 bytes; first differs at +15.
 * Retry: Recover the original stack-slot pointer selection that uses aligned-address
 * OR semantics rather than addition.
 * No matching credit.
 */
void func_05D660(float decrease, char *context)
{
    float difference = *(float *)(context + 0x96C) - decrease;
    float zero = 0.0f;
    float *positive = &difference;
    float *selected = &zero;

    if (zero < difference)
        selected = positive;
    *(float *)(context + 0x96C) = *selected;
}
