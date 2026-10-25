extern unsigned char D_00150F08;
extern int D_00150F0C;

void func_08F370(int a0, int a1, float f12);
void func_08EFD0(int a0, void *a1, float f12);
void func_08DDE8(int a0, void *a1, int a2);

void func_093070(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_00150F08 == 0)
        return;
    func_08F370(0x0A, (D_00150F08 << 24) | 0x00FFFFFF, 0.0f);
    if (D_00150F0C == 0)
        return;
    func_08EFD0(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_00150F0C) {
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
    func_08DDE8(a0, buf, (D_00150F08 << 24) | 0x00FFFFFF);
}
