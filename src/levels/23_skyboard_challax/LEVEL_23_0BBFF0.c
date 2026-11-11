extern int D_002FCE30[10];
extern int D_001D3F24;
extern void func_0A5478(int id, int *out, float f);

void func_0BBFF0(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0A5478(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_002FCE30[0] = rect[1];
    D_002FCE30[7] = 0xD2;
    D_002FCE30[5] = cy;
    D_002FCE30[6] = left - D_001D3F24;
    D_002FCE30[8] = right - D_001D3F24;
    D_002FCE30[1] = rect[0];
    D_002FCE30[2] = rect[2];
    D_002FCE30[3] = rect[3];
    D_002FCE30[4] = cx;
    D_002FCE30[9] = 0xD2;
}
