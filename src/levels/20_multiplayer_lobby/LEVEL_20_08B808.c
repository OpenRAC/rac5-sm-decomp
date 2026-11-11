extern unsigned char D_0010C9A8;
extern int D_0010C9AC;

void func_087890(int a0, int a1, float f12);
void func_0874F0(int a0, void *a1, float f12);
void func_086308(int a0, void *a1, int a2);

void func_08B808(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_0010C9A8 == 0)
        return;
    func_087890(0x0A, (D_0010C9A8 << 24) | 0x00FFFFFF, 0.0f);
    if (D_0010C9AC == 0)
        return;
    func_0874F0(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_0010C9AC) {
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
    func_086308(a0, buf, (D_0010C9A8 << 24) | 0x00FFFFFF);
}
