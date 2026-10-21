typedef struct {
    char pad[0x30];
    float f30;
    float f34;
    float f38;
} Obj;

void func_161C68(Obj *a0, float *a1)
{
    float *d = &a0->f30;

    a0->f30 = a0->f30 + a1[0];
    d[1] = d[1] + a1[1];
    d[2] = d[2] + a1[2];
}
