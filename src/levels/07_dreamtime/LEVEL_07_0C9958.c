/* LEVEL_07:0x0C9958 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0B8080(int index);
extern void func_01AEE8(int a, int b);
extern void func_138770(void *o);

void func_0C9958(void *o)
{
    func_0B8080(0);
    func_0B8080(7);
    func_01AEE8(4, 0);
    func_138770(o);
}
