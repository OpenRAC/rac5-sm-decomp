typedef struct {
    int f00;
    int f04;
    int f08;
} H;

extern H *D_0020FA08;

void func_10EF88(int a0, int a1, int a2, int a3, float f12);

void func_10EF48(int a0, int a1, int *a2)
{
    int local;
    H *h = D_0020FA08;

    func_10EF88(a2 ? a2 : &local, a0, h->f08, a1, *(float *)(a1 + 0xC));
}
