extern char *func_01BDB0(void *, int, int, int, int);
extern float sqrtf(float);

char *func_135DB8(float *origin, float *distance)
{
    char *found = func_01BDB0(origin, 0x529, 0x101, 2, 1);
    float *position;
    float dx;
    float dy;
    float dz;

    if (found == 0)
        return 0;
    if (distance == 0)
        return found;
    position = (float *)(found + 0x30);
    dx = position[0] - origin[0];
    dy = position[1] - origin[1];
    dz = position[2] - origin[2];
    *distance = sqrtf(dx * dx + dy * dy + dz * dz);
    return found;
}
