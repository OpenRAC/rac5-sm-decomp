typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} V;

extern double func_1BE780(float value);
extern void func_1BE490(double value);
extern double sqrt(double value);

void func_114000(V *p)
{
    float d = p->f0C * p->f0C + p->f00 * p->f00 + p->f04 * p->f04
        + p->f08 * p->f08;

    func_1BE490(sqrt(func_1BE780(d)));
}
