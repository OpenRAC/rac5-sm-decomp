/* LEVEL_02:0x0CE208 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0BC930(int index);
extern void func_01B188(int a, int b);
extern void func_13BB20(void *o);

void func_0CE208(void *o)
{
    func_0BC930(0);
    func_0BC930(7);
    func_01B188(4, 0);
    func_13BB20(o);
}
