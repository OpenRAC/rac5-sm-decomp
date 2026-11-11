extern int D_00243230[10];
extern int D_001557A4;
extern void func_08EFD0(int id, int *out, float f);

void func_0A5898(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_08EFD0(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_00243230[0] = rect[1];
    D_00243230[7] = 0xD2;
    D_00243230[5] = cy;
    D_00243230[6] = left - D_001557A4;
    D_00243230[8] = right - D_001557A4;
    D_00243230[1] = rect[0];
    D_00243230[2] = rect[2];
    D_00243230[3] = rect[3];
    D_00243230[4] = cx;
    D_00243230[9] = 0xD2;
}
