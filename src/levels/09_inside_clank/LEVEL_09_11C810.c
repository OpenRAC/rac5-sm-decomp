typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec4;

float func_11C7B8(Vec4 *a0);

void func_11C810(Vec4 *a0)
{
    float s = 1.0f / func_11C7B8(a0);
    a0->f_0C = a0->f_0C * s;
    a0->f_00 = a0->f_00 * s;
    a0->f_04 = a0->f_04 * s;
    a0->f_08 = a0->f_08 * s;
}
