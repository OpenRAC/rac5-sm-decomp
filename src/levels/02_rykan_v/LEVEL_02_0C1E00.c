extern void func_0AF5B0(unsigned int value);
extern void func_0B10A0(int a, int b, void *c);
extern void func_0B3DE8(int a, int b, int c, int d, int e, unsigned int f);

extern char D_002271F8[];
extern char D_00227210[];
extern char D_00227228[];
extern char D_00227258[];
extern char D_00227278[];

void func_0C1E00(char *param_1)
{
    func_0AF5B0(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0B10A0(0xF0, 0x40, param_1);
    }
    func_0B10A0(0xF0, 0x70, D_002271F8);
    func_0B10A0(0xF0, 0x88, D_00227210);
    func_0B3DE8(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0B10A0(0xF0, 0xA0, D_00227228);
    func_0B10A0(0xF0, 0xB8, D_00227258);
    func_0B10A0(0xF0, 0xD0, D_00227278);
}
