/* LEVEL_21:0x0A7F40 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_096530(int index);
extern void func_016A10(int a, int b);
extern void func_0F4638(void *o);

void func_0A7F40(void *o)
{
    func_096530(0);
    func_096530(7);
    func_016A10(4, 0);
    func_0F4638(o);
}
