/* LEVEL_02:0x0AF450 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_00210F94;
extern unsigned int D_00210F98;
extern unsigned char D_00210DA4;
extern char D_00226300[];
extern char D_00226310[];
extern char D_00226320[];
extern char D_00226338[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B53B8(int a, unsigned int b, float c);
extern int func_0B5180(void);
extern void func_0B2DC0(int a, int b, int c, int d, int e);
extern void func_0AF5B0(unsigned int v);
extern void func_0B01D0(int a, int b, char *s);
extern int func_0B51D0(int v);
extern void func_0B6BD0(void);

void func_0AF450(void)
{
    char buf[256];

    func_0B53B8(D_00210F94, 0xFFFFFFFF, 0.0f);
    if (func_0B5180() != 0) {
        if (D_00210F98 == 0xE0FFFFFF) {
            func_0B2DC0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0AF5B0(D_00210F98);
            sprintf(buf, D_00226300, D_00210F94);
            func_0B01D0(0x20, 0xC8, buf);
            sprintf(buf, D_00226310, func_0B51D0(D_00210F94));
            func_0B01D0(0x20, 0xD8, buf);
            sprintf(buf, D_00226320, func_0B5180());
            func_0B01D0(0x20, 0xE8, buf);
        }
    } else {
        func_0B2DC0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0B01D0(0x20, 0xC8, D_00226338);
    }
    if (D_00210DA4 != 0) {
        func_0B6BD0();
    }
}
