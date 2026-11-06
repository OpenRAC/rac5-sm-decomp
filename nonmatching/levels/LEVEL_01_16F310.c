/* LEVEL_01.REL:0x16F310, bounded 188-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +4. Not linked into the accepted
 * gate or counted.
 * Reopen: The increments of param_2/param_3 between the cosf and sinf calls are ordered differently. Reopen with named temporaries for the increments.
 */
extern float cosf(float);
extern float sinf(float);

void func_0016F310(float k, int *param_2, float *param_3, unsigned int count, float *param_5)
{
    unsigned int i;

    i = 0;
    if (count != 0) {
        do {
            float *p = *(float **)(*param_2 + 4);

            *p = param_5[0] + k * cosf(*param_3);
            p[1] = param_5[2] + k * sinf(*param_3);
            param_2++;
            param_3++;
            i++;
        } while (i < count);
    }
}
