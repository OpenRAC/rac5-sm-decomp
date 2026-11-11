/* LEVEL_01:0x0AFFE8 -- calls seven helpers in sequence, two with constant arguments. */
void func_0A9400(void);
void func_0A8CB0(int arg);
void func_0DADB8(void);
void func_0D7930(void);
void func_0A8E80(int a, int b);
void func_0A5E68(int arg);

void func_0AFFE8(void)
{
    func_0A9400();
    func_0A8CB0(1);
    func_0DADB8();
    func_0D7930();
    func_0A8E80(0, 0);
    func_0A5E68(4);
    func_0A5E68(5);
}
