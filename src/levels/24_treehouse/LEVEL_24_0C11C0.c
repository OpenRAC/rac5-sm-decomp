/* LEVEL_24:0x0C11C0 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0AF8B0(int index);
extern void func_018E18(int a, int b);
extern void func_12B270(void *o);

void func_0C11C0(void *o)
{
    func_0AF8B0(0);
    func_0AF8B0(7);
    func_018E18(4, 0);
    func_12B270(o);
}
