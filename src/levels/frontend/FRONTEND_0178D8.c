/* FRONTEND:0x0178D8 -- callback: stops the two global sounds 0 and 7, sets up scene 11 with mode 12 and hands the object to the follow-up routine. */
extern int func_0145C8(int index);
extern void func_001AE0(int a, int b);
extern void func_022A30(void *o);

void func_0178D8(void *o)
{
    func_0145C8(0);
    func_0145C8(7);
    func_001AE0(11, 12);
    func_022A30(o);
}
