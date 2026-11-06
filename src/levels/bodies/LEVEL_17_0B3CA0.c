extern int D_0026AC30[10];
extern int D_001A219C;
extern void func_09C2F0(int id, int *out, float f);

void func_0B3CA0(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_09C2F0(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_0026AC30[0] = rect[1];
    D_0026AC30[7] = 0xD2;
    D_0026AC30[5] = cy;
    D_0026AC30[6] = left - D_001A219C;
    D_0026AC30[8] = right - D_001A219C;
    D_0026AC30[1] = rect[0];
    D_0026AC30[2] = rect[2];
    D_0026AC30[3] = rect[3];
    D_0026AC30[4] = cx;
    D_0026AC30[9] = 0xD2;
}
