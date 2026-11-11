/* LEVEL_10:0x1AF548 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_00211A34;
extern int D_00211A38;
extern int D_00211A3C;
extern unsigned int D_002A11C8;
extern void func_0EF088(int);
extern void func_0EFD70(int);
extern int func_127EC8(unsigned int);
extern int func_0E4608(unsigned int);

void func_1AF548(void)
{
    func_0EF088(0x21);
    func_0EF088(0x22);
    D_00211A34 = func_127EC8(0x2AC52A27u);
    D_00211A38 = func_127EC8(0x9C86CC60u);
    func_0EFD70(1);
    func_0EFD70(2);
    D_00211A3C = func_0E4608((D_002A11C8 << 16) | 0xA00070D9u);
}
