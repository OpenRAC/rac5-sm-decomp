extern unsigned char D_001CCF08;
extern int D_001CCF0C;

void func_0A8320(int a0, int a1, float f12);
void func_0A7F80(int a0, void *a1, float f12);
void func_0A6D98(int a0, void *a1, int a2);

void func_0AC020(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_001CCF08 == 0)
        return;
    func_0A8320(0x0A, (D_001CCF08 << 24) | 0x00FFFFFF, 0.0f);
    if (D_001CCF0C == 0)
        return;
    func_0A7F80(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_001CCF0C) {
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
    func_0A6D98(a0, buf, (D_001CCF08 << 24) | 0x00FFFFFF);
}
