/* LEVEL_04:0x0CD110 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0BB828(int index);
extern void func_01A4A8(int a, int b);
extern void func_141BF0(void *o);

void func_0CD110(void *o)
{
    func_0BB828(0);
    func_0BB828(7);
    func_01A4A8(4, 0);
    func_141BF0(o);
}
