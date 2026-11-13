/* USA LEVEL_17.REL:0x14F2E8, 188-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 184 linked bytes; first differing word +0x10.
 * Unaccepted; no matching credit. Recover the vector interpolation and minimum-reference helper contracts; the scalar version has a shorter frame/address sequence.
 */
void func_14F2E8(char *object, float dt)
{
    char *state = *(char **)(object + 0x58);
    float one;
    float *fraction;
    float t;
    *(float *)(state + 0x38) += dt * 0.5f;
    one = 1.0f;
    fraction = &one;
    if (*(float *)(state + 0x38) < one)
        fraction = (float *)(state + 0x38);
    t = *fraction;
    *(float *)(state + 0x38) = t;
    { float *out = (float *)(object + 0x30);
      out[0] = (*(float *)(state + 0x20) - *(float *)(state + 8)) * t + *(float *)(state + 8);
      out[1] = (*(float *)(state + 0x24) - *(float *)(state + 0xC)) * t + *(float *)(state + 0xC);
      out[2] = (*(float *)(state + 0x28) - *(float *)(state + 0x10)) * t + *(float *)(state + 0x10); }
    if (*(float *)(state + 0x38) == 1.0f)
        object[0x45] = 3;
}
