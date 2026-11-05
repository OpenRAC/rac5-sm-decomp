/* LEVEL_01.REL:0x0588A8 -- initializes a query and stores its selected result. */
extern int func_014F98(void *scratch, void *object, void *geometry,
                       int *index, float *value,
                       const float *normal, const float *distance_sq);
extern float func_0570C8(void *object, int count, float sum);
extern float fabsf(float);

void func_0588A8(float amount, char *state, void *object)
{
    char scratch[16];
    int index;
    float value;
    float scaled;
    float level;
    float top;
    float result;

    *(int *)(state + 0xCC4) = 7;
    *(float *)(state + 0xCB8) = 0.06666667f;
    scaled = amount * 0.6f;
    level = scaled + 0.13333334f + fabsf(0.13333334f - scaled);
    *(float *)(state + 0xCBC) = 0.005555556f;
    *(int *)(state + 0xC98) = 0;
    top = ((level + 0.53333336f) - fabsf(0.53333336f - level)) * 0.25f;
    *(float *)(state + 0xCD4) = top;
    *(int *)(state + 0xCA0) = 0;
    *(int *)(state + 0xC9C) = 0;
    index = *(int *)(state + 0xC88);
    value = *(float *)(state + 0xC8C);
    if (func_014F98(scratch, object, state + 0x30,
                    &index, &value, 0, 0)) {
        result = func_0570C8(object, index, 0.0f);
        *(float *)(state + 0xC8C) = value;
        *(int *)(state + 0xC88) = index;
        *(float *)(state + 0xC90) = result;
        *(float *)(state + 0xC94) = result + value;
    }
}
