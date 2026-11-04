typedef struct {
    float f_00;
    float f_04;
} Obj;

extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

void func_120068(Obj *a0)
{
    float a = (float)rand() * 2.9258362e-09f + -3.1415927f;
    float c = cosf(a);
    float s = __builtin_sqrtf(1.0f - c * c);

    if (a < 0.0f)
        s = -s;
    a0->f_00 = c;
    a0->f_04 = s;
}
