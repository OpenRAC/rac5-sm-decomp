extern int D_00313170[10];
extern int D_001EA924;
extern void func_0AB9B8(int id, int *out, float f);

void func_0C2500(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0AB9B8(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_00313170[0] = rect[1];
    D_00313170[7] = 0xD2;
    D_00313170[5] = cy;
    D_00313170[6] = left - D_001EA924;
    D_00313170[8] = right - D_001EA924;
    D_00313170[1] = rect[0];
    D_00313170[2] = rect[2];
    D_00313170[3] = rect[3];
    D_00313170[4] = cx;
    D_00313170[9] = 0xD2;
}
