/* LEVEL_06:0x195178 -- placement copy of LEVEL_01_19F5A0.c: runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_0189F0(char *a0);
extern void func_018A30(char *a0);
extern void func_018AC0(char *a0, float f0);
extern void func_018AF0(int a0);
extern void func_018B00(float f0);
extern void func_018B10(char *a0);
extern char D_00206CE8[];

void func_195178(char *a0)
{
    func_0189F0(a0 + 0x30);
    func_018A30(a0);
    func_018AC0(D_00206CE8, 0.0f);
    func_018AF0(1);
    func_018B00(3.0f);
    func_018B10(a0);
}
