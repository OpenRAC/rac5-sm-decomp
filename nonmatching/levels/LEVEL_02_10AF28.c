/* LEVEL_02.REL:0x10AF28: reviewed 168-byte candidate.
 * pinned C with gnu-ee-trial links 156 bytes; first differs at +21.
 * Retry: Recover the nested complex-rotation pointer and FP lifetime schedule.
 * No matching credit.
 */
void func_10AF28(float *values, const char *table, int count)
{
    float real = values[0];
    float imaginary = values[1];
    float *cursor;
    float *stop;
    const char *row;

    values[1] = values[2] * imaginary + values[3] * real;
    values[0] = values[2] * real - values[3] * imaginary;
    cursor = values + 4;
    stop = cursor + count * 4;
    row = table + 0x18;
    do {
        float *end = cursor + 4;
        const float *twiddle = (const float *)(row + 0x30);
        do {
            float real = cursor[0];
            float imag = cursor[1];
            float sine = twiddle[0];
            float cosine = twiddle[1];

            cursor[1] = sine * imag + cosine * real;
            cursor[0] = sine * real - cosine * imag;
            cursor += 2;
            twiddle += 2;
        } while (cursor != end);
        row += 0x40;
    } while (cursor != stop);
}
