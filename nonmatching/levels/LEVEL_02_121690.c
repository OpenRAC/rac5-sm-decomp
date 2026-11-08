/* LEVEL_02.REL:0x121690: reviewed 160-byte candidate.
 * pinned C with gnu-ee-trial links 160 bytes; first differs at +0.
 * Retry: Recover the interleaved absolute-value and weighted-sum FPR lifetimes while
 * preserving the three coordinate results.
 * No matching credit.
 */
void func_121690(float *out, const float *weights,
                 const float *first, const float *second, const float *third)
{
    float a2 = fabsf(first[2]);
    float b2 = fabsf(second[2]);
    float a0 = fabsf(first[0]);
    float a1 = fabsf(first[1]);
    float b0 = fabsf(second[0]);
    float b1 = fabsf(second[1]);
    float w0 = weights[0];
    float w1 = weights[1];
    float c2 = fabsf(third[2]);
    float c0 = fabsf(third[0]);
    float c1 = fabsf(third[1]);
    float w2 = weights[2];

    out[0] = a0 * w0 + b0 * w1 + c0 * w2;
    out[1] = a1 * w0 + b1 * w1 + c1 * w2;
    out[2] = a2 * w0 + b2 * w1 + c2 * w2;
}
