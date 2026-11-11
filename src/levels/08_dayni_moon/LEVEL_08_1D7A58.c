/* LEVEL_08:0x1D7A58 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_0025237C;
extern int D_00252380;
extern int D_00252384;
extern unsigned int D_002E7048;
extern void func_0FB190(int);
extern void func_0FBE78(int);
extern int func_13B5A0(unsigned int);
extern int func_0EE198(unsigned int);

void func_1D7A58(void)
{
    func_0FB190(0x21);
    func_0FB190(0x22);
    D_0025237C = func_13B5A0(0x2AC52A27u);
    D_00252380 = func_13B5A0(0x9C86CC60u);
    func_0FBE78(1);
    func_0FBE78(2);
    D_00252384 = func_0EE198((D_002E7048 << 16) | 0xA00070D9u);
}
