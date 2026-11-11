typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} V;

extern double func_1EB340(float value);
extern double sqrt(double value);
extern void func_1EB050(double value);

void func_1231F8(V *a0)
{
    float a = a0->f00 * a0->f00;
    float b = a0->f04 * a0->f04;
    float c = a0->f08 * a0->f08;
    float d = a0->f0C * a0->f0C;
    float s = d + a;

    s = s + b;
    s = s + c;
    func_1EB050(sqrt(func_1EB340(s)));
}
