/* LEVEL_09:0x0724A0 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_001DFED4;
extern int D_001DFED8;
extern int D_001DFEDC;
extern int D_0027F55C;
extern int D_0027F5FC;
extern void func_072908(void);
extern void func_0728B0(void);
extern void func_074050(void);
extern void func_073C68(void);
extern void func_073448(void);
extern void func_0733A8(void);
extern void func_0930A0(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_093278(char *buf);
void func_0724A0(void)
{
    char buf[16];
    if (D_001DFED4 < 0) {
        func_0930A0(buf, (D_0027F55C << 16) | 0xB0007059, func_072908, 0x1C, 0, -1, func_0728B0);
        D_001DFED4 = func_093278(buf);
    }
    if (D_001DFED8 < 0) {
        func_0930A0(buf, (D_0027F55C << 16) | 0x98007059, func_074050, 0x44, 0, -1, func_073C68);
        D_001DFED8 = func_093278(buf);
    }
    if (D_001DFEDC < 0) {
        func_0930A0(buf, (D_0027F5FC << 16) | 0x88007059, func_073448, 0x1C, 0, -1, func_0733A8);
        D_001DFEDC = func_093278(buf);
    }
}
