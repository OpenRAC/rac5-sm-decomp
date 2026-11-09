/* LEVEL_24:0x0A23B8 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_001CCC54;
extern unsigned int D_001CCC58;
extern unsigned char D_001CCA64;
extern char D_001E2100[];
extern char D_001E2110[];
extern char D_001E2120[];
extern char D_001E2138[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A8320(int a, unsigned int b, float c);
extern int func_0A80E8(void);
extern void func_0A5D28(int a, int b, int c, int d, int e);
extern void func_0A2518(unsigned int v);
extern void func_0A3138(int a, int b, char *s);
extern int func_0A8138(int v);
extern void func_0A9B38(void);

void func_0A23B8(void)
{
    char buf[256];

    func_0A8320(D_001CCC54, 0xFFFFFFFF, 0.0f);
    if (func_0A80E8() != 0) {
        if (D_001CCC58 == 0xE0FFFFFF) {
            func_0A5D28(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0A2518(D_001CCC58);
            sprintf(buf, D_001E2100, D_001CCC54);
            func_0A3138(0x20, 0xC8, buf);
            sprintf(buf, D_001E2110, func_0A8138(D_001CCC54));
            func_0A3138(0x20, 0xD8, buf);
            sprintf(buf, D_001E2120, func_0A80E8());
            func_0A3138(0x20, 0xE8, buf);
        }
    } else {
        func_0A5D28(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0A3138(0x20, 0xC8, D_001E2138);
    }
    if (D_001CCA64 != 0) {
        func_0A9B38();
    }
}
