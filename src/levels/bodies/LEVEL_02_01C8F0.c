extern float sqrtf(float);

float func_0001C8F0(float scale, float *point, float *direction, float *origin)
{
    float dx = point[0] - origin[0];
    float dy = point[1] - origin[1];
    float dz = point[2] - origin[2];
    float dot = direction[0] * dx + direction[1] * dy + direction[2] * dz;

    return -sqrtf(dot * dot + scale - (dx * dx + dy * dy + dz * dz)) - dot;
}
