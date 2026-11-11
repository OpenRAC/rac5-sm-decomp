/* LEVEL_04:0x055058 -- a chain of the shared calls, each with the same
   trailing pair of arguments. */
extern void func_03D800(void *obj);
extern void func_0034F0(int a0, int a1, float a2, float a3);
extern void func_003520(int a0, int a1, float a2, float a3);
extern void func_003690(int a0, int a1, float a2, float a3);
extern void func_0039F8(void *a0);

void func_055058(char *state)
{
    float one = 1.0f;

    func_03D800(state);
    func_0034F0(10, 2, 6.0f, one);
    func_003520(10, 2, 3.0f, one);
    func_003690(10, 2, -0.3f, one);
    func_0039F8(0);
}
