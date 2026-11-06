extern void func_0AACA0(unsigned int value);
extern void func_0AC790(int a, int b, void *c);
extern void func_0AF4D8(int a, int b, int c, int d, int e, unsigned int f);

extern char D_00226F78[];
extern char D_00226F90[];
extern char D_00226FA8[];
extern char D_00226FD8[];
extern char D_00226FF8[];

void func_0BD550(char *param_1)
{
    func_0AACA0(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0AC790(0xF0, 0x40, param_1);
    }
    func_0AC790(0xF0, 0x70, D_00226F78);
    func_0AC790(0xF0, 0x88, D_00226F90);
    func_0AF4D8(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0AC790(0xF0, 0xA0, D_00226FA8);
    func_0AC790(0xF0, 0xB8, D_00226FD8);
    func_0AC790(0xF0, 0xD0, D_00226FF8);
}
