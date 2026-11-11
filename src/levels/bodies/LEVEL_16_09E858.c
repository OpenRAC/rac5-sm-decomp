/* LEVEL_16:0x09E858 -- per-frame update that runs the pending state flags and then the subsystem updates. */
extern unsigned char D_001A9DC8;
extern char D_0026B8B0[];
extern char D_0026B9B8[];
extern int D_001D04A0;
extern int D_0019AEA0;
extern unsigned char D_001A9F90;
extern unsigned char D_001AA150;
extern unsigned char D_001A9DA4;
extern unsigned char D_001A9DA5;
extern unsigned char D_001AA151;
extern unsigned char D_001AA152;
extern int D_001AA154;
extern char D_001C6110[];
extern char D_001C6120[];
extern unsigned D_001A5188;
extern void func_09E7C0(void);
extern void func_10E798(char *p);
extern void func_114770(int a);
extern void func_097200(void);
extern void func_09EDC8(void);
extern void func_09EA98(void);
extern void func_09EC50(void);
extern void func_0A0C00(int a, int b, float x, float y);
extern void func_0A43A8(int a, char *b, char *c, int d);
extern void func_09D198(unsigned a, unsigned b, float f);
extern void func_0A4AA0(void);
extern void func_0A6018(void);
extern void func_0A06D0(void);
extern void func_0A0180(void);
extern void func_0A52A8(void);
extern void func_11C3E0(void);
extern void func_11C880(void);
extern void func_11CD80(void);
extern void func_11CFE0(void);
extern void func_125140(void);
extern void func_125348(void);
extern void func_0A0D08(void);
extern void func_0A4740(void);
extern void func_0A3B80(void);
extern void func_0A1110(void);
extern void func_0A3880(void);
extern void func_0A1A88(void);
extern void func_09F980(void);
extern void func_097360(unsigned a);
extern void func_0A40E8(void);
extern void func_0A3080(void);
extern void func_094FA8(int a);
extern int func_0B9848(void);
extern void func_0B9FC0(void);
extern void func_097728(void);

void func_09E858(void)
{
    if (D_001A9DC8 == 0)
        return;
    func_09E7C0();
    func_10E798(D_0026B8B0);
    if (D_001D04A0 != 0x14)
        func_114770(D_0019AEA0);
    if (D_001A9F90) {
        func_097200();
        return;
    }
    if (D_001AA150)
        func_09EDC8();
    if (D_001A9DA4)
        func_09EA98();
    if (D_001A9DA5)
        func_09EC50();
    if (D_001AA151) {
        D_001AA151 = 0;
        func_0A0C00(0x34, 0x5A, 100.0f, 75.0f);
    }
    if (D_001AA152) {
        D_001AA152 = 0;
        D_001AA154 = 0x78;
    }
    if (D_001AA154) {
        func_0A43A8(1, D_001C6110, D_001C6120, 0);
        D_001AA154 = D_001AA154 - 1;
    }
    if (D_001A5188 != 0xFFFFFFFFu)
        func_09D198(D_001A5188, 0xFFFFFFFFu, 0.0f);
    func_0A4AA0();
    func_0A6018();
    func_0A06D0();
    func_0A0180();
    func_0A52A8();
    func_11C3E0();
    func_11C880();
    func_11CD80();
    func_11CFE0();
    func_125140();
    func_125348();
    func_0A0D08();
    func_0A4740();
    func_0A3B80();
    func_0A1110();
    func_0A3880();
    func_0A1A88();
    func_09F980();
    func_097360(0xFFFFFFFFu);
    func_10E798(D_0026B9B8);
    func_0A40E8();
    func_0A3080();
    func_094FA8(0);
    func_094FA8(func_0B9848() + 1);
    func_0B9FC0();
    func_097728();
}
