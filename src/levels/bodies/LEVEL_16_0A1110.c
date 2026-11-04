extern unsigned char D_001AA2C8;
extern int D_001AA2CC;

void func_09D198(int a0, int a1, float f12);
void func_09CDF8(int a0, void *a1, float f12);
void func_09BC10(int a0, void *a1, int a2);

void func_0A1110(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_001AA2C8 == 0)
        return;
    func_09D198(0x0A, (D_001AA2C8 << 24) | 0x00FFFFFF, 0.0f);
    if (D_001AA2CC == 0)
        return;
    func_09CDF8(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_001AA2CC) {
    case 1:
        a0 = 0x15;
        break;
    case 2:
        a0 = 0x13;
        break;
    case 3:
        a0 = 0x14;
        break;
    }
    func_09BC10(a0, buf, (D_001AA2C8 << 24) | 0x00FFFFFF);
}
