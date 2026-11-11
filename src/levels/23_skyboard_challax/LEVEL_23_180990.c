/* LEVEL_23:0x180990 -- placement copy of LEVEL_01_19F5A0.c: runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_018DA8(char *a0);
extern void func_018DE8(char *a0);
extern void func_018E78(char *a0, float f0);
extern void func_018EA8(int a0);
extern void func_018EB8(float f0);
extern void func_018EC8(char *a0);
extern char D_001EAFE8[];

void func_180990(char *a0)
{
    func_018DA8(a0 + 0x30);
    func_018DE8(a0);
    func_018E78(D_001EAFE8, 0.0f);
    func_018EA8(1);
    func_018EB8(3.0f);
    func_018EC8(a0);
}
