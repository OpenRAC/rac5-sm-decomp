/* LEVEL_08:0x082D78 -- placement copy of LEVEL_04_07E1F8.c. */
typedef struct {
    float f_00;
    float f_04;
    float f_08[6];
} A;

typedef struct {
    char pad_00[0x20];
    float m[3][7];
    char pad_74[0x84 - 0x74];
    float c;
    float s;
} B;

extern float floorf(float f12);

void func_082D78(A *a0, B **a1)
{
    B *b = *a1;
    unsigned int i;
    float v0;
    float v1;

    for (i = 0; i < 3; i++) {
        v0 = a0->f_08[2 * i] + b->m[i][0];
        a0->f_08[2 * i] = v0 - floorf(v0);
        v1 = a0->f_08[2 * i + 1] + b->m[i][1];
        a0->f_08[2 * i + 1] = v1 - floorf(v1);
    }
    {
        float x = a0->f_00;
        float y = a0->f_04;
        float c = b->c;
        float s = b->s;

        a0->f_00 = c * x - s * y;
        a0->f_04 = c * y + s * x;
    }
}
