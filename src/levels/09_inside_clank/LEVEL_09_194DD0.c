/* LEVEL_09:0x194DD0 -- placement copy of LEVEL_01_19F5A0.c: runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_0195B0(char *a0);
extern void func_0195F0(char *a0);
extern void func_019680(char *a0, float f0);
extern void func_0196B0(int a0);
extern void func_0196C0(float f0);
extern void func_0196D0(char *a0);
extern char D_00201A68[];

void func_194DD0(char *a0)
{
    func_0195B0(a0 + 0x30);
    func_0195F0(a0);
    func_019680(D_00201A68, 0.0f);
    func_0196B0(1);
    func_0196C0(3.0f);
    func_0196D0(a0);
}
