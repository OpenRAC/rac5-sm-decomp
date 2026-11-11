/* LEVEL_19:0x116780 -- placement copy of LEVEL_16_116008.c: optionally configures a device, then calls two helpers per slot in a loop. */

extern void func_0949F8(int a0, unsigned int a1, int a2, int a3, int a4, int a5);
extern void func_029800(void);
extern int func_0B9100(int a0);
extern void func_0B8CB8(int a0);

void func_116780(int a0)
{
    int i;

    if (a0 != 0) {
        func_0949F8(0, 0x80000000u, 0x20, 0x20, 3, 0);
    }
    func_029800();
    i = 0;
    do {
        func_0B9100(i);
        i++;
        func_0B8CB8(20);
    } while (i < 2);
}
