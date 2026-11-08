extern void func_0A5140(int, int, int, int, unsigned int, unsigned int);

void func_0AC230(short x, short y, short right, short bottom, unsigned int color)
{
    int width = right - x;
    int height;

    if (width >= 0x1E1 || (height = bottom - y) >= 0x111) {
        func_0A5140(x, y, (short)width, (short)(bottom - y), color,
                    0xFFFFFF);
        return;
    }
    func_0A5140(x, y, (short)width, (short)height, color, 0xFFFFFF);
}
