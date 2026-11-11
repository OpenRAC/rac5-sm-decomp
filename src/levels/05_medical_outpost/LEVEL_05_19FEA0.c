/* LEVEL_05:0x19FEA0 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_001F7CA4;
extern int D_001F7CA8;
extern int D_001F7CAC;
extern unsigned int D_00283C88;
extern void func_0EB888(int);
extern void func_0EC570(int);
extern int func_1259E0(unsigned int);
extern int func_0E0DA8(unsigned int);

void func_19FEA0(void)
{
    func_0EB888(0x21);
    func_0EB888(0x22);
    D_001F7CA4 = func_1259E0(0x2AC52A27u);
    D_001F7CA8 = func_1259E0(0x9C86CC60u);
    func_0EC570(1);
    func_0EC570(2);
    D_001F7CAC = func_0E0DA8((D_00283C88 << 16) | 0xA00070D9u);
}
