extern char D_0022CDF8[];
extern void func_0EB5D8(int first, void *third, void *data, void *second,
                         float f0, float f1, float f2, float f3,
                         float f4, float f5, float f6,
                         int fifth, int sixth, float f7,
                         int seventh, int eighth,
                         int ninth, void *original);

void func_0E68E8(void *first, void *second, void *third, float scale)
{
    float width = scale * 30.0f;
    func_0EB5D8(1, third, D_0022CDF8, second,
                 0.05f, 0.0f, width, width, 0.05f, 0.0f, 1.0f,
                 1, 0x30, 0.0f, 1, 0, 0, first);
}
