typedef struct {
    float f_00;
    float f_04;
} Obj;

extern int rnd(void) __asm__("func_000000");
extern float call_f(float x) __asm__("func_000000");
extern float sqrtf(float x) __asm__("func_000000");

void func_120068(Obj *a0)
{
    float a = (float)rnd() * 2.9258362e-09f + -3.1415927f;
    float c = call_f(a);
    float s = __builtin_sqrtf(1.0f - c * c);

    if (a < 0.0f)
        s = -s;
    a0->f_00 = c;
    a0->f_04 = s;
}
