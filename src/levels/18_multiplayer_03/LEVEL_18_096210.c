/* LEVEL_18:0x096210 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_001AB414;
extern unsigned int D_001AB418;
extern unsigned char D_001AB224;
extern char D_001C7630[];
extern char D_001C7640[];
extern char D_001C7650[];
extern char D_001C7668[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_09C1A8(int a, unsigned int b, float c);
extern int func_09BF70(void);
extern void func_099BB0(int a, int b, int c, int d, int e);
extern void func_096370(unsigned int v);
extern void func_096FC0(int a, int b, char *s);
extern int func_09BFC0(int v);
extern void func_09DAA8(void);

void func_096210(void)
{
    char buf[256];

    func_09C1A8(D_001AB414, 0xFFFFFFFF, 0.0f);
    if (func_09BF70() != 0) {
        if (D_001AB418 == 0xE0FFFFFF) {
            func_099BB0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_096370(D_001AB418);
            sprintf(buf, D_001C7630, D_001AB414);
            func_096FC0(0x20, 0xC8, buf);
            sprintf(buf, D_001C7640, func_09BFC0(D_001AB414));
            func_096FC0(0x20, 0xD8, buf);
            sprintf(buf, D_001C7650, func_09BF70());
            func_096FC0(0x20, 0xE8, buf);
        }
    } else {
        func_099BB0(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_096FC0(0x20, 0xC8, D_001C7668);
    }
    if (D_001AB224 != 0) {
        func_09DAA8();
    }
}
