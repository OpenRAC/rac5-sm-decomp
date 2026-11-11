/* LEVEL_01:0x0A8B40 -- debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_001FBFD4;
extern unsigned int D_001FBFD8;
extern unsigned char D_001FBDE4;
extern char D_00211380[];
extern char D_00211390[];
extern char D_002113A0[];
extern char D_002113B8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AEAA8(int a, unsigned int b, float c);
extern int func_0AE870(void);
extern void func_0AC4B0(int a, int b, int c, int d, int e);
extern void func_0A8CA0(unsigned int v);
extern void func_0A98C0(int a, int b, char *s);
extern int func_0AE8C0(int v);
extern void func_0B02C0(void);

void func_0A8B40(void)
{
    char buf[256];

    func_0AEAA8(D_001FBFD4, 0xFFFFFFFF, 0.0f);
    if (func_0AE870() != 0) {
        if (D_001FBFD8 == 0xE0FFFFFF) {
            func_0AC4B0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0A8CA0(D_001FBFD8);
            sprintf(buf, D_00211380, D_001FBFD4);
            func_0A98C0(0x20, 0xC8, buf);
            sprintf(buf, D_00211390, func_0AE8C0(D_001FBFD4));
            func_0A98C0(0x20, 0xD8, buf);
            sprintf(buf, D_002113A0, func_0AE870());
            func_0A98C0(0x20, 0xE8, buf);
        }
    } else {
        func_0AC4B0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0A98C0(0x20, 0xC8, D_002113B8);
    }
    if (D_001FBDE4 != 0) {
        func_0B02C0();
    }
}
