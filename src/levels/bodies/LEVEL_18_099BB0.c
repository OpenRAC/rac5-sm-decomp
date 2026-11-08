extern void func_093540(int, int, int, int, unsigned int, unsigned int);

void func_099BB0(short x, short y, short right, short bottom, unsigned int color)
{
    int width = right - x;
    int height;

    if (width >= 0x1E1 || (height = bottom - y) >= 0x111) {
        func_093540(x, y, (short)width, (short)(bottom - y), color,
                    0xFFFFFF);
        return;
    }
    func_093540(x, y, (short)width, (short)height, color, 0xFFFFFF);
}
