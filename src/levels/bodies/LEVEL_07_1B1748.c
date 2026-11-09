/* LEVEL_07:0x1B1748 -- placement copy of LEVEL_01_19F5A0.c: runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_01A8B0(char *a0);
extern void func_01A8F0(char *a0);
extern void func_01A980(char *a0, float f0);
extern void func_01A9B0(int a0);
extern void func_01A9C0(float f0);
extern void func_01A9D0(char *a0);
extern char D_0022CB68[];

void func_1B1748(char *a0)
{
    func_01A8B0(a0 + 0x30);
    func_01A8F0(a0);
    func_01A980(D_0022CB68, 0.0f);
    func_01A9B0(1);
    func_01A9C0(3.0f);
    func_01A9D0(a0);
}
