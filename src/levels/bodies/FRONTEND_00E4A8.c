/* FRONTEND:0x00E4A8 -- placement copy of LEVEL_01_0AC4B0.c. */
extern void func_00A150(int, int, int, int, unsigned int, unsigned int);

void func_00E4A8(short x, short y, short right, short bottom, unsigned int color)
{
    int width = right - x;
    int height;

    if (width >= 0x1E1 || (height = bottom - y) >= 0x111) {
        func_00A150(x, y, (short)width, (short)(bottom - y), color,
                    0xFFFFFF);
        return;
    }
    func_00A150(x, y, (short)width, (short)height, color, 0xFFFFFF);
}
