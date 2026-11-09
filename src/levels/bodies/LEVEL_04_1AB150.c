/* LEVEL_04:0x1AB150 -- placement copy of LEVEL_01_19F5A0.c: runs a fixed sequence of helper calls on one object, with two float constants. */
extern void func_019E18(char *a0);
extern void func_019E58(char *a0);
extern void func_019EE8(char *a0, float f0);
extern void func_019F18(int a0);
extern void func_019F28(float f0);
extern void func_019F38(char *a0);
extern char D_002317E8[];

void func_1AB150(char *a0)
{
    func_019E18(a0 + 0x30);
    func_019E58(a0);
    func_019EE8(D_002317E8, 0.0f);
    func_019F18(1);
    func_019F28(3.0f);
    func_019F38(a0);
}
