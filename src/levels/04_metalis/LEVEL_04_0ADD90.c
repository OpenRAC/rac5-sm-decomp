/* LEVEL_04:0x0ADD90 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_00215494;
extern unsigned int D_00215498;
extern unsigned char D_002152A4;
extern char D_0022AD00[];
extern char D_0022AD10[];
extern char D_0022AD20[];
extern char D_0022AD38[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B3CF8(int a, unsigned int b, float c);
extern int func_0B3AC0(void);
extern void func_0B1700(int a, int b, int c, int d, int e);
extern void func_0ADEF0(unsigned int v);
extern void func_0AEB10(int a, int b, char *s);
extern int func_0B3B10(int v);
extern void func_0B5510(void);

void func_0ADD90(void)
{
    char buf[256];

    func_0B3CF8(D_00215494, 0xFFFFFFFF, 0.0f);
    if (func_0B3AC0() != 0) {
        if (D_00215498 == 0xE0FFFFFF) {
            func_0B1700(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0ADEF0(D_00215498);
            sprintf(buf, D_0022AD00, D_00215494);
            func_0AEB10(0x20, 0xC8, buf);
            sprintf(buf, D_0022AD10, func_0B3B10(D_00215494));
            func_0AEB10(0x20, 0xD8, buf);
            sprintf(buf, D_0022AD20, func_0B3AC0());
            func_0AEB10(0x20, 0xE8, buf);
        }
    } else {
        func_0B1700(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0AEB10(0x20, 0xC8, D_0022AD38);
    }
    if (D_002152A4 != 0) {
        func_0B5510();
    }
}
