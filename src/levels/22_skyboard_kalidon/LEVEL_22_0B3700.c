extern int D_002815B0[10];
extern int D_0015FEA4;
extern void func_09CD18(int id, int *out, float f);

void func_0B3700(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_09CD18(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_002815B0[0] = rect[1];
    D_002815B0[7] = 0xD2;
    D_002815B0[5] = cy;
    D_002815B0[6] = left - D_0015FEA4;
    D_002815B0[8] = right - D_0015FEA4;
    D_002815B0[1] = rect[0];
    D_002815B0[2] = rect[2];
    D_002815B0[3] = rect[3];
    D_002815B0[4] = cx;
    D_002815B0[9] = 0xD2;
}
