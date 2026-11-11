/* LEVEL_08:0x1D1C58 -- placement copy of LEVEL_01_19F5A0.c: runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_01AB30(char *a0);
extern void func_01AB70(char *a0);
extern void func_01AC00(char *a0, float f0);
extern void func_01AC30(int a0);
extern void func_01AC40(float f0);
extern void func_01AC50(char *a0);
extern char D_00261AE8[];

void func_1D1C58(char *a0)
{
    func_01AB30(a0 + 0x30);
    func_01AB70(a0);
    func_01AC00(D_00261AE8, 0.0f);
    func_01AC30(1);
    func_01AC40(3.0f);
    func_01AC50(a0);
}
