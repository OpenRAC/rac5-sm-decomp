extern unsigned char D_0015B608;
extern int D_0015B60C;

void func_09D0B8(int a0, int a1, float f12);
void func_09CD18(int a0, void *a1, float f12);
void func_09BB30(int a0, void *a1, int a2);

void func_0A0E28(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_0015B608 == 0)
        return;
    func_09D0B8(0x0A, (D_0015B608 << 24) | 0x00FFFFFF, 0.0f);
    if (D_0015B60C == 0)
        return;
    func_09CD18(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_0015B60C) {
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
    func_09BB30(a0, buf, (D_0015B608 << 24) | 0x00FFFFFF);
}
