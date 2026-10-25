/* LEVEL_15.REL:0x044928 -- resets the effect: one bare call, then three
   calls that share the same pair of integers and a 1.0 amplitude, then a
   final call with a null object. */
extern void func_02F6D8(void);
extern void func_003240(int a, int b, float scale, float amp);
extern void func_003270(int a, int b, float scale, float amp);
extern void func_0033E0(int a, int b, float scale, float amp);
extern void func_003720(void *object);

void func_044928(void)
{
    func_02F6D8();
    func_003240(10, 2, 6.0f, 1.0f);
    func_003270(10, 2, 3.0f, 1.0f);
    func_0033E0(10, 2, -0.3f, 1.0f);
    func_003720(0);
}
