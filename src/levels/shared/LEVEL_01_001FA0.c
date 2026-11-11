/* LEVEL_01:0x001FA0 -- builds a direction vector of a given length from a yaw and a pitch angle, using cosine and a sign-corrected square root. */

extern float floorf(float x);
extern float cosf(float x);
extern float sqrtf(float x);

void func_001FA0(float yaw, float pitch, float len, float *out)
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
