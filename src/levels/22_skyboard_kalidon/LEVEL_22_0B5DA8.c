/* LEVEL_22:0x0B5DA8 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0A4570(int index);
extern void func_016E40(int a, int b);
extern void func_10CC40(void *o);

void func_0B5DA8(void *o)
{
    func_0A4570(0);
    func_0A4570(7);
    func_016E40(4, 0);
    func_10CC40(o);
}
