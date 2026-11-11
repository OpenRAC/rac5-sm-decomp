extern unsigned char D_001CF688;
extern int D_001CF68C;

void func_0A5818(int a0, int a1, float f12);
void func_0A5478(int a0, void *a1, float f12);
void func_0A4290(int a0, void *a1, int a2);

void func_0A9588(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_001CF688 == 0)
        return;
    func_0A5818(0x0A, (D_001CF688 << 24) | 0x00FFFFFF, 0.0f);
    if (D_001CF68C == 0)
        return;
    func_0A5478(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_001CF68C) {
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
    func_0A4290(a0, buf, (D_001CF688 << 24) | 0x00FFFFFF);
}
