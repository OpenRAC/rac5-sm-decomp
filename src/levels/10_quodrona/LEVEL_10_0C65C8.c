extern int D_00334DF0[10];
extern int D_00209B24;
extern void func_0AF820(int id, int *out, float f);

void func_0C65C8(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0AF820(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_00334DF0[0] = rect[1];
    D_00334DF0[7] = 0xD2;
    D_00334DF0[5] = cy;
    D_00334DF0[6] = left - D_00209B24;
    D_00334DF0[8] = right - D_00209B24;
    D_00334DF0[1] = rect[0];
    D_00334DF0[2] = rect[2];
    D_00334DF0[3] = rect[3];
    D_00334DF0[4] = cx;
    D_00334DF0[9] = 0xD2;
}
