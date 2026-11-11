extern int D_00318770[10];
extern int D_001EFA24;
extern void func_0A8ED8(int id, int *out, float f);

void func_0BFB50(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0A8ED8(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_00318770[0] = rect[1];
    D_00318770[7] = 0xD2;
    D_00318770[5] = cy;
    D_00318770[6] = left - D_001EFA24;
    D_00318770[8] = right - D_001EFA24;
    D_00318770[1] = rect[0];
    D_00318770[2] = rect[2];
    D_00318770[3] = rect[3];
    D_00318770[4] = cx;
    D_00318770[9] = 0xD2;
}
