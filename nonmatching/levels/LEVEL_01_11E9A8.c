/* LEVEL_01.REL:0x11E9A8 -- adjusts a local weight before a second geometry query. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern float fabsf(float);
extern float func_11E790(float *weight, float *a, float *b, float *c, float *d);
extern float func_11E140(float *a, Vec3 *offset, float *b, float *c, float *d);

float func_11E9A8(float limit, float threshold, float *out,
                  float *a, float *b, float *c, float *d)
{
    Vec3 offset;
    float weight[4];
    float result = func_11E790(weight, a, b, c, d);

    weight[0] = -weight[0];
    if (!(threshold < result)) {
        if (limit < fabsf(weight[0])) {
            float value;
            float twice_limit;

            offset.x = 0.0f;
            offset.y = 0.0f;
            value = (weight[0] - limit) + fabsf(limit + weight[0]);
            twice_limit = limit + limit;
            weight[0] = ((value + twice_limit) - fabsf(twice_limit - value)) * 0.25f;
            offset.z = -weight[0];
            result = func_11E140(a, &offset, b, c, d);
        }
        *out = -weight[0];
    }
    return result;
}
