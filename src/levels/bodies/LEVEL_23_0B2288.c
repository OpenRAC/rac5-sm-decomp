extern void func_09FA10(unsigned int value);
extern void func_0A1500(int a, int b, void *c);
extern void func_0A4248(int a, int b, int c, int d, int e, unsigned int f);

extern char D_001E53F8[];
extern char D_001E5410[];
extern char D_001E5428[];
extern char D_001E5458[];
extern char D_001E5478[];

void func_0B2288(char *param_1)
{
    func_09FA10(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0A1500(0xF0, 0x40, param_1);
    }
    func_0A1500(0xF0, 0x70, D_001E53F8);
    func_0A1500(0xF0, 0x88, D_001E5410);
    func_0A4248(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0A1500(0xF0, 0xA0, D_001E5428);
    func_0A1500(0xF0, 0xB8, D_001E5458);
    func_0A1500(0xF0, 0xD0, D_001E5478);
}
