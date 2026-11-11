/* LEVEL_16:0x097200 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_001A9F94;
extern unsigned int D_001A9F98;
extern unsigned char D_001A9DA4;
extern char D_001C60B0[];
extern char D_001C60C0[];
extern char D_001C60D0[];
extern char D_001C60E8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_09D198(int a, unsigned int b, float c);
extern int func_09CF60(void);
extern void func_09ABA0(int a, int b, int c, int d, int e);
extern void func_097360(unsigned int v);
extern void func_097FB0(int a, int b, char *s);
extern int func_09CFB0(int v);
extern void func_09EA98(void);

void func_097200(void)
{
    char buf[256];

    func_09D198(D_001A9F94, 0xFFFFFFFF, 0.0f);
    if (func_09CF60() != 0) {
        if (D_001A9F98 == 0xE0FFFFFF) {
            func_09ABA0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_097360(D_001A9F98);
            sprintf(buf, D_001C60B0, D_001A9F94);
            func_097FB0(0x20, 0xC8, buf);
            sprintf(buf, D_001C60C0, func_09CFB0(D_001A9F94));
            func_097FB0(0x20, 0xD8, buf);
            sprintf(buf, D_001C60D0, func_09CF60());
            func_097FB0(0x20, 0xE8, buf);
        }
    } else {
        func_09ABA0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_097FB0(0x20, 0xC8, D_001C60E8);
    }
    if (D_001A9DA4 != 0) {
        func_09EA98();
    }
}
