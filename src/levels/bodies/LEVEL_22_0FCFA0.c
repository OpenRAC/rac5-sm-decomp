/* LEVEL_03.REL:0x122130 -- builds the 4x4 rotation about X. */
typedef struct { float m[16]; } MATRIX;

extern float sinf(float);
extern float cosf(float);

void func_0FCFA0(MATRIX *m, float a)
{
    float s = sinf(a);
    float c = cosf(a);

    m->m[0] = 1.0f;
    m->m[1] = 0.0f;
    m->m[2] = 0.0f;
    m->m[3] = 0.0f;
    m->m[4] = 0.0f;
    m->m[5] = c;
    m->m[6] = s;
    m->m[7] = 0.0f;
    m->m[8] = 0.0f;
    m->m[9] = -s;
    m->m[10] = c;
    m->m[11] = 0.0f;
    m->m[12] = 0.0f;
    m->m[13] = 0.0f;
    m->m[14] = 0.0f;
    m->m[15] = 1.0f;
}
