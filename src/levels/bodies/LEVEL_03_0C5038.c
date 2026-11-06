extern int D_00346870[10];
extern int D_002191A4;
extern void func_0AE488(int id, int *out, float f);

void func_0C5038(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0AE488(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_00346870[0] = rect[1];
    D_00346870[7] = 0xD2;
    D_00346870[5] = cy;
    D_00346870[6] = left - D_002191A4;
    D_00346870[8] = right - D_002191A4;
    D_00346870[1] = rect[0];
    D_00346870[2] = rect[2];
    D_00346870[3] = rect[3];
    D_00346870[4] = cx;
    D_00346870[9] = 0xD2;
}
