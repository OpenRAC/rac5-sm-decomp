/* LEVEL_23:0x186698 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_001DC02C;
extern int D_001DC030;
extern int D_001DC034;
extern unsigned int D_00269208;
extern void func_0E2630(int);
extern void func_0E3318(int);
extern int func_11AEE0(unsigned int);
extern int func_0D7B50(unsigned int);

void func_186698(void)
{
    func_0E2630(0x21);
    func_0E2630(0x22);
    D_001DC02C = func_11AEE0(0x2AC52A27u);
    D_001DC030 = func_11AEE0(0x9C86CC60u);
    func_0E3318(1);
    func_0E3318(2);
    D_001DC034 = func_0D7B50((D_00269208 << 16) | 0xA00070D9u);
}
