extern unsigned char D_001FC288;
extern int D_001FC28C;

void func_0AEAA8(int a0, int a1, float f12);
void func_0AE708(int a0, void *a1, float f12);
void func_0AD520(int a0, void *a1, int a2);

void func_0B27A8(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_001FC288 == 0)
        return;
    func_0AEAA8(0x0A, (D_001FC288 << 24) | 0x00FFFFFF, 0.0f);
    if (D_001FC28C == 0)
        return;
    func_0AE708(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_001FC28C) {
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
    func_0AD520(a0, buf, (D_001FC288 << 24) | 0x00FFFFFF);
}
