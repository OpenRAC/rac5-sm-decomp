extern float cosf(float x);
extern float sinf(float x);

void func_149108(float amp, char **list, float *in, unsigned int count, float *out)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        float *pos = *(float **)(list[i] + 4);

        *pos = out[0] + amp * cosf(in[i]);
        pos = *(float **)(list[i] + 4);
        pos[1] = out[2] + amp * sinf(in[i]);
    }
}
