/* LEVEL_16.REL:0x019168: reviewed 640-byte candidate, held for ABI review.
 * Runs the per-frame level update sequence.
 * gnu-ee-trial C with gnu-ee-trial links 640/640 bytes and is byte-exact at
 * this and 4 other USA placements, but the prototypes disagree.
 * It declares func_079490 returning void with (int), but the accepted
 * LEVEL_16_079490.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_0019AE94;
extern unsigned char D_0019AE95;
extern unsigned char D_0019AE96;
extern int D_0019AE98;
extern int D_0019AE9C;
extern float D_001E062C;
extern char D_001DE8F8[];
extern char D_001E4090[];
extern char D_001E7A80[];
extern void FOG_PreUpdate(void) __asm__("FOG_PreUpdate__Fv");
extern void SND_LevelUpdate(void *a, void *b) __asm__("SND_LevelUpdate__FPC7MATRIX4T0");
extern void SND_Update(void *a, int b, void *c, int d) __asm__("SND_Update__FPC7MATRIX4N30");
extern void func_07DB50(void);
extern void func_029980(void);
extern void func_013050(void);
extern void func_0190A0(void);
extern void func_019098(void);
extern int func_018BD8(int);
extern void func_078BF8(void);
extern void func_079490(int);
extern void func_000990(void);
extern void func_031AD8(void);
extern void func_033DB8(void);
extern void func_0324B8(void);
extern void func_089810(void);
extern void func_0852F0(float);
extern void func_081088(void);
extern void func_019DA0(void);
extern void func_070948(float);
extern void func_029188(void);
extern void func_0DB1F0(void);
extern void func_08EC30(void);
extern void func_070D10(void);
extern void func_08ECB0(void);
extern void func_034430(float);
extern void func_079398(int);
extern void func_0188C8(float);
extern void func_070508(float);
extern void func_0736B8(void);
extern void func_088438(int, int);
extern void func_081120(void);
extern void func_000A20(void);
extern void func_011C90(void);
extern void func_08F2C8(float);
extern void func_08F148(void);
extern void func_0166C0(void);
extern void func_113548(void);
extern void func_0324D8(void);
extern void func_0899B8(void);
extern void func_09E4A8(void);
extern void func_000BF0(int);
extern int func_000DC0(void);
extern void func_019B60(void);
extern void func_07D750(int);
extern void func_0714C8(void);
extern void func_027BB0(void);
extern void func_018B98(int, int);

void func_019168(void)
{
    float dt;
    int a;
    int b;
    char *m0;
    char *m1;

    D_0019AE94 = 1;
    D_0019AE95 = 1;
    func_07DB50();
    func_029980();
    func_013050();
    func_0190A0();
    func_019098();
    dt = D_001E062C;
    if (!func_018BD8(6))
        func_078BF8();
    func_079490(1);
    FOG_PreUpdate();
    func_000990();
    func_031AD8();
    func_033DB8();
    func_0324B8();
    func_089810();
    func_0852F0(dt);
    func_081088();
    func_019DA0();
    func_070948(dt);
    func_029188();
    func_0DB1F0();
    func_08EC30();
    func_070D10();
    func_08ECB0();
    func_034430(dt);
    func_079398(0);
    func_0188C8(dt);
    func_070508(dt);
    func_0736B8();
    func_088438(0, 0x1D);
    func_081120();
    func_000A20();
    func_011C90();
    if (!func_018BD8(6)) {
        func_08F2C8(dt);
        func_08F148();
    }
    func_079398(0);
    func_0166C0();
    func_113548();
    func_0324D8();
    func_0899B8();
    func_09E4A8();
    func_000BF0(0);
    if (D_0019AE96)
        SND_LevelUpdate(D_001DE8F8, D_001DE8F8);
    else
        func_000BF0(0);
    m0 = D_001E4090;
    a = func_000DC0();
    func_000BF0(1);
    m1 = D_001E7A80;
    b = func_000DC0();
    func_000BF0(0);
    SND_Update(m0, a, m1, b);
    func_019B60();
    func_07D750(-1);
    func_0714C8();
    func_027BB0();
    if (D_0019AE98) {
        D_0019AE98 = D_0019AE98 - 1;
        if (D_0019AE98)
            return;
    }
    if (D_0019AE9C) {
        D_0019AE98 = 0;
        func_018B98(5, 0);
    }
}
