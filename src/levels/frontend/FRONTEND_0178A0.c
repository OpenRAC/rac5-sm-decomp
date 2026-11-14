/* FRONTEND:0x0178A0 -- runs a two-argument helper with fixed values, then a second helper on the argument. */
extern void func_001AE0(int a, int b);
extern void func_022A30(int *p);

void func_0178A0(int *p)
{
    func_001AE0(0xB, 0xC);
    func_022A30(p);
}
