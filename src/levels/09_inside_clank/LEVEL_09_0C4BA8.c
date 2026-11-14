/* LEVEL_09:0x0C4BA8 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0B32D0(int index);
extern void func_019C18(int a, int b);
extern void func_12E708(void *o);

void func_0C4BA8(void *o)
{
    func_0B32D0(0);
    func_0B32D0(7);
    func_019C18(4, 0);
    func_12E708(o);
}
