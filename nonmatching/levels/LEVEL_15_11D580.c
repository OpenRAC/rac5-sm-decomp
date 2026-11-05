/* USA LEVEL_15:0x11D580, 44 retail bytes; two raw-identical candidate sites.
 * Pinned C links to 40 bytes, first difference at body byte 28: one division
 * padding word is missing. The existing divpad profile links to 56 bytes and
 * diverges earlier. Revisit with a measured per-division schedule and controls
 * for accepted division users. This source is uncounted.
 */
void func_11D580(char *object, float *values)
{
    *(float **)(object + 0xE4) = values;
    *(float *)(object + 0xE8) = 1.0f / values[0];
    *(float *)(object + 0x114) = 1.0f / values[1];
}
