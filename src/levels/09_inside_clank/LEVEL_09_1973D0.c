/* LEVEL_09:0x1973D0 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_001F290C;
extern int D_001F2910;
extern int D_001F2914;
extern unsigned int D_0027F548;
extern void func_0EB628(int);
extern void func_0EC310(int);
extern int func_123000(unsigned int);
extern int func_0DFD20(unsigned int);

void func_1973D0(void)
{
    func_0EB628(0x21);
    func_0EB628(0x22);
    D_001F290C = func_123000(0x2AC52A27u);
    D_001F2910 = func_123000(0x9C86CC60u);
    func_0EC310(1);
    func_0EC310(2);
    D_001F2914 = func_0DFD20((D_0027F548 << 16) | 0xA00070D9u);
}
