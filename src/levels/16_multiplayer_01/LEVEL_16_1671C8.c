extern int func_01DC98(float *position, float *out, float *a, float *b, float *c, char *hit, float *end, int flags, int extra, int extra2, float radius);
extern int func_166CF0(char *object, float *point, float *position, char *hit);
int func_1671C8(char *object)
{
    char hit[32];
    float point[4], a[4], b[4], c[4];
    float *position = (float *)(object + 0x30);
    int result = 0;
    if (func_01DC98(position, point, a, b, c, hit, position, 0x38, 0, 0, 0.25f) &&
        func_166CF0(object, point, position, hit)) {
        result = 1;
        position[0] = point[0];
        position[1] = point[1];
        position[2] = point[2];
    }
    return result;
}
