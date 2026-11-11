/* LEVEL_22:0x097150 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_0015B354;
extern unsigned int D_0015B358;
extern unsigned char D_0015B164;
extern char D_0016E800[];
extern char D_0016E810[];
extern char D_0016E820[];
extern char D_0016E838[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_09D0B8(int a, unsigned int b, float c);
extern int func_09CE80(void);
extern void func_09AAC0(int a, int b, int c, int d, int e);
extern void func_0972B0(unsigned int v);
extern void func_097ED0(int a, int b, char *s);
extern int func_09CED0(int v);
extern void func_09E8D0(void);

void func_097150(void)
{
    char buf[256];

    func_09D0B8(D_0015B354, 0xFFFFFFFF, 0.0f);
    if (func_09CE80() != 0) {
        if (D_0015B358 == 0xE0FFFFFF) {
            func_09AAC0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0972B0(D_0015B358);
            sprintf(buf, D_0016E800, D_0015B354);
            func_097ED0(0x20, 0xC8, buf);
            sprintf(buf, D_0016E810, func_09CED0(D_0015B354));
            func_097ED0(0x20, 0xD8, buf);
            sprintf(buf, D_0016E820, func_09CE80());
            func_097ED0(0x20, 0xE8, buf);
        }
    } else {
        func_09AAC0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_097ED0(0x20, 0xC8, D_0016E838);
    }
    if (D_0015B164 != 0) {
        func_09E8D0();
    }
}
