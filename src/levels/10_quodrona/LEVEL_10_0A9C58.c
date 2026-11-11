/* LEVEL_10:0x0A9C58 -- placement copy of LEVEL_01_0A8B40.c: debug overlay: draws the status box and, when the tracked id is the expected one, prints three of its values. */
extern int D_00204FD4;
extern unsigned int D_00204FD8;
extern unsigned char D_00204DE4;
extern char D_0021A300[];
extern char D_0021A310[];
extern char D_0021A320[];
extern char D_0021A338[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AFBC0(int a, unsigned int b, float c);
extern int func_0AF988(void);
extern void func_0AD5C8(int a, int b, int c, int d, int e);
extern void func_0A9DB8(unsigned int v);
extern void func_0AA9D8(int a, int b, char *s);
extern int func_0AF9D8(int v);
extern void func_0B13D8(void);

void func_0A9C58(void)
{
    char buf[256];

    func_0AFBC0(D_00204FD4, 0xFFFFFFFF, 0.0f);
    if (func_0AF988() != 0) {
        if (D_00204FD8 == 0xE0FFFFFF) {
            func_0AD5C8(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
            func_0A9DB8(D_00204FD8);
            sprintf(buf, D_0021A300, D_00204FD4);
            func_0AA9D8(0x20, 0xC8, buf);
            sprintf(buf, D_0021A310, func_0AF9D8(D_00204FD4));
            func_0AA9D8(0x20, 0xD8, buf);
            sprintf(buf, D_0021A320, func_0AF988());
            func_0AA9D8(0x20, 0xE8, buf);
        }
    } else {
        func_0AD5C8(0x10, 0xB8, 0x1C0, 0xF8, 0x40000000);
        func_0AA9D8(0x20, 0xC8, D_0021A338);
    }
    if (D_00204DE4 != 0) {
        func_0B13D8();
    }
}
