/* LEVEL_20:0x088F50 -- placement copy of LEVEL_16_09E858.c: per-frame update that runs the pending state flags and then the subsystem updates. */
extern unsigned char D_0010C4A8;
extern char D_0018F0F0[];
extern char D_0018F1F8[];
extern int D_00131510;
extern int D_000FD588;
extern unsigned char D_0010C670;
extern unsigned char D_0010C830;
extern unsigned char D_0010C484;
extern unsigned char D_0010C485;
extern unsigned char D_0010C831;
extern unsigned char D_0010C832;
extern int D_0010C834;
extern char D_00127190[];
extern char D_001271A0[];
extern unsigned D_00107868;
extern void func_088EB8(void);
extern void func_0E1580(char *p);
extern void func_0E7110(int a);
extern void func_0818F8(void);
extern void func_0894C0(void);
extern void func_089190(void);
extern void func_089348(void);
extern void func_08B2F8(int a, int b, float x, float y);
extern void func_08EA20(int a, char *b, char *c, int d);
extern void func_087890(unsigned a, unsigned b, float f);
extern void func_08F118(void);
extern void func_090598(void);
extern void func_08ADC8(void);
extern void func_08A878(void);
extern void func_08F8A8(void);
extern void func_0EE788(void);
extern void func_0EEC28(void);
extern void func_0EF128(void);
extern void func_0EF388(void);
extern void func_0F7240(void);
extern void func_0F7448(void);
extern void func_08B400(void);
extern void func_08EDB8(void);
extern void func_08E1F8(void);
extern void func_08B808(void);
extern void func_08DF60(void);
extern void func_08C180(void);
extern void func_08A078(void);
extern void func_081A58(unsigned a);
extern void func_08E760(void);
extern void func_08D760(void);
extern void func_07F6A0(int a);
extern int func_0A3D78(void);
extern void func_0A44F0(void);
extern void func_081E20(void);

void func_088F50(void)
{
    if (D_0010C4A8 == 0)
        return;
    func_088EB8();
    func_0E1580(D_0018F0F0);
    if (D_00131510 != 0x14)
        func_0E7110(D_000FD588);
    if (D_0010C670) {
        func_0818F8();
        return;
    }
    if (D_0010C830)
        func_0894C0();
    if (D_0010C484)
        func_089190();
    if (D_0010C485)
        func_089348();
    if (D_0010C831) {
        D_0010C831 = 0;
        func_08B2F8(0x34, 0x5A, 100.0f, 75.0f);
    }
    if (D_0010C832) {
        D_0010C832 = 0;
        D_0010C834 = 0x78;
    }
    if (D_0010C834) {
        func_08EA20(1, D_00127190, D_001271A0, 0);
        D_0010C834 = D_0010C834 - 1;
    }
    if (D_00107868 != 0xFFFFFFFFu)
        func_087890(D_00107868, 0xFFFFFFFFu, 0.0f);
    func_08F118();
    func_090598();
    func_08ADC8();
    func_08A878();
    func_08F8A8();
    func_0EE788();
    func_0EEC28();
    func_0EF128();
    func_0EF388();
    func_0F7240();
    func_0F7448();
    func_08B400();
    func_08EDB8();
    func_08E1F8();
    func_08B808();
    func_08DF60();
    func_08C180();
    func_08A078();
    func_081A58(0xFFFFFFFFu);
    func_0E1580(D_0018F1F8);
    func_08E760();
    func_08D760();
    func_07F6A0(0);
    func_07F6A0(func_0A3D78() + 1);
    func_0A44F0();
    func_081E20();
}
