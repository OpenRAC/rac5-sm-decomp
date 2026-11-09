/* LEVEL_03:0x162580 -- calls a helper with fixed integer selectors, a pass-through argument and three float constants. */
extern void func_0DBF08(int a0, int a1, unsigned int a2, int a3, int t0, int t1, unsigned int t2,
                         float f0, float f1, float f2);

void func_162580(int a0, int a1)
{
    func_0DBF08(2, a1, 0xFF0000FFu, 0, 10, 0, 0xFFFFFFFFu, 2.0f, 0.0f, 0.08333333581686019f);
}
