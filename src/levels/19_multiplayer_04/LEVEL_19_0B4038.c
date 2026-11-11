extern int D_00279AB0[10];
extern int D_001AFD1C;
extern void func_09C688(int id, int *out, float f);

void func_0B4038(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_09C688(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_00279AB0[0] = rect[1];
    D_00279AB0[7] = 0xD2;
    D_00279AB0[5] = cy;
    D_00279AB0[6] = left - D_001AFD1C;
    D_00279AB0[8] = right - D_001AFD1C;
    D_00279AB0[1] = rect[0];
    D_00279AB0[2] = rect[2];
    D_00279AB0[3] = rect[3];
    D_00279AB0[4] = cx;
    D_00279AB0[9] = 0xD2;
}
