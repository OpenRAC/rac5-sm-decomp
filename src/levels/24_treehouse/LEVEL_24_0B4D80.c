extern void func_0A2518(unsigned int value);
extern void func_0A4008(int a, int b, void *c);
extern void func_0A6D50(int a, int b, int c, int d, int e, unsigned int f);

extern char D_001E2FF8[];
extern char D_001E3010[];
extern char D_001E3028[];
extern char D_001E3058[];
extern char D_001E3078[];

void func_0B4D80(char *param_1)
{
    func_0A2518(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0A4008(0xF0, 0x40, param_1);
    }
    func_0A4008(0xF0, 0x70, D_001E2FF8);
    func_0A4008(0xF0, 0x88, D_001E3010);
    func_0A6D50(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0A4008(0xF0, 0xA0, D_001E3028);
    func_0A4008(0xF0, 0xB8, D_001E3058);
    func_0A4008(0xF0, 0xD0, D_001E3078);
}
