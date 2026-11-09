/* LEVEL_24:0x17DC40 -- placement copy of LEVEL_01_19F5A0.c: runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_018888(char *a0);
extern void func_0188C8(char *a0);
extern void func_018958(char *a0, float f0);
extern void func_018988(int a0);
extern void func_018998(float f0);
extern void func_0189A8(char *a0);
extern char D_001E8BE8[];

void func_17DC40(char *a0)
{
    func_018888(a0 + 0x30);
    func_0188C8(a0);
    func_018958(D_001E8BE8, 0.0f);
    func_018988(1);
    func_018998(3.0f);
    func_0189A8(a0);
}
