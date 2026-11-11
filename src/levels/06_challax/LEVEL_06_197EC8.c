/* LEVEL_06:0x197EC8 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_001F7B6C;
extern int D_001F7B70;
extern int D_001F7B74;
extern unsigned int D_00284B48;
extern void func_0E8808(int);
extern void func_0E94F0(int);
extern int func_1206C0(unsigned int);
extern int func_0DDAC8(unsigned int);

void func_197EC8(void)
{
    func_0E8808(0x21);
    func_0E8808(0x22);
    D_001F7B6C = func_1206C0(0x2AC52A27u);
    D_001F7B70 = func_1206C0(0x9C86CC60u);
    func_0E94F0(1);
    func_0E94F0(2);
    D_001F7B74 = func_0DDAC8((D_00284B48 << 16) | 0xA00070D9u);
}
