extern void func_0B35D8(unsigned int value);
extern void func_0B50C8(int a, int b, void *c);
extern void func_0B7E10(int a, int b, int c, int d, int e, unsigned int f);

extern char D_0025BEF8[];
extern char D_0025BF10[];
extern char D_0025BF28[];
extern char D_0025BF58[];
extern char D_0025BF78[];

void func_0C63E0(char *param_1)
{
    func_0B35D8(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0B50C8(0xF0, 0x40, param_1);
    }
    func_0B50C8(0xF0, 0x70, D_0025BEF8);
    func_0B50C8(0xF0, 0x88, D_0025BF10);
    func_0B7E10(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0B50C8(0xF0, 0xA0, D_0025BF28);
    func_0B50C8(0xF0, 0xB8, D_0025BF58);
    func_0B50C8(0xF0, 0xD0, D_0025BF78);
}
