extern int D_0019D170[10];
extern int D_0011127C;
extern void func_0874F0(int id, int *out, float f);

void func_09EC90(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0874F0(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_0019D170[0] = rect[1];
    D_0019D170[7] = 0xD2;
    D_0019D170[5] = cy;
    D_0019D170[6] = left - D_0011127C;
    D_0019D170[8] = right - D_0011127C;
    D_0019D170[1] = rect[0];
    D_0019D170[2] = rect[2];
    D_0019D170[3] = rect[3];
    D_0019D170[4] = cx;
    D_0019D170[9] = 0xD2;
}
