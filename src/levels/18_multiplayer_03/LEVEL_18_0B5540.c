/* LEVEL_18:0x0B5540 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0A40A8(int index);
extern void func_0181E0(int a, int b);
extern void func_110AF0(void *o);

void func_0B5540(void *o)
{
    func_0A40A8(0);
    func_0A40A8(7);
    func_0181E0(4, 0);
    func_110AF0(o);
}
