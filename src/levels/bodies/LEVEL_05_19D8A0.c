/* LEVEL_05:0x19D8A0 -- placement copy of LEVEL_01_19F5A0.c: runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_019780(char *a0);
extern void func_0197C0(char *a0);
extern void func_019850(char *a0, float f0);
extern void func_019880(int a0);
extern void func_019890(float f0);
extern void func_0198A0(char *a0);
extern char D_00206D68[];

void func_19D8A0(char *a0)
{
    func_019780(a0 + 0x30);
    func_0197C0(a0);
    func_019850(D_00206D68, 0.0f);
    func_019880(1);
    func_019890(3.0f);
    func_0198A0(a0);
}
