/* LEVEL_17:0x0966F8 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_0019D594;
extern unsigned int D_0019D598;
extern unsigned char D_0019D3A4;
extern char D_001B9530[];
extern char D_001B9540[];
extern char D_001B9550[];
extern char D_001B9568[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_09C690(int a, unsigned int b, float c);
extern int func_09C458(void);
extern void func_09A098(int a, int b, int c, int d, int e);
extern void func_096858(unsigned int v);
extern void func_0974A8(int a, int b, char *s);
extern int func_09C4A8(int v);
extern void func_09DF90(void);

void func_0966F8(void)
{
    char buf[256];

    func_09C690(D_0019D594, 0xFFFFFFFF, 0.0f);
    if (func_09C458() != 0) {
        if (D_0019D598 == 0xE0FFFFFF) {
            func_09A098(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_096858(D_0019D598);
            sprintf(buf, D_001B9530, D_0019D594);
            func_0974A8(0x20, 0xC8, buf);
            sprintf(buf, D_001B9540, func_09C4A8(D_0019D594));
            func_0974A8(0x20, 0xD8, buf);
            sprintf(buf, D_001B9550, func_09C458());
            func_0974A8(0x20, 0xE8, buf);
        }
    } else {
        func_09A098(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0974A8(0x20, 0xC8, D_001B9568);
    }
    if (D_0019D3A4 != 0) {
        func_09DF90();
    }
}
