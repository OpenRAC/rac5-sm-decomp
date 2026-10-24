typedef struct {
    char pad[0x04];
    float f04;
} S;

typedef struct {
    float f00;
} S2;

int func_013928(void *a0, float *a1, int a2, int a3, int t0);

void func_0138D0(S *a0, S2 *a1, int a2)
{
    float buf[2];

    if (func_013928(a0, buf, a2, 0x38, 0))
        a0->f04 = buf[0];
    if (a1)
        a1->f00 = buf[0];
}
