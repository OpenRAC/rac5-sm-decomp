extern void func_0A7260(unsigned int value);
extern void func_0A8D50(int a, int b, void *c);
extern void func_0ABA98(int a, int b, int c, int d, int e, unsigned int f);

extern char D_00201178[];
extern char D_00201190[];
extern char D_002011A8[];
extern char D_002011D8[];
extern char D_002011F8[];

void func_0B9A98(char *param_1)
{
    func_0A7260(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0A8D50(0xF0, 0x40, param_1);
    }
    func_0A8D50(0xF0, 0x70, D_00201178);
    func_0A8D50(0xF0, 0x88, D_00201190);
    func_0ABA98(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0A8D50(0xF0, 0xA0, D_002011A8);
    func_0A8D50(0xF0, 0xB8, D_002011D8);
    func_0A8D50(0xF0, 0xD0, D_002011F8);
}
