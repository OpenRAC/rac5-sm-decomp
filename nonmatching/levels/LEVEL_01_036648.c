/* USA LEVEL_01:0x036648, 52 retail bytes; 20 raw-identical candidate sites.
 * gnu-ee-trial-divpad links this C to 56 bytes, first difference at body byte
 * 40: it inserts one more padding word before the second floating division.
 * Revisit with a source-specific, measured division schedule and controls for
 * previously accepted division users. This source is uncounted.
 */
void func_036648(char *object, float *values)
{
    float first = values[0];
    *(float **)(object + 0x1C) = values;
    *(float *)(object + 0x2C) = 1.0f / first;
    *(float *)(object + 0x30) = first / values[1];
}
