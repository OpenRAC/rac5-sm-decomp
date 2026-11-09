/* LEVEL_03:0x1B26A8 -- placement copy of LEVEL_01_19F5A0.c: runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_019F50(char *a0);
extern void func_019F90(char *a0);
extern void func_01A020(char *a0, float f0);
extern void func_01A050(int a0);
extern void func_01A060(float f0);
extern void func_01A070(char *a0);
extern char D_00230D68[];

void func_1B26A8(char *a0)
{
    func_019F50(a0 + 0x30);
    func_019F90(a0);
    func_01A020(D_00230D68, 0.0f);
    func_01A050(1);
    func_01A060(3.0f);
    func_01A070(a0);
}
