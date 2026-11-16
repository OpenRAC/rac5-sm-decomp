/*
 * USA boot candidate at 0x01E92E98; anonymous body extent 168 bytes.
 * This C body compared exactly in a local SN link using reconstructed GNU
 * pinned and gnu-ee-trial compilers with -O2 -G0. Those tools are not a
 * qualified project toolchain; this is not an accepted match. Promotion
 * requires the qualified complete boot gate and semantic boundary review.
 *
 * For ordinary finite inputs, the observed operations scale the input by a
 * global factor, clamp it to [0, 1], take a square root, and round after
 * scaling. Do not infer behavior for NaN or out-of-range float-to-int cases.
 */
extern float sqrtf(float);

extern float D_01FD18DC;

int func_1E92E98(float volume)
{
    float value;
    float low;
    float high;
    const float *v;
    const float *lo;
    const float *hi;
    const float *clamped;

    value = volume * D_01FD18DC;
    low = 0.0f;
    high = 1.0f;
    v = &value;
    lo = &low;
    hi = &high;
    if (*v < *lo)
        clamped = lo;
    else if (*hi < *v)
        clamped = hi;
    else
        clamped = v;
    return (int)(sqrtf(*clamped) * 1024.0f + 0.5f);
}
