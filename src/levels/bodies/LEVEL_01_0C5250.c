/* LEVEL_01:0x0C5250 -- placement copy of LEVEL_02_0CBB60.c. */
extern int D_0032B9F0[10];
extern int D_00200B24;
extern void func_0AE708(int id, int *out, float f);

void func_0C5250(void)
{
    int rect[4];
    int cx;
    int cy;
    int left;
    int right;

    func_0AE708(0x20A, rect, 0.0f);
    cx = (rect[2] - rect[0]) / 2 + rect[0];
    cy = (rect[3] - rect[1]) / 2 + rect[1];
    right = rect[2] - cx;
    left = cx - rect[0];
    left += 0x100;
    right += 0x100;
    D_0032B9F0[0] = rect[1];
    D_0032B9F0[7] = 0xD2;
    D_0032B9F0[5] = cy;
    D_0032B9F0[6] = left - D_00200B24;
    D_0032B9F0[8] = right - D_00200B24;
    D_0032B9F0[1] = rect[0];
    D_0032B9F0[2] = rect[2];
    D_0032B9F0[3] = rect[3];
    D_0032B9F0[4] = cx;
    D_0032B9F0[9] = 0xD2;
}
