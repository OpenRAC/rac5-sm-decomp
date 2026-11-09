/* LEVEL_08:0x07CAB0 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_0023EF94;
extern int D_0023EF98;
extern int D_0023EF9C;
extern int D_002E705C;
extern int D_002E70FC;
extern void func_07CFB8(void);
extern void func_07CF60(void);
extern void func_07E700(void);
extern void func_07E318(void);
extern void func_07DAF8(void);
extern void func_07DA58(void);
extern void func_09E868(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_09EA40(char *buf);
void func_07CAB0(void)
{
    char buf[16];
    if (D_0023EF94 < 0) {
        func_09E868(buf, (D_002E705C << 16) | 0xB0007059, func_07CFB8, 0x1C, 0, -1, func_07CF60);
        D_0023EF94 = func_09EA40(buf);
    }
    if (D_0023EF98 < 0) {
        func_09E868(buf, (D_002E705C << 16) | 0x98007059, func_07E700, 0x44, 0, -1, func_07E318);
        D_0023EF98 = func_09EA40(buf);
    }
    if (D_0023EF9C < 0) {
        func_09E868(buf, (D_002E70FC << 16) | 0x88007059, func_07DAF8, 0x1C, 0, -1, func_07DA58);
        D_0023EF9C = func_09EA40(buf);
    }
}
