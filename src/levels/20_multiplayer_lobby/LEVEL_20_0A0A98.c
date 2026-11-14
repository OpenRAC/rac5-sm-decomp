/* LEVEL_20:0x0A0A98 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_08F6B0(int index);
extern void func_016950(int a, int b);
extern void func_0E4C28(void *o);

void func_0A0A98(void *o)
{
    func_08F6B0(0);
    func_08F6B0(7);
    func_016950(4, 0);
    func_0E4C28(o);
}
