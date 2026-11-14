/* LEVEL_08:0x0D2820 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0C0F10(int index);
extern void func_01B1A0(int a, int b);
extern void func_146CA8(void *o);

void func_0D2820(void *o)
{
    func_0C0F10(0);
    func_0C0F10(7);
    func_01B1A0(4, 0);
    func_146CA8(o);
}
