/* LEVEL_03:0x1B84A8 -- placement copy of LEVEL_01_1A53A0.c: level setup: runs two registration steps (0x21, 0x22), looks up two fixed ids and a packed id into three globals, and runs two more steps (1, 2) in between. */
extern int D_00221BB4;
extern int D_00221BB8;
extern int D_00221BBC;
extern unsigned int D_002B2C48;
extern void func_0EDFE0(int);
extern void func_0EECC8(int);
extern int func_1282D0(unsigned int);
extern int func_0E2FB0(unsigned int);

void func_1B84A8(void)
{
    func_0EDFE0(0x21);
    func_0EDFE0(0x22);
    D_00221BB4 = func_1282D0(0x2AC52A27u);
    D_00221BB8 = func_1282D0(0x9C86CC60u);
    func_0EECC8(1);
    func_0EECC8(2);
    D_00221BBC = func_0E2FB0((D_002B2C48 << 16) | 0xA00070D9u);
}
