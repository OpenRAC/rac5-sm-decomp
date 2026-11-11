/* LEVEL_01:0x19F5A0 -- runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_01A140(char *a0);
extern void func_01A180(char *a0);
extern void func_01A210(char *a0, float f0);
extern void func_01A240(int a0);
extern void func_01A250(float f0);
extern void func_01A260(char *a0);
extern char D_00217E68[];

void func_19F5A0(char *a0)
{
    func_01A140(a0 + 0x30);
    func_01A180(a0);
    func_01A210(D_00217E68, 0.0f);
    func_01A240(1);
    func_01A250(3.0f);
    func_01A260(a0);
}
