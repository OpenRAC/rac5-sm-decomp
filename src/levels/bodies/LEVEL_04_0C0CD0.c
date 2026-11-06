extern void func_0ADEF0(unsigned int value);
extern void func_0AF9E0(int a, int b, void *c);
extern void func_0B2728(int a, int b, int c, int d, int e, unsigned int f);

extern char D_0022BBF8[];
extern char D_0022BC10[];
extern char D_0022BC28[];
extern char D_0022BC58[];
extern char D_0022BC78[];

void func_0C0CD0(char *param_1)
{
    func_0ADEF0(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0AF9E0(0xF0, 0x40, param_1);
    }
    func_0AF9E0(0xF0, 0x70, D_0022BBF8);
    func_0AF9E0(0xF0, 0x88, D_0022BC10);
    func_0B2728(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0AF9E0(0xF0, 0xA0, D_0022BC28);
    func_0AF9E0(0xF0, 0xB8, D_0022BC58);
    func_0AF9E0(0xF0, 0xD0, D_0022BC78);
}
