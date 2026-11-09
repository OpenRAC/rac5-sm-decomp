/* LEVEL_08:0x1B3030 -- sets up GU render state and returns whether state 7 was set. */
extern int func_0AB250(int a);
extern void func_0AB228(int a);
extern void func_0AB208(int a);
extern void func_0AB398(float a, float b);
extern void func_0B0150(int a);
extern void func_0AB4B8(int a);
extern void func_0AB4C0(int a, int b, int c, int d, int e);
extern void func_0AB320(unsigned int a);
extern void func_0AB310(int a);
extern void MatrixMode(int mode) __asm__("MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType");
extern void PushMatrix(void) __asm__("PushMatrix__Q34scee3Psp3Gumv");
extern void LoadIdentity(void) __asm__("LoadIdentity__Q34scee3Psp3Gumv");
extern void UpdateMatrix(void) __asm__("UpdateMatrix__Q34scee3Psp3Gumv");

int func_1B3030(void)
{
    int on;

    on = func_0AB250(7) != 0;
    func_0AB228(7);
    MatrixMode(2);
    PushMatrix();
    LoadIdentity();
    UpdateMatrix();
    func_0AB398(1.0f, 1.0f);
    func_0B0150(0xFF);
    func_0AB4B8(1);
    func_0AB228(5);
    func_0AB228(0);
    func_0AB208(9);
    func_0AB208(1);
    func_0AB208(4);
    func_0AB4C0(0, 2, 3, 0, 0);
    func_0AB228(10);
    func_0AB320(0xFFFFFFFF);
    func_0AB310(0);
    return on;
}
