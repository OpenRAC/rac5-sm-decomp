/* LEVEL_01:0x0C78F8 -- callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0B6020(int index);
extern void func_01A828(int a, int b);
extern void func_135770(void *o);

void func_0C78F8(void *o)
{
    func_0B6020(0);
    func_0B6020(7);
    func_01A828(4, 0);
    func_135770(o);
}
