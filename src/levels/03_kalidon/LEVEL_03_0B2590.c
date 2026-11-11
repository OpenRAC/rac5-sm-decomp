extern unsigned char D_00214908;
extern int D_0021490C;

void func_0AE828(int a0, int a1, float f12);
void func_0AE488(int a0, void *a1, float f12);
void func_0AD2A0(int a0, void *a1, int a2);

void func_0B2590(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_00214908 == 0)
        return;
    func_0AE828(0x0A, (D_00214908 << 24) | 0x00FFFFFF, 0.0f);
    if (D_0021490C == 0)
        return;
    func_0AE488(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_0021490C) {
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
    func_0AD2A0(a0, buf, (D_00214908 << 24) | 0x00FFFFFF);
}
