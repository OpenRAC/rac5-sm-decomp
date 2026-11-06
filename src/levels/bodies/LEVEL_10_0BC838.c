extern void func_0A9DB8(unsigned int value);
extern void func_0AB8A8(int a, int b, void *c);
extern void func_0AE5F0(int a, int b, int c, int d, int e, unsigned int f);

extern char D_0021B1F8[];
extern char D_0021B210[];
extern char D_0021B228[];
extern char D_0021B258[];
extern char D_0021B278[];

void func_0BC838(char *param_1)
{
    func_0A9DB8(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0AB8A8(0xF0, 0x40, param_1);
    }
    func_0AB8A8(0xF0, 0x70, D_0021B1F8);
    func_0AB8A8(0xF0, 0x88, D_0021B210);
    func_0AE5F0(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0AB8A8(0xF0, 0xA0, D_0021B228);
    func_0AB8A8(0xF0, 0xB8, D_0021B258);
    func_0AB8A8(0xF0, 0xD0, D_0021B278);
}
