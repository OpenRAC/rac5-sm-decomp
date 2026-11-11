/* LEVEL_19:0x018E68 -- placement copy of LEVEL_16_019168.c: runs the per-frame level update sequence. */
extern unsigned char D_0019C014;
extern unsigned char D_0019C015;
extern unsigned char D_0019C016;
extern int D_0019C018;
extern int D_0019C01C;
extern float D_001E07AC;
extern char D_001DEA78[];
extern char D_001E4210[];
extern char D_001E7C00[];
extern void FOG_PreUpdate(void) __asm__("FOG_PreUpdate__Fv");
extern void SND_LevelUpdate(void *a, void *b) __asm__("SND_LevelUpdate__FPC7MATRIX4T0");
extern void SND_Update(void *a, int b, void *c, int d) __asm__("SND_Update__FPC7MATRIX4N30");
extern void func_07E000(void);
extern void func_029728(void);
extern void func_013050(void);
extern void func_018DA0(void);
extern void func_018D98(void);
extern int func_0188D8(int);
extern void func_0790E0(void);
extern char *func_079978(int);
extern void func_000990(void);
extern void func_030E68(void);
extern void func_033148(void);
extern void func_031848(void);
extern void func_089CC0(void);
extern void func_0857A0(float);
extern void func_081538(void);
extern void func_019AA0(void);
extern void func_070A90(float);
extern void func_028F30(void);
extern void func_0D98B0(void);
extern void func_08E4C8(void);
extern void func_070E58(void);
extern void func_08E548(void);
extern void func_0337C0(float);
extern void func_079880(int);
extern void func_0185C8(float);
extern void func_070650(float);
extern void func_073800(void);
extern void func_0888E8(int, int);
extern void func_0815D0(void);
extern void func_000A20(void);
extern void func_011C90(void);
extern void func_08EB60(float);
extern void func_08E9E0(void);
extern void func_016480(void);
extern void func_113CF0(void);
extern void func_031868(void);
extern void func_089E68(void);
extern int func_09DD38(void);
extern void func_000BF0(int);
extern int func_000DC0(void);
extern void func_019860(void);
extern void func_07DC00(int);
extern void func_071610(void);
extern void func_027758(void);
extern void func_018898(int, int);

void func_018E68(void)
{
    float dt;
    int a;
    int b;
    char *m0;
    char *m1;

    D_0019C014 = 1;
    D_0019C015 = 1;
    func_07E000();
    func_029728();
    func_013050();
    func_018DA0();
    func_018D98();
    dt = D_001E07AC;
    if (!func_0188D8(6))
        func_0790E0();
    func_079978(1);
    FOG_PreUpdate();
    func_000990();
    func_030E68();
    func_033148();
    func_031848();
    func_089CC0();
    func_0857A0(dt);
    func_081538();
    func_019AA0();
    func_070A90(dt);
    func_028F30();
    func_0D98B0();
    func_08E4C8();
    func_070E58();
    func_08E548();
    func_0337C0(dt);
    func_079880(0);
    func_0185C8(dt);
    func_070650(dt);
    func_073800();
    func_0888E8(0, 0x1D);
    func_0815D0();
    func_000A20();
    func_011C90();
    if (!func_0188D8(6)) {
        func_08EB60(dt);
        func_08E9E0();
    }
    func_079880(0);
    func_016480();
    func_113CF0();
    func_031868();
    func_089E68();
    func_09DD38();
    func_000BF0(0);
    if (D_0019C016)
        SND_LevelUpdate(D_001DEA78, D_001DEA78);
    else
        func_000BF0(0);
    m0 = D_001E4210;
    a = func_000DC0();
    func_000BF0(1);
    m1 = D_001E7C00;
    b = func_000DC0();
    func_000BF0(0);
    SND_Update(m0, a, m1, b);
    func_019860();
    func_07DC00(-1);
    func_071610();
    func_027758();
    if (D_0019C018) {
        D_0019C018 = D_0019C018 - 1;
        if (D_0019C018)
            return;
    }
    if (D_0019C01C) {
        D_0019C018 = 0;
        func_018898(5, 0);
    }
}
