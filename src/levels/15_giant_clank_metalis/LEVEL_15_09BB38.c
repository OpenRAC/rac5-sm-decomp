extern void func_089568(unsigned int value);
extern void func_08B058(int a, int b, void *c);
extern void func_08DDA0(int a, int b, int c, int d, int e, unsigned int f);

extern char D_001669F8[];
extern char D_00166A10[];
extern char D_00166A28[];
extern char D_00166A58[];
extern char D_00166A78[];

void func_09BB38(char *param_1)
{
    func_089568(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_08B058(0xF0, 0x40, param_1);
    }
    func_08B058(0xF0, 0x70, D_001669F8);
    func_08B058(0xF0, 0x88, D_00166A10);
    func_08DDA0(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_08B058(0xF0, 0xA0, D_00166A28);
    func_08B058(0xF0, 0xB8, D_00166A58);
    func_08B058(0xF0, 0xD0, D_00166A78);
}
