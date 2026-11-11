extern void func_097360(unsigned int value);
extern void func_098E80(int a, int b, void *c);
extern void func_09BBC8(int a, int b, int c, int d, int e, unsigned int f);

extern char D_001C6FB8[];
extern char D_001C6FD0[];
extern char D_001C6FE8[];
extern char D_001C7018[];
extern char D_001C7038[];

void func_0AA540(char *param_1)
{
    func_097360(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_098E80(0xF0, 0x40, param_1);
    }
    func_098E80(0xF0, 0x70, D_001C6FB8);
    func_098E80(0xF0, 0x88, D_001C6FD0);
    func_09BBC8(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_098E80(0xF0, 0xA0, D_001C6FE8);
    func_098E80(0xF0, 0xB8, D_001C7018);
    func_098E80(0xF0, 0xD0, D_001C7038);
}
