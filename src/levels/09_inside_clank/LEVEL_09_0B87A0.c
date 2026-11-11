extern void func_0A5F50(unsigned int value);
extern void func_0A7A40(int a, int b, void *c);
extern void func_0AA788(int a, int b, int c, int d, int e, unsigned int f);

extern char D_001FBE78[];
extern char D_001FBE90[];
extern char D_001FBEA8[];
extern char D_001FBED8[];
extern char D_001FBEF8[];

void func_0B87A0(char *param_1)
{
    func_0A5F50(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_0A7A40(0xF0, 0x40, param_1);
    }
    func_0A7A40(0xF0, 0x70, D_001FBE78);
    func_0A7A40(0xF0, 0x88, D_001FBE90);
    func_0AA788(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_0A7A40(0xF0, 0xA0, D_001FBEA8);
    func_0A7A40(0xF0, 0xB8, D_001FBED8);
    func_0A7A40(0xF0, 0xD0, D_001FBEF8);
}
