/* LEVEL_02.REL:0x03B090: reviewed 52-byte candidate.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 56 bytes; first differs at +40.
 * Retry: Qualify a route with two padding nops before the first float division and
 * one before the second; the existing divpad route adds two to both.
 * No matching credit.
 */
void func_03B090(char *record, float *values)
{
    float first = values[0];
    *(float **)(record + 0x1c) = values;
    *(float *)(record + 0x2c) = 1.0f / first;
    *(float *)(record + 0x30) = first / values[1];
}
