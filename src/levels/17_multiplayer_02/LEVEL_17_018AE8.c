/* LEVEL_17:0x018AE8 -- placement copy of LEVEL_16_019168.c: runs the per-frame level update sequence. */
extern unsigned char D_0018E494;
extern unsigned char D_0018E495;
extern unsigned char D_0018E496;
extern int D_0018E498;
extern int D_0018E49C;
extern float D_001D192C;
extern char D_001CFBF8[];
extern char D_001D5390[];
extern char D_001D8D80[];
extern void FOG_PreUpdate(void) __asm__("FOG_PreUpdate__Fv");
extern void SND_LevelUpdate(void *a, void *b) __asm__("SND_LevelUpdate__FPC7MATRIX4T0");
extern void SND_Update(void *a, int b, void *c, int d) __asm__("SND_Update__FPC7MATRIX4N30");
extern void func_07E590(void);
extern void func_029300(void);
extern void func_013050(void);
extern void func_018A20(void);
extern void func_018A18(void);
extern int func_018558(int);
extern void func_079670(void);
extern char *func_079F08(int);
extern void func_000990(void);
extern void func_031420(void);
extern void func_033700(void);
extern void func_031E00(void);
extern void func_08A250(void);
extern void func_085D30(float);
extern void func_081AC8(void);
extern void func_019720(void);
extern void func_071078(float);
extern void func_028B08(void);
extern void func_0DA118(void);
extern void func_08E128(void);
extern void func_071440(void);
extern void func_08E1A8(void);
extern void func_033D78(float);
extern void func_079E10(int);
extern void func_018248(float);
extern void func_070C38(float);
extern void func_073DE8(void);
extern void func_088E78(int, int);
extern void func_081B60(void);
extern void func_000A20(void);
extern void func_011C90(void);
extern void func_08E7C0(float);
extern void func_08E640(void);
extern void func_0160E0(void);
extern void func_112CD8(void);
extern void func_031E20(void);
extern void func_08A3F8(void);
extern int func_09D9A0(void);
extern void func_000BF0(int);
extern int func_000DC0(void);
extern void func_0194E0(void);
extern void func_07E190(int);
extern void func_071BF8(void);
extern void func_027530(void);
extern void func_018518(int, int);

void func_018AE8(void)
{
    float dt;
    int a;
    int b;
    char *m0;
    char *m1;

    D_0018E494 = 1;
    D_0018E495 = 1;
    func_07E590();
    func_029300();
    func_013050();
    func_018A20();
    func_018A18();
    dt = D_001D192C;
    if (!func_018558(6))
        func_079670();
    func_079F08(1);
    FOG_PreUpdate();
    func_000990();
    func_031420();
    func_033700();
    func_031E00();
    func_08A250();
    func_085D30(dt);
    func_081AC8();
    func_019720();
    func_071078(dt);
    func_028B08();
    func_0DA118();
    func_08E128();
    func_071440();
    func_08E1A8();
    func_033D78(dt);
    func_079E10(0);
    func_018248(dt);
    func_070C38(dt);
    func_073DE8();
    func_088E78(0, 0x1D);
    func_081B60();
    func_000A20();
    func_011C90();
    if (!func_018558(6)) {
        func_08E7C0(dt);
        func_08E640();
    }
    func_079E10(0);
    func_0160E0();
    func_112CD8();
    func_031E20();
    func_08A3F8();
    func_09D9A0();
    func_000BF0(0);
    if (D_0018E496)
        SND_LevelUpdate(D_001CFBF8, D_001CFBF8);
    else
        func_000BF0(0);
    m0 = D_001D5390;
    a = func_000DC0();
    func_000BF0(1);
    m1 = D_001D8D80;
    b = func_000DC0();
    func_000BF0(0);
    SND_Update(m0, a, m1, b);
    func_0194E0();
    func_07E190(-1);
    func_071BF8();
    func_027530();
    if (D_0018E498) {
        D_0018E498 = D_0018E498 - 1;
        if (D_0018E498)
            return;
    }
    if (D_0018E49C) {
        D_0018E498 = 0;
        func_018518(5, 0);
    }
}
