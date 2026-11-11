extern unsigned char D_001AB748;
extern int D_001AB74C;

void func_09C1A8(int a0, int a1, float f12);
void func_09BE08(int a0, void *a1, float f12);
void func_09AC20(int a0, void *a1, int a2);

void func_0A0120(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_001AB748 == 0)
        return;
    func_09C1A8(0x0A, (D_001AB748 << 24) | 0x00FFFFFF, 0.0f);
    if (D_001AB74C == 0)
        return;
    func_09BE08(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_001AB74C) {
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
    func_09AC20(a0, buf, (D_001AB748 << 24) | 0x00FFFFFF);
}
