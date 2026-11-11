/* LEVEL_02:0x07C280 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_0020B094;
extern int D_0020B098;
extern int D_0020B09C;
extern int D_002AF2DC;
extern int D_002AF37C;
extern void func_07C6E8(void);
extern void func_07C690(void);
extern void func_07DE30(void);
extern void func_07DA48(void);
extern void func_07D228(void);
extern void func_07D188(void);
extern void func_09D018(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_09D1F0(char *buf);
void func_07C280(void)
{
    char buf[16];
    if (D_0020B094 < 0) {
        func_09D018(buf, (D_002AF2DC << 16) | 0xB0007059, func_07C6E8, 0x1C, 0, -1, func_07C690);
        D_0020B094 = func_09D1F0(buf);
    }
    if (D_0020B098 < 0) {
        func_09D018(buf, (D_002AF2DC << 16) | 0x98007059, func_07DE30, 0x44, 0, -1, func_07DA48);
        D_0020B098 = func_09D1F0(buf);
    }
    if (D_0020B09C < 0) {
        func_09D018(buf, (D_002AF37C << 16) | 0x88007059, func_07D228, 0x1C, 0, -1, func_07D188);
        D_0020B09C = func_09D1F0(buf);
    }
}
