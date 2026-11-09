/* LEVEL_15:0x089408 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_00150C54;
extern unsigned int D_00150C58;
extern unsigned char D_00150A64;
extern char D_00165B00[];
extern char D_00165B10[];
extern char D_00165B20[];
extern char D_00165B38[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_08F370(int a, unsigned int b, float c);
extern int func_08F138(void);
extern void func_08CD78(int a, int b, int c, int d, int e);
extern void func_089568(unsigned int v);
extern void func_08A188(int a, int b, char *s);
extern int func_08F188(int v);
extern void func_090B88(void);

void func_089408(void)
{
    char buf[256];

    func_08F370(D_00150C54, 0xFFFFFFFF, 0.0f);
    if (func_08F138() != 0) {
        if (D_00150C58 == 0xE0FFFFFF) {
            func_08CD78(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_089568(D_00150C58);
            sprintf(buf, D_00165B00, D_00150C54);
            func_08A188(0x20, 0xC8, buf);
            sprintf(buf, D_00165B10, func_08F188(D_00150C54));
            func_08A188(0x20, 0xD8, buf);
            sprintf(buf, D_00165B20, func_08F138());
            func_08A188(0x20, 0xE8, buf);
        }
    } else {
        func_08CD78(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_08A188(0x20, 0xC8, D_00165B38);
    }
    if (D_00150A64 != 0) {
        func_090B88();
    }
}
