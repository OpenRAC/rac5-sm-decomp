/* LEVEL_04:0x1B0F50 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_0022230C;
extern int D_00222310;
extern int D_00222314;
extern unsigned int D_002B25C8;
extern void func_0F6C80(int);
extern void func_0F7968(int);
extern int func_1364E8(unsigned int);
extern int func_0E8A88(unsigned int);

void func_1B0F50(void)
{
    func_0F6C80(0x21);
    func_0F6C80(0x22);
    D_0022230C = func_1364E8(0x2AC52A27u);
    D_00222310 = func_1364E8(0x9C86CC60u);
    func_0F7968(1);
    func_0F7968(2);
    D_00222314 = func_0E8A88((D_002B25C8 << 16) | 0xA00070D9u);
}
