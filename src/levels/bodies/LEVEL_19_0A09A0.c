extern unsigned char D_001AB448;
extern int D_001AB44C;

void func_09CA28(int a0, int a1, float f12);
void func_09C688(int a0, void *a1, float f12);
void func_09B4A0(int a0, void *a1, int a2);

void func_0A09A0(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_001AB448 == 0)
        return;
    func_09CA28(0x0A, (D_001AB448 << 24) | 0x00FFFFFF, 0.0f);
    if (D_001AB44C == 0)
        return;
    func_09C688(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_001AB44C) {
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
    func_09B4A0(a0, buf, (D_001AB448 << 24) | 0x00FFFFFF);
}
