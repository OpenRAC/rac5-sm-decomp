extern void func_0A8A20(unsigned int value);
extern void func_0AA510(int a, int b, void *c);
extern void func_0AD258(int a, int b, int c, int d, int e, unsigned int f);

extern char D_0022B178[];
extern char D_0022B190[];
extern char D_0022B1A8[];
extern char D_0022B1D8[];
extern char D_0022B1F8[];

void func_0BB2D8(char *param_1)
{
    func_0A8A20(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0AA510(0xF0, 0x40, param_1);
    }
    func_0AA510(0xF0, 0x70, D_0022B178);
    func_0AA510(0xF0, 0x88, D_0022B190);
    func_0AD258(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0AA510(0xF0, 0xA0, D_0022B1A8);
    func_0AA510(0xF0, 0xB8, D_0022B1D8);
    func_0AA510(0xF0, 0xD0, D_0022B1F8);
}
