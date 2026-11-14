/* LEVEL_03:0x0C76E0 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0B5E08(int index);
extern void func_01A590(int a, int b);
extern void func_133B38(void *o);

void func_0C76E0(void *o)
{
    func_0B5E08(0);
    func_0B5E08(7);
    func_01A590(4, 0);
    func_133B38(o);
}
