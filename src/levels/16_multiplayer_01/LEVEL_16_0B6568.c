/* LEVEL_16:0x0B6568 -- placement copy of LEVEL_01_0C78F8.c: callback: stops the two global sounds 0 and 7, plays sound 4 and hands the object to the follow-up routine. */
extern int func_0A50B0(int index);
extern void func_018B98(int a, int b);
extern void func_111E40(void *o);

void func_0B6568(void *o)
{
    func_0A50B0(0);
    func_0A50B0(7);
    func_018B98(4, 0);
    func_111E40(o);
}
