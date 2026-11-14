/* LEVEL_19:0x0B5E40 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0A4928(int index);
extern void func_018898(int a, int b);
extern void func_1124E0(void *o);

void func_0B5E40(void *o)
{
    func_0A4928(0);
    func_0A4928(7);
    func_018898(4, 0);
    func_1124E0(o);
}
