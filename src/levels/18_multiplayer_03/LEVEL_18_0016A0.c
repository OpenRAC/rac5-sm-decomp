typedef struct {
    float f00;
    float f04;
    char pad[0x08];
    int f10;
} S;

void func_0015A8(void *a0, float f12, float f13);

void func_0016A0(S *a0, float f12)
{
    switch (a0->f10) {
    case 0:
        func_0015A8(a0, f12, a0->f04);
        break;
    case 1:
        a0->f00 = a0->f00 + f12 * a0->f04;
        break;
    }
}
