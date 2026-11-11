/* LEVEL_01:0x1A53A0 -- level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_00208BFC;
extern int D_00208C00;
extern int D_00208C04;
extern unsigned int D_00297DC8;
extern void func_0EF748(int);
extern void func_0F0430(int);
extern int func_12A068(unsigned int);
extern int func_0E31C8(unsigned int);

void func_1A53A0(void)
{
    func_0EF748(0x21);
    func_0EF748(0x22);
    D_00208BFC = func_12A068(0x2AC52A27u);
    D_00208C00 = func_12A068(0x9C86CC60u);
    func_0F0430(1);
    func_0F0430(2);
    D_00208C04 = func_0E31C8((D_00297DC8 << 16) | 0xA00070D9u);
}
