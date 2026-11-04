extern unsigned char D_001EB188;
extern int D_001EB18C;

void func_0A9278(int a0, int a1, float f12);
void func_0A8ED8(int a0, void *a1, float f12);
void func_0A7CF0(int a0, void *a1, int a2);

void func_0ACFE8(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_001EB188 == 0)
        return;
    func_0A9278(0x0A, (D_001EB188 << 24) | 0x00FFFFFF, 0.0f);
    if (D_001EB18C == 0)
        return;
    func_0A8ED8(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_001EB18C) {
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
    func_0A7CF0(a0, buf, (D_001EB188 << 24) | 0x00FFFFFF);
}
