extern void func_096858(unsigned int value);
extern void func_098378(int a, int b, void *c);
extern void func_09B0C0(int a, int b, int c, int d, int e, unsigned int f);

extern char D_001BA438[];
extern char D_001BA450[];
extern char D_001BA468[];
extern char D_001BA498[];
extern char D_001BA4B8[];

void func_0A9A80(char *param_1)
{
    func_096858(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_098378(0xF0, 0x40, param_1);
    }
    func_098378(0xF0, 0x70, D_001BA438);
    func_098378(0xF0, 0x88, D_001BA450);
    func_09B0C0(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_098378(0xF0, 0xA0, D_001BA468);
    func_098378(0xF0, 0xB8, D_001BA498);
    func_098378(0xF0, 0xD0, D_001BA4B8);
}
