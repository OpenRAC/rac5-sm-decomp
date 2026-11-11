typedef struct {
    float f00;
    float f04;
} T;

extern T D_0020B6D0;
extern unsigned char D_0020B6E0;

void func_0A73B0(float a, float b)
{
    T *d;

    D_0020B6E0 = 1;
    d = &D_0020B6D0;
    d->f00 = a;
    d->f04 = b;
}
