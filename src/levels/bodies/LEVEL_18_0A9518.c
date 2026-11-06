extern void func_096370(unsigned int value);
extern void func_097E90(int a, int b, void *c);
extern void func_09ABD8(int a, int b, int c, int d, int e, unsigned int f);

extern char D_001C8538[];
extern char D_001C8550[];
extern char D_001C8568[];
extern char D_001C8598[];
extern char D_001C85B8[];

void func_0A9518(char *param_1)
{
    func_096370(0xFFFFFFFFu);
    if (param_1 != 0) {
        func_097E90(0xF0, 0x40, param_1);
    }
    func_097E90(0xF0, 0x70, D_001C8538);
    func_097E90(0xF0, 0x88, D_001C8550);
    func_09ABD8(7, 0xF0, 0x54, 0x20, 0x20, 0xFFFFFFFFu);
    func_097E90(0xF0, 0xA0, D_001C8568);
    func_097E90(0xF0, 0xB8, D_001C8598);
    func_097E90(0xF0, 0xD0, D_001C85B8);
}
