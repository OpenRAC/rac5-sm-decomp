extern unsigned char D_00205288;
extern int D_0020528C;

void func_0AFBC0(int a0, int a1, float f12);
void func_0AF820(int a0, void *a1, float f12);
void func_0AE638(int a0, void *a1, int a2);

void func_0B3980(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_00205288 == 0)
        return;
    func_0AFBC0(0x0A, (D_00205288 << 24) | 0x00FFFFFF, 0.0f);
    if (D_0020528C == 0)
        return;
    func_0AF820(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_0020528C) {
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
    func_0AE638(a0, buf, (D_00205288 << 24) | 0x00FFFFFF);
}
