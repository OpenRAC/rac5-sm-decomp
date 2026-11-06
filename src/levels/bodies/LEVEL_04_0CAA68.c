extern int D_003461F0[10];
extern int D_00219FE4;
extern void func_0B3958(int id, int *out, float f);

void func_0CAA68(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0B3958(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_003461F0[0] = rect[1];
    D_003461F0[7] = 0xD2;
    D_003461F0[5] = cy;
    D_003461F0[6] = left - D_00219FE4;
    D_003461F0[8] = right - D_00219FE4;
    D_003461F0[1] = rect[0];
    D_003461F0[2] = rect[2];
    D_003461F0[3] = rect[3];
    D_003461F0[4] = cx;
    D_003461F0[9] = 0xD2;
}
