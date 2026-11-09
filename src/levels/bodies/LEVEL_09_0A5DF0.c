/* LEVEL_09:0x0A5DF0 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_001E5DD4;
extern unsigned int D_001E5DD8;
extern unsigned char D_001E5BE4;
extern char D_001FAF80[];
extern char D_001FAF90[];
extern char D_001FAFA0[];
extern char D_001FAFB8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0ABD58(int a, unsigned int b, float c);
extern int func_0ABB20(void);
extern void func_0A9760(int a, int b, int c, int d, int e);
extern void func_0A5F50(unsigned int v);
extern void func_0A6B70(int a, int b, char *s);
extern int func_0ABB70(int v);
extern void func_0AD570(void);

void func_0A5DF0(void)
{
    char buf[256];

    func_0ABD58(D_001E5DD4, 0xFFFFFFFF, 0.0f);
    if (func_0ABB20() != 0) {
        if (D_001E5DD8 == 0xE0FFFFFF) {
            func_0A9760(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0A5F50(D_001E5DD8);
            sprintf(buf, D_001FAF80, D_001E5DD4);
            func_0A6B70(0x20, 0xC8, buf);
            sprintf(buf, D_001FAF90, func_0ABB70(D_001E5DD4));
            func_0A6B70(0x20, 0xD8, buf);
            sprintf(buf, D_001FAFA0, func_0ABB20());
            func_0A6B70(0x20, 0xE8, buf);
        }
    } else {
        func_0A9760(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0A6B70(0x20, 0xC8, D_001FAFB8);
    }
    if (D_001E5BE4 != 0) {
        func_0AD570();
    }
}
