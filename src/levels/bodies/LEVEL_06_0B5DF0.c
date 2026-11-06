extern void func_0A3470(unsigned int value);
extern void func_0A4F60(int a, int b, void *c);
extern void func_0A7CA8(int a, int b, int c, int d, int e, unsigned int f);

extern char D_002010F8[];
extern char D_00201110[];
extern char D_00201128[];
extern char D_00201158[];
extern char D_00201178[];

void func_0B5DF0(char *param_1)
{
    func_0A3470(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0A4F60(0xF0, 0x40, param_1);
    }
    func_0A4F60(0xF0, 0x70, D_002010F8);
    func_0A4F60(0xF0, 0x88, D_00201110);
    func_0A7CA8(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0A4F60(0xF0, 0xA0, D_00201128);
    func_0A4F60(0xF0, 0xB8, D_00201158);
    func_0A4F60(0xF0, 0xD0, D_00201178);
}
