/* LEVEL_05:0x0C5EA0 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0B45C8(int index);
extern void func_019DC0(int a, int b);
extern void func_1310E8(void *o);

void func_0C5EA0(void *o)
{
    func_0B45C8(0);
    func_0B45C8(7);
    func_019DC0(4, 0);
    func_1310E8(o);
}
