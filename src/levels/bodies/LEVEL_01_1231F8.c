typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} V;

int func_1EB340(float f12);
int func_000000(int a0);
void func_1EB050(int a0);

void func_1231F8(V *a0)
{
    float a = a0->f00 * a0->f00;
    float b = a0->f04 * a0->f04;
    float c = a0->f08 * a0->f08;
    float d = a0->f0C * a0->f0C;
    float s = d + a;

    s = s + b;
    s = s + c;
    func_1EB050(func_000000(func_1EB340(s)));
}
