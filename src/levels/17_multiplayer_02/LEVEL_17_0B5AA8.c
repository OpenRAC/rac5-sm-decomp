/* LEVEL_17:0x0B5AA8 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0A4590(int index);
extern void func_018518(int a, int b);
extern void func_1113B8(void *o);

void func_0B5AA8(void *o)
{
    func_0A4590(0);
    func_0A4590(7);
    func_018518(4, 0);
    func_1113B8(o);
}
