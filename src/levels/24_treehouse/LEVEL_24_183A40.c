/* LEVEL_24:0x183A40 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_001D9ACC;
extern int D_001D9AD0;
extern int D_001D9AD4;
extern unsigned int D_00263C88;
extern void func_0E7358(int);
extern void func_0E8040(int);
extern int func_11FB68(unsigned int);
extern int func_0DA688(unsigned int);

void func_183A40(void)
{
    func_0E7358(0x21);
    func_0E7358(0x22);
    D_001D9ACC = func_11FB68(0x2AC52A27u);
    D_001D9AD0 = func_11FB68(0x9C86CC60u);
    func_0E8040(1);
    func_0E8040(2);
    D_001D9AD4 = func_0DA688((D_00263C88 << 16) | 0xA00070D9u);
}
