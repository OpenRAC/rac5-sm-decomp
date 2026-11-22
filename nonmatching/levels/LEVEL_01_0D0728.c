/* USA LEVEL_01.REL:0x0D0728, 272-byte candidate (21 November 2026).
 * Measured pinned: 23 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
} Obj;

extern Obj D_0032CA08;
extern int D_002045A8;
extern int D_00203488;
extern unsigned char D_00203499;
extern int D_0020349C;
extern unsigned int D_002034A0;

extern void func_02A0A8(void);
extern void func_0B6020(int a);
extern void func_0B5400(int a);
extern void func_0D6D30(int a);
extern void func_0D0838(void);
extern void func_0D0EC0(void);
extern void func_0AE708(int a, int *buf, float f);
extern int func_0A8680(int *buf);
extern int func_0A86B0(int *buf);
extern int func_0A86E0(int *buf);
extern int func_0A8798(int *buf);
extern void func_0AB3E0(Obj *o, int a, int b, int c, int d, unsigned int e);

void func_0D0728(void)
{
    int buf[4];
    short a;
    short b;
    short c;
    short d;

    func_02A0A8();
    func_0B6020(6);
    D_002045A8 = 0;
    func_0B5400(1);
    func_0D6D30(1);
    func_0D0838();
    D_00203488 = 1;
    D_00203499 = 0;
    D_0020349C = 0;
    func_0D0EC0();
    D_002034A0 = 0xFFFFFFFF;
    func_0AE708(0x2BC, buf, 0.0f);
    a = func_0A8680(buf);
    b = func_0A86B0(buf);
    c = func_0A86E0(buf);
    d = func_0A8798(buf);
    func_0AB3E0(&D_0032CA08, a, b, c, d, 0x40602020);
    D_0032CA08.b39 = 0;
    D_0032CA08.flags |= 0x840;
}
