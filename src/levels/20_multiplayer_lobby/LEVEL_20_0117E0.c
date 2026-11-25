/* LEVEL_20:0x0117E0 -- calls func_0DA2F8 with a fixed target, 62.831852 and 20.0 plus a float read from a neighbouring global. */
extern float D_00135BE8;
extern char D_00135C20[];

extern void func_0DA2F8(void *, float, float, float);

void func_0117E0(void)
{
    func_0DA2F8(D_00135C20, 62.831852f, 20.0f, D_00135BE8);
}
