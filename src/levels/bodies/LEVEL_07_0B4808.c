extern unsigned char D_00210588;
extern int D_0021058C;

void func_0B0AA8(int a0, int a1, float f12);
void func_0B0708(int a0, void *a1, float f12);
void func_0AF520(int a0, void *a1, int a2);

void func_0B4808(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_00210588 == 0)
        return;
    func_0B0AA8(0x0A, (D_00210588 << 24) | 0x00FFFFFF, 0.0f);
    if (D_0021058C == 0)
        return;
    func_0B0708(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_0021058C) {
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
    func_0AF520(a0, buf, (D_00210588 << 24) | 0x00FFFFFF);
}
