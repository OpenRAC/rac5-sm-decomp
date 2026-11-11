typedef struct {
    float value;
    unsigned char flag;
} Rec;

extern Rec D_003EB780;

void f(float a)
{
    float v;

    if (D_003EB780.flag)
        return;
    v = D_003EB780.value + a;
    D_003EB780.value = v;
    if (v > 15.0f)
        D_003EB780.flag = 1;
}
