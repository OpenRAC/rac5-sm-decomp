extern void func_0972B0(unsigned int value);
extern void func_098DA0(int a, int b, void *c);
extern void func_09BAE8(int a, int b, int c, int d, int e, unsigned int f);

extern char D_0016F6F8[];
extern char D_0016F710[];
extern char D_0016F728[];
extern char D_0016F758[];
extern char D_0016F778[];

void func_0A9998(char *param_1)
{
    func_0972B0(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_098DA0(0xF0, 0x40, param_1);
    }
    func_098DA0(0xF0, 0x70, D_0016F6F8);
    func_098DA0(0xF0, 0x88, D_0016F710);
    func_09BAE8(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_098DA0(0xF0, 0xA0, D_0016F728);
    func_098DA0(0xF0, 0xB8, D_0016F758);
    func_098DA0(0xF0, 0xD0, D_0016F778);
}
