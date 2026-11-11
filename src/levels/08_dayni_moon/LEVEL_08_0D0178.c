extern int D_0037AC70[10];
extern int D_002499E4;
extern void func_0B9040(int id, int *out, float f);

void func_0D0178(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0B9040(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_0037AC70[0] = rect[1];
    D_0037AC70[7] = 0xD2;
    D_0037AC70[5] = cy;
    D_0037AC70[6] = left - D_002499E4;
    D_0037AC70[8] = right - D_002499E4;
    D_0037AC70[1] = rect[0];
    D_0037AC70[2] = rect[2];
    D_0037AC70[3] = rect[3];
    D_0037AC70[4] = cx;
    D_0037AC70[9] = 0xD2;
}
