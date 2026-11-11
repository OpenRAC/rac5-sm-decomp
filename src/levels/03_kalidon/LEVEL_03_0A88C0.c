/* LEVEL_03:0x0A88C0 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_00214654;
extern unsigned int D_00214658;
extern unsigned char D_00214464;
extern char D_0022A280[];
extern char D_0022A290[];
extern char D_0022A2A0[];
extern char D_0022A2B8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AE828(int a, unsigned int b, float c);
extern int func_0AE5F0(void);
extern void func_0AC230(int a, int b, int c, int d, int e);
extern void func_0A8A20(unsigned int v);
extern void func_0A9640(int a, int b, char *s);
extern int func_0AE640(int v);
extern void func_0B0040(void);

void func_0A88C0(void)
{
    char buf[256];

    func_0AE828(D_00214654, 0xFFFFFFFF, 0.0f);
    if (func_0AE5F0() != 0) {
        if (D_00214658 == 0xE0FFFFFF) {
            func_0AC230(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0A8A20(D_00214658);
            sprintf(buf, D_0022A280, D_00214654);
            func_0A9640(0x20, 0xC8, buf);
            sprintf(buf, D_0022A290, func_0AE640(D_00214654));
            func_0A9640(0x20, 0xD8, buf);
            sprintf(buf, D_0022A2A0, func_0AE5F0());
            func_0A9640(0x20, 0xE8, buf);
        }
    } else {
        func_0AC230(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0A9640(0x20, 0xC8, D_0022A2B8);
    }
    if (D_00214464 != 0) {
        func_0B0040();
    }
}
