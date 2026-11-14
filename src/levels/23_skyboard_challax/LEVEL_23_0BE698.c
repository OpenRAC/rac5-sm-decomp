/* LEVEL_23:0x0BE698 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0ACDE8(int index);
extern void func_019338(int a, int b);
extern void func_126EE8(void *o);

void func_0BE698(void *o)
{
    func_0ACDE8(0);
    func_0ACDE8(7);
    func_019338(4, 0);
    func_126EE8(o);
}
