extern void func_096BF0(unsigned int value);
extern void func_098710(int a, int b, void *c);
extern void func_09B458(int a, int b, int c, int d, int e, unsigned int f);

extern char D_001C81B8[];
extern char D_001C81D0[];
extern char D_001C81E8[];
extern char D_001C8218[];
extern char D_001C8238[];

void func_0A9E18(char *param_1)
{
    func_096BF0(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_098710(0xF0, 0x40, param_1);
    }
    func_098710(0xF0, 0x70, D_001C81B8);
    func_098710(0xF0, 0x88, D_001C81D0);
    func_09B458(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_098710(0xF0, 0xA0, D_001C81E8);
    func_098710(0xF0, 0xB8, D_001C8218);
    func_098710(0xF0, 0xD0, D_001C8238);
}
