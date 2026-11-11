typedef struct { float f00; float f04; float f08; float f0C; } Vec;
float func_1294D8(void *a);
void func_129530(Vec *a0)
{
    float k;
    float t0;
    float t1;
    float t2;
    float t3;
    k = 1.0f / func_1294D8(a0);
    t0 = a0->f0C * k;
    t1 = a0->f00 * k;
    t2 = a0->f04 * k;
    t3 = a0->f08 * k;
    a0->f0C = t0;
    a0->f00 = t1;
    a0->f04 = t2;
    a0->f08 = t3;
}
