/* LEVEL_07:0x0AAB40 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_002102D4;
extern unsigned int D_002102D8;
extern unsigned char D_002100E4;
extern char D_00226080[];
extern char D_00226090[];
extern char D_002260A0[];
extern char D_002260B8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B0AA8(int a, unsigned int b, float c);
extern int func_0B0870(void);
extern void func_0AE4B0(int a, int b, int c, int d, int e);
extern void func_0AACA0(unsigned int v);
extern void func_0AB8C0(int a, int b, char *s);
extern int func_0B08C0(int v);
extern void func_0B22C0(void);

void func_0AAB40(void)
{
    char buf[256];

    func_0B0AA8(D_002102D4, 0xFFFFFFFF, 0.0f);
    if (func_0B0870() != 0) {
        if (D_002102D8 == 0xE0FFFFFF) {
            func_0AE4B0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0AACA0(D_002102D8);
            sprintf(buf, D_00226080, D_002102D4);
            func_0AB8C0(0x20, 0xC8, buf);
            sprintf(buf, D_00226090, func_0B08C0(D_002102D4));
            func_0AB8C0(0x20, 0xD8, buf);
            sprintf(buf, D_002260A0, func_0B0870());
            func_0AB8C0(0x20, 0xE8, buf);
        }
    } else {
        func_0AE4B0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0AB8C0(0x20, 0xC8, D_002260B8);
    }
    if (D_002100E4 != 0) {
        func_0B22C0();
    }
}
