typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} V4;

float func_119150(void);

void func_1191A8(V4 *a0)
{
    float s = 1.0f / func_119150();

    a0->f0C = a0->f0C * s;
    a0->f00 = a0->f00 * s;
    a0->f04 = a0->f04 * s;
    a0->f08 = a0->f08 * s;
}
