extern void func_081A58(unsigned int value);
extern void func_083578(int a, int b, void *c);
extern void func_0862C0(int a, int b, int c, int d, int e, unsigned int f);

extern char D_00128038[];
extern char D_00128050[];
extern char D_00128068[];
extern char D_00128098[];
extern char D_001280B8[];

void func_094A70(char *param_1)
{
    func_081A58(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_083578(0xF0, 0x40, param_1);
    }
    func_083578(0xF0, 0x70, D_00128038);
    func_083578(0xF0, 0x88, D_00128050);
    func_0862C0(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_083578(0xF0, 0xA0, D_00128068);
    func_083578(0xF0, 0xB8, D_00128098);
    func_083578(0xF0, 0xD0, D_001280B8);
}
