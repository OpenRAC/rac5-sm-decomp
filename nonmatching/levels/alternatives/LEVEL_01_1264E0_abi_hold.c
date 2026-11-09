/* LEVEL_01.REL:0x1264E0: reviewed 180-byte candidate, held for ABI review.
 * Fills a 3x3 rotation matrix from two angles.
 * gnu-ee-trial C with gnu-ee-trial links 180/180 bytes and is byte-exact at
 * this and 9 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, float, float), but the
 * accepted caller LEVEL_01_068CF0.c declares it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float sinf(float);
extern float cosf(float);

void func_1264E0(float *matrix, float first, float second)
{
    float sin_first = sinf(first);
    float cos_first = cosf(first);
    float sin_second = sinf(second);
    float cos_second = cosf(second);
    float *r1 = matrix + 3;
    float *r2 = matrix + 6;

    matrix[0] = cos_first;
    matrix[1] = 0.0f;
    matrix[2] = -sin_first;
    r1[0] = sin_second * sin_first;
    r1[2] = sin_second * cos_first;
    r1[1] = cos_second;
    r2[0] = cos_second * sin_first;
    r2[1] = -sin_second;
    r2[2] = cos_second * cos_first;
}
