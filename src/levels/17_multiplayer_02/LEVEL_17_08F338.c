typedef struct {
    char pad0[0x08];
    float f08;
    float f0C;
} T;

extern T D_00197CE0;
extern unsigned char D_00197CF0;

void func_08F338(float a, float b)
{
    T *d;

    D_00197CF0 = 1;
    d = &D_00197CE0;
    d->f08 = a;
    d->f0C = b;
}
