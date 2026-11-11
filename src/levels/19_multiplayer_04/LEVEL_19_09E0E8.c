/* LEVEL_19:0x09E0E8 -- placement copy of LEVEL_16_09E858.c: per-frame update that runs the pending state flags and then the subsystem updates. */
extern unsigned char D_001AAF48;
extern char D_0026BA30[];
extern char D_0026BB38[];
extern int D_001D16A0;
extern int D_0019C020;
extern unsigned char D_001AB110;
extern unsigned char D_001AB2D0;
extern unsigned char D_001AAF24;
extern unsigned char D_001AAF25;
extern unsigned char D_001AB2D1;
extern unsigned char D_001AB2D2;
extern int D_001AB2D4;
extern char D_001C7310[];
extern char D_001C7320[];
extern unsigned D_001A6308;
extern void func_09E050(void);
extern void func_10EE38(char *p);
extern void func_114F18(int a);
extern void func_096A90(void);
extern void func_09E658(void);
extern void func_09E328(void);
extern void func_09E4E0(void);
extern void func_0A0490(int a, int b, float x, float y);
extern void func_0A3C20(int a, char *b, char *c, int d);
extern void func_09CA28(unsigned a, unsigned b, float f);
extern void func_0A4318(void);
extern void func_0A5890(void);
extern void func_09FF60(void);
extern void func_09FA10(void);
extern void func_0A4B20(void);
extern void func_11CD50(void);
extern void func_11D1F0(void);
extern void func_11D6F0(void);
extern void func_11D950(void);
extern void func_125AA8(void);
extern void func_125CB0(void);
extern void func_0A0598(void);
extern void func_0A3FB8(void);
extern void func_0A33F8(void);
extern void func_0A09A0(void);
extern void func_0A30F8(void);
extern void func_0A1318(void);
extern void func_09F210(void);
extern void func_096BF0(unsigned a);
extern void func_0A3960(void);
extern void func_0A28F8(void);
extern void func_094838(int a);
extern int func_0B9120(void);
extern void func_0B9898(void);
extern void func_096FB8(void);

void func_09E0E8(void)
{
    if (D_001AAF48 == 0)
        return;
    func_09E050();
    func_10EE38(D_0026BA30);
    if (D_001D16A0 != 0x14)
        func_114F18(D_0019C020);
    if (D_001AB110) {
        func_096A90();
        return;
    }
    if (D_001AB2D0)
        func_09E658();
    if (D_001AAF24)
        func_09E328();
    if (D_001AAF25)
        func_09E4E0();
    if (D_001AB2D1) {
        D_001AB2D1 = 0;
        func_0A0490(0x34, 0x5A, 100.0f, 75.0f);
    }
    if (D_001AB2D2) {
        D_001AB2D2 = 0;
        D_001AB2D4 = 0x78;
    }
    if (D_001AB2D4) {
        func_0A3C20(1, D_001C7310, D_001C7320, 0);
        D_001AB2D4 = D_001AB2D4 - 1;
    }
    if (D_001A6308 != 0xFFFFFFFFu)
        func_09CA28(D_001A6308, 0xFFFFFFFFu, 0.0f);
    func_0A4318();
    func_0A5890();
    func_09FF60();
    func_09FA10();
    func_0A4B20();
    func_11CD50();
    func_11D1F0();
    func_11D6F0();
    func_11D950();
    func_125AA8();
    func_125CB0();
    func_0A0598();
    func_0A3FB8();
    func_0A33F8();
    func_0A09A0();
    func_0A30F8();
    func_0A1318();
    func_09F210();
    func_096BF0(0xFFFFFFFFu);
    func_10EE38(D_0026BB38);
    func_0A3960();
    func_0A28F8();
    func_094838(0);
    func_094838(func_0B9120() + 1);
    func_0B9898();
    func_096FB8();
}
