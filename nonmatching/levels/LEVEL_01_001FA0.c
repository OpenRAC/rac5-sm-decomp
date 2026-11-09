/* LEVEL_01.REL:0x001FA0: reviewed 360-byte candidate, held for ABI review.
 * Builds a direction vector of a given length from a yaw and a pitch angle,
 * using cosine and a sign-corrected square root.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 360/360 bytes and is byte-
 * exact at this and 19 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, float, float, float),
 * but the accepted caller LEVEL_01_002108.c declares it returning void with
 * (float, float, float, pointer).
 * It defines the function returning void with (pointer, float, float, float),
 * but the accepted caller LEVEL_01_002188.c declares it returning void with
 * (float, float, float, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern float floorf(float x);
extern float cosf(float x);
extern float sqrtf(float x);

void func_001FA0(float *out, float yaw, float pitch, float len)
{
    float cy;
    float sy;
    float cp;
    float sp;

    yaw = yaw - floorf(yaw * 0.15915493667125702f + 0.5f) * 6.2831854820251465f;
    cy = cosf(yaw);
    sy = sqrtf(1.0f - cy * cy);
    if (yaw < 0.0f) {
        sy = -sy;
    }
    cp = cosf(pitch);
    sp = sqrtf(1.0f - cp * cp);
    if (pitch < 0.0f) {
        sp = -sp;
    }
    out[2] = len * sy * cp;
    out[0] = len * cy * cp;
    out[1] = -len * sp;
}
