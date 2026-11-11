extern unsigned char D_0019D8C8;
extern int D_0019D8CC;

void func_09C690(int a0, int a1, float f12);
void func_09C2F0(int a0, void *a1, float f12);
void func_09B108(int a0, void *a1, int a2);

void func_0A0608(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_0019D8C8 == 0)
        return;
    func_09C690(0x0A, (D_0019D8C8 << 24) | 0x00FFFFFF, 0.0f);
    if (D_0019D8CC == 0)
        return;
    func_09C2F0(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_0019D8CC) {
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
    func_09B108(a0, buf, (D_0019D8C8 << 24) | 0x00FFFFFF);
}
