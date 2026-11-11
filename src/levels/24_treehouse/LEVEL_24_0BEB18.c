extern int D_002F78B0[10];
extern int D_001D17A4;
extern void func_0A7F80(int id, int *out, float f);

void func_0BEB18(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0A7F80(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_002F78B0[0] = rect[1];
    D_002F78B0[7] = 0xD2;
    D_002F78B0[5] = cy;
    D_002F78B0[6] = left - D_001D17A4;
    D_002F78B0[8] = right - D_001D17A4;
    D_002F78B0[1] = rect[0];
    D_002F78B0[2] = rect[2];
    D_002F78B0[3] = rect[3];
    D_002F78B0[4] = cx;
    D_002F78B0[9] = 0xD2;
}
