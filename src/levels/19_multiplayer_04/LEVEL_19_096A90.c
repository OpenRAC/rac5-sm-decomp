/* LEVEL_19:0x096A90 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_001AB114;
extern unsigned int D_001AB118;
extern unsigned char D_001AAF24;
extern char D_001C72B0[];
extern char D_001C72C0[];
extern char D_001C72D0[];
extern char D_001C72E8[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_09CA28(int a, unsigned int b, float c);
extern int func_09C7F0(void);
extern void func_09A430(int a, int b, int c, int d, int e);
extern void func_096BF0(unsigned int v);
extern void func_097840(int a, int b, char *s);
extern int func_09C840(int v);
extern void func_09E328(void);

void func_096A90(void)
{
    char buf[256];

    func_09CA28(D_001AB114, 0xFFFFFFFF, 0.0f);
    if (func_09C7F0() != 0) {
        if (D_001AB118 == 0xE0FFFFFF) {
            func_09A430(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_096BF0(D_001AB118);
            sprintf(buf, D_001C72B0, D_001AB114);
            func_097840(0x20, 0xC8, buf);
            sprintf(buf, D_001C72C0, func_09C840(D_001AB114));
            func_097840(0x20, 0xD8, buf);
            sprintf(buf, D_001C72D0, func_09C7F0());
            func_097840(0x20, 0xE8, buf);
        }
    } else {
        func_09A430(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_097840(0x20, 0xC8, D_001C72E8);
    }
    if (D_001AAF24 != 0) {
        func_09E328();
    }
}
