/* LEVEL_17:0x09DD50 -- placement copy of LEVEL_16_09E858.c: per-frame update that runs the pending state flags and then the subsystem updates. */
extern unsigned char D_0019D3C8;
extern char D_0025CBB0[];
extern char D_0025CCB8[];
extern int D_001C3920;
extern int D_0018E4A0;
extern unsigned char D_0019D590;
extern unsigned char D_0019D750;
extern unsigned char D_0019D3A4;
extern unsigned char D_0019D3A5;
extern unsigned char D_0019D751;
extern unsigned char D_0019D752;
extern int D_0019D754;
extern char D_001B9590[];
extern char D_001B95A0[];
extern unsigned D_00198788;
extern void func_09DCB8(void);
extern void func_10DD10(char *p);
extern void func_113F00(int a);
extern void func_0966F8(void);
extern void func_09E2C0(void);
extern void func_09DF90(void);
extern void func_09E148(void);
extern void func_0A00F8(int a, int b, float x, float y);
extern void func_0A3888(int a, char *b, char *c, int d);
extern void func_09C690(unsigned a, unsigned b, float f);
extern void func_0A3F80(void);
extern void func_0A54F8(void);
extern void func_09FBC8(void);
extern void func_09F678(void);
extern void func_0A4788(void);
extern void func_11BD58(void);
extern void func_11C1F8(void);
extern void func_11C6F8(void);
extern void func_11CA10(void);
extern void func_124B68(void);
extern void func_124D70(void);
extern void func_0A0200(void);
extern void func_0A3C20(void);
extern void func_0A3060(void);
extern void func_0A0608(void);
extern void func_0A2D60(void);
extern void func_0A0F80(void);
extern void func_09EE78(void);
extern void func_096858(unsigned a);
extern void func_0A35C8(void);
extern void func_0A2560(void);
extern void func_0944A0(int a);
extern int func_0B8D88(void);
extern void func_0B9500(void);
extern void func_096C20(void);

void func_09DD50(void)
{
    if (D_0019D3C8 == 0)
        return;
    func_09DCB8();
    func_10DD10(D_0025CBB0);
    if (D_001C3920 != 0x14)
        func_113F00(D_0018E4A0);
    if (D_0019D590) {
        func_0966F8();
        return;
    }
    if (D_0019D750)
        func_09E2C0();
    if (D_0019D3A4)
        func_09DF90();
    if (D_0019D3A5)
        func_09E148();
    if (D_0019D751) {
        D_0019D751 = 0;
        func_0A00F8(0x34, 0x5A, 100.0f, 75.0f);
    }
    if (D_0019D752) {
        D_0019D752 = 0;
        D_0019D754 = 0x78;
    }
    if (D_0019D754) {
        func_0A3888(1, D_001B9590, D_001B95A0, 0);
        D_0019D754 = D_0019D754 - 1;
    }
    if (D_00198788 != 0xFFFFFFFFu)
        func_09C690(D_00198788, 0xFFFFFFFFu, 0.0f);
    func_0A3F80();
    func_0A54F8();
    func_09FBC8();
    func_09F678();
    func_0A4788();
    func_11BD58();
    func_11C1F8();
    func_11C6F8();
    func_11CA10();
    func_124B68();
    func_124D70();
    func_0A0200();
    func_0A3C20();
    func_0A3060();
    func_0A0608();
    func_0A2D60();
    func_0A0F80();
    func_09EE78();
    func_096858(0xFFFFFFFFu);
    func_10DD10(D_0025CCB8);
    func_0A35C8();
    func_0A2560();
    func_0944A0(0);
    func_0944A0(func_0B8D88() + 1);
    func_0B9500();
    func_096C20();
}
