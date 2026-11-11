/* LEVEL_02:0x1B9F68 -- placement copy of LEVEL_01_19F5A0.c: runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_01AB40(char *a0);
extern void func_01AB80(char *a0);
extern void func_01AC10(char *a0, float f0);
extern void func_01AC40(int a0);
extern void func_01AC50(float f0);
extern void func_01AC60(char *a0);
extern char D_0022CDE8[];

void func_1B9F68(char *a0)
{
    func_01AB40(a0 + 0x30);
    func_01AB80(a0);
    func_01AC10(D_0022CDE8, 0.0f);
    func_01AC40(1);
    func_01AC50(3.0f);
    func_01AC60(a0);
}
