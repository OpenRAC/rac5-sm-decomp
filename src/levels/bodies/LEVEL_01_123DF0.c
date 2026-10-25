/* LEVEL_01.REL:0x123DF0 -- builds the 4x4 rotation about X. */
typedef struct { float m[16]; } MATRIX;

extern float func_000000(float);

void func_123DF0(MATRIX *m, float a)
{
    float s = func_000000(a);
    float c = func_000000(a);

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
