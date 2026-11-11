/* LEVEL_02:0x1C4BE0 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_0021DC6C;
extern int D_0021DC70;
extern int D_0021DC74;
extern unsigned int D_002AF2C8;
extern void func_0F58F8(int);
extern void func_0F65E0(int);
extern int func_130418(unsigned int);
extern int func_0E9B58(unsigned int);

void func_1C4BE0(void)
{
    func_0F58F8(0x21);
    func_0F58F8(0x22);
    D_0021DC6C = func_130418(0x2AC52A27u);
    D_0021DC70 = func_130418(0x9C86CC60u);
    func_0F65E0(1);
    func_0F65E0(2);
    D_0021DC74 = func_0E9B58((D_002AF2C8 << 16) | 0xA00070D9u);
}
