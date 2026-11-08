/* LEVEL_01.REL:0x1264E0: reviewed 180-byte candidate.
 * gnu-ee-trial C with gnu-ee-trial links 172 bytes; first differs at +88.
 * Retry: Recover the two row-base address materializations and floating
 * multiply/store schedule under the qualified GNU EE profile.
 * No matching credit.
 */
extern float sinf(float);
extern float cosf(float);

void func_1264E0(float *matrix, float first, float second)
{
    float cos_second;
    float sin_second;
    float cos_first;
    float sin_first;
    sin_first = sinf(first);
    cos_first = cosf(first);
    sin_second = sinf(second);
    cos_second = cosf(second);
    matrix[0] = cos_first;
    matrix[1] = 0.0f;
    matrix[3] = sin_second * sin_first;
    matrix[2] = -sin_first;
    matrix[5] = cos_first * sin_second;
    matrix[4] = cos_second;
    matrix[6] = cos_second * sin_first;
    matrix[8] = cos_second * cos_first;
    matrix[7] = -sin_second;
}
