extern int D_00279CB0[10];
extern int D_001B001C;
extern void func_09BE08(int id, int *out, float f);

void func_0B3738(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_09BE08(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_00279CB0[0] = rect[1];
    D_00279CB0[7] = 0xD2;
    D_00279CB0[5] = cy;
    D_00279CB0[6] = left - D_001B001C;
    D_00279CB0[8] = right - D_001B001C;
    D_00279CB0[1] = rect[0];
    D_00279CB0[2] = rect[2];
    D_00279CB0[3] = rect[3];
    D_00279CB0[4] = cx;
    D_00279CB0[9] = 0xD2;
}
