/* LEVEL_18:0x09D868 -- placement copy of LEVEL_16_09E858.c: per-frame update that runs the pending state flags and then the subsystem updates. */
extern unsigned char D_001AB248;
extern char D_0026BC30[];
extern char D_0026BD38[];
extern int D_001D1A20;
extern int D_0019C320;
extern unsigned char D_001AB410;
extern unsigned char D_001AB5D0;
extern unsigned char D_001AB224;
extern unsigned char D_001AB225;
extern unsigned char D_001AB5D1;
extern unsigned char D_001AB5D2;
extern int D_001AB5D4;
extern char D_001C7690[];
extern char D_001C76A0[];
extern unsigned D_001A6608;
extern void func_09D7D0(void);
extern void func_10D448(char *p);
extern void func_113528(int a);
extern void func_096210(void);
extern void func_09DDD8(void);
extern void func_09DAA8(void);
extern void func_09DC60(void);
extern void func_09FC10(int a, int b, float x, float y);
extern void func_0A33A0(int a, char *b, char *c, int d);
extern void func_09C1A8(unsigned a, unsigned b, float f);
extern void func_0A3A98(void);
extern void func_0A4F90(void);
extern void func_09F6E0(void);
extern void func_09F190(void);
extern void func_0A42A0(void);
extern void func_11B3D0(void);
extern void func_11B870(void);
extern void func_11BE20(void);
extern void func_11C080(void);
extern void func_1241F8(void);
extern void func_124400(void);
extern void func_09FD18(void);
extern void func_0A3738(void);
extern void func_0A2B78(void);
extern void func_0A0120(void);
extern void func_0A2878(void);
extern void func_0A0A98(void);
extern void func_09E990(void);
extern void func_096370(unsigned a);
extern void func_0A30E0(void);
extern void func_0A2078(void);
extern void func_093FB8(int a);
extern int func_0B8820(void);
extern void func_0B8F98(void);
extern void func_096738(void);

void func_09D868(void)
{
    if (D_001AB248 == 0)
        return;
    func_09D7D0();
    func_10D448(D_0026BC30);
    if (D_001D1A20 != 0x14)
        func_113528(D_0019C320);
    if (D_001AB410) {
        func_096210();
        return;
    }
    if (D_001AB5D0)
        func_09DDD8();
    if (D_001AB224)
        func_09DAA8();
    if (D_001AB225)
        func_09DC60();
    if (D_001AB5D1) {
        D_001AB5D1 = 0;
        func_09FC10(0x34, 0x5A, 100.0f, 75.0f);
    }
    if (D_001AB5D2) {
        D_001AB5D2 = 0;
        D_001AB5D4 = 0x78;
    }
    if (D_001AB5D4) {
        func_0A33A0(1, D_001C7690, D_001C76A0, 0);
        D_001AB5D4 = D_001AB5D4 - 1;
    }
    if (D_001A6608 != 0xFFFFFFFFu)
        func_09C1A8(D_001A6608, 0xFFFFFFFFu, 0.0f);
    func_0A3A98();
    func_0A4F90();
    func_09F6E0();
    func_09F190();
    func_0A42A0();
    func_11B3D0();
    func_11B870();
    func_11BE20();
    func_11C080();
    func_1241F8();
    func_124400();
    func_09FD18();
    func_0A3738();
    func_0A2B78();
    func_0A0120();
    func_0A2878();
    func_0A0A98();
    func_09E990();
    func_096370(0xFFFFFFFFu);
    func_10D448(D_0026BD38);
    func_0A30E0();
    func_0A2078();
    func_093FB8(0);
    func_093FB8(func_0B8820() + 1);
    func_0B8F98();
    func_096738();
}
