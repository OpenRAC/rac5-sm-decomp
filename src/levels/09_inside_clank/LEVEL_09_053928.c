typedef struct {
    char pad0[0x68];
    float f_68;
    float f_6C;
    float f_70;
    float f_74;
    float f_78;
} Src;

extern float D_001F8538[5];

void func_053928(float *a0, Src *a1)
{
    float *d = a0;
    float *s = D_001F8538;
    int n;

    for (n = 4; n >= 0; n--) {
        *d = *s;
        s++;
        d++;
    }
    if (a1->f_68 != -1000.0f)
        a0[0] = a1->f_68;
    if (a1->f_6C != -1000.0f)
        a0[1] = a1->f_6C;
    if (a1->f_70 != -1000.0f)
        a0[2] = a1->f_70;
    a0[3] = a1->f_74 * 3.14159274f / 180.0f;
    a0[4] = a1->f_78 * 3.14159274f / 180.0f;
}
