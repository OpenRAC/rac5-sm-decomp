extern unsigned char D_00211248;
extern int D_0021124C;

void func_0B53B8(int a0, int a1, float f12);
void func_0B5018(int a0, void *a1, float f12);
void func_0B3E30(int a0, void *a1, int a2);

void func_0B90B8(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_00211248 == 0)
        return;
    func_0B53B8(0x0A, (D_00211248 << 24) | 0x00FFFFFF, 0.0f);
    if (D_0021124C == 0)
        return;
    func_0B5018(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_0021124C) {
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
    func_0B3E30(a0, buf, (D_00211248 << 24) | 0x00FFFFFF);
}
