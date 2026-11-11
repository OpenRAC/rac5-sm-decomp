extern int D_00279930[10];
extern int D_001AEB9C;
extern void func_09CDF8(int id, int *out, float f);

void func_0B4760(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_09CDF8(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_00279930[0] = rect[1];
    D_00279930[7] = 0xD2;
    D_00279930[5] = cy;
    D_00279930[6] = left - D_001AEB9C;
    D_00279930[8] = right - D_001AEB9C;
    D_00279930[1] = rect[0];
    D_00279930[2] = rect[2];
    D_00279930[3] = rect[3];
    D_00279930[4] = cx;
    D_00279930[9] = 0xD2;
}
