/* LEVEL_06:0x0C21F8 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0B0848(int index);
extern void func_019028(int a, int b);
extern void func_12BE40(void *o);

void func_0C21F8(void *o)
{
    func_0B0848(0);
    func_0B0848(7);
    func_019028(4, 0);
    func_12BE40(o);
}
