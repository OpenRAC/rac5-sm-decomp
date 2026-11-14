/* LEVEL_10:0x0C8D38 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0B71F8(int index);
extern void func_019EA8(int a, int b);
extern void func_1335F0(void *o);

void func_0C8D38(void *o)
{
    func_0B71F8(0);
    func_0B71F8(7);
    func_019EA8(4, 0);
    func_1335F0(o);
}
