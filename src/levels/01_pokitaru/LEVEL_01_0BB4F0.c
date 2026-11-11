extern void func_0A8CA0(unsigned int value);
extern void func_0AA790(int a, int b, void *c);
extern void func_0AD4D8(int a, int b, int c, int d, int e, unsigned int f);

extern char D_00212278[];
extern char D_00212290[];
extern char D_002122A8[];
extern char D_002122D8[];
extern char D_002122F8[];

void func_0BB4F0(char *param_1)
{
    func_0A8CA0(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0AA790(0xF0, 0x40, param_1);
    }
    func_0AA790(0xF0, 0x70, D_00212278);
    func_0AA790(0xF0, 0x88, D_00212290);
    func_0AD4D8(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0AA790(0xF0, 0xA0, D_002122A8);
    func_0AA790(0xF0, 0xB8, D_002122D8);
    func_0AA790(0xF0, 0xD0, D_002122F8);
}
