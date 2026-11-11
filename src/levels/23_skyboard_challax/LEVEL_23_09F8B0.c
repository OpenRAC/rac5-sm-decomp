/* LEVEL_23:0x09F8B0 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_001CF3D4;
extern unsigned int D_001CF3D8;
extern unsigned char D_001CF1E4;
extern char D_001E4500[];
extern char D_001E4510[];
extern char D_001E4520[];
extern char D_001E4538[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A5818(int a, unsigned int b, float c);
extern int func_0A55E0(void);
extern void func_0A3220(int a, int b, int c, int d, int e);
extern void func_09FA10(unsigned int v);
extern void func_0A0630(int a, int b, char *s);
extern int func_0A5630(int v);
extern void func_0A7030(void);

void func_09F8B0(void)
{
    char buf[256];

    func_0A5818(D_001CF3D4, 0xFFFFFFFF, 0.0f);
    if (func_0A55E0() != 0) {
        if (D_001CF3D8 == 0xE0FFFFFF) {
            func_0A3220(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_09FA10(D_001CF3D8);
            sprintf(buf, D_001E4500, D_001CF3D4);
            func_0A0630(0x20, 0xC8, buf);
            sprintf(buf, D_001E4510, func_0A5630(D_001CF3D4));
            func_0A0630(0x20, 0xD8, buf);
            sprintf(buf, D_001E4520, func_0A55E0());
            func_0A0630(0x20, 0xE8, buf);
        }
    } else {
        func_0A3220(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0A0630(0x20, 0xC8, D_001E4538);
    }
    if (D_001CF1E4 != 0) {
        func_0A7030();
    }
}
