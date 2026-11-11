extern int D_00342EF0[10];
extern int D_00215AE4;
extern void func_0B5018(int id, int *out, float f);

void func_0CBB60(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0B5018(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_00342EF0[0] = rect[1];
    D_00342EF0[7] = 0xD2;
    D_00342EF0[5] = cy;
    D_00342EF0[6] = left - D_00215AE4;
    D_00342EF0[8] = right - D_00215AE4;
    D_00342EF0[1] = rect[0];
    D_00342EF0[2] = rect[2];
    D_00342EF0[3] = rect[3];
    D_00342EF0[4] = cx;
    D_00342EF0[9] = 0xD2;
}
