/* LEVEL_01.REL:0x057428, bounded 156-byte candidate.
 * Isolated pinned C object: 148 bytes; first linked
 * difference at body byte +44. Not linked into the accepted
 * gate or counted.
 * Reopen: Only the floating branch of the zero-coefficient case differs: the retail uses bc1f with a nop and a b to the store, keeping lwc1 in its delay slot, while GCC emits bc1tl and drops two nops. Reopen with textually different load expressions for the two branches.
 */
extern float D_0020E968[];

void func_057428(float *dst, char *base, float *coef, int count)
{
    float *alt = (float *)(base + 0xCFC);
    float *src = (float *)(base + 0xD10);
    int i;

    for (i = 0; i < 5; i++) {
        float weight;
        float value;

        if (i < count) {
            weight = coef[i];
            if (weight == 0.0f)
                value = src[i];
            else if (weight == -1000.0f)
                value = *(float *)((char *)alt + i * 4);
            else
                value = *(float *)((char *)D_0020E968 + i * 4) * weight;
        } else {
            value = src[i];
        }
        dst[i] = value;
    }
}
