extern unsigned char D_001E6088;
extern int D_001E608C;

void func_0ABD58(int a0, int a1, float f12);
void func_0AB9B8(int a0, void *a1, float f12);
void func_0AA7D0(int a0, void *a1, int a2);

void func_0AFA58(void)
{
    float buf[4];
    int a0;

    if (*(int *)&D_001E6088 == 0)
        return;
    func_0ABD58(0x0A, (D_001E6088 << 24) | 0x00FFFFFF, 0.0f);
    if (D_001E608C == 0)
        return;
    func_0AB9B8(0x3E, buf, 0.0f);
    a0 = 0;
    switch (D_001E608C) {
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
    func_0AA7D0(a0, buf, (D_001E6088 << 24) | 0x00FFFFFF);
}
