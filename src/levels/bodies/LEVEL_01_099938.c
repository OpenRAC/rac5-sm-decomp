/* LEVEL_01:0x099938 -- runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_0A0BC0(int a0);
extern void func_0A0908(int a0);
extern void func_0A09C8(int a0);
extern void func_0A0BB0(int a0, int a1, int a2);
extern void func_0A0BA0(int a0, unsigned int a1, unsigned int a2);
extern void func_0A0A08(int a0);
extern void func_0A0A90(int a0, int a1);
extern void func_0A2C40(void);
extern int *D_00206D90;

void func_099938(void)
{
    func_0A0BC0(0);
    func_0A0908(5);
    func_0A09C8(0);
    func_0A0BB0(1, 0, 0);
    func_0A0BA0(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_0A0A08(*D_00206D90);
    func_0A0A90(0, 0);
    func_0A2C40();
}
