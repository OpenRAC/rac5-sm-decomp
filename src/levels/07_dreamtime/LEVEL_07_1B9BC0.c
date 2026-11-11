/* LEVEL_07:0x1B9BC0 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_0021D8B4;
extern int D_0021D8B8;
extern int D_0021D8BC;
extern unsigned int D_002AD6C8;
extern void func_0F0548(int);
extern void func_0F1230(int);
extern int func_12D068(unsigned int);
extern int func_0E4860(unsigned int);

void func_1B9BC0(void)
{
    func_0F0548(0x21);
    func_0F0548(0x22);
    D_0021D8B4 = func_12D068(0x2AC52A27u);
    D_0021D8B8 = func_12D068(0x9C86CC60u);
    func_0F1230(1);
    func_0F1230(2);
    D_0021D8BC = func_0E4860((D_002AD6C8 << 16) | 0xA00070D9u);
}
