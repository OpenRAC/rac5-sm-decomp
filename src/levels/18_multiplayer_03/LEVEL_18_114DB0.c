/* LEVEL_18:0x114DB0 -- placement copy of LEVEL_16_116008.c: optionally configures a device, then calls two helpers per slot in a loop. */

extern void func_094178(int a0, unsigned int a1, int a2, int a3, int a4, int a5);
extern void func_029008(void);
extern int func_0B8800(int a0);
extern void func_0B83B8(int a0);

void func_114DB0(int a0)
{
    int i;

    if (a0 != 0) {
        func_094178(0, 0x80000000u, 0x20, 0x20, 3, 0);
    }
    func_029008();
    i = 0;
    do {
        func_0B8800(i);
        i++;
        func_0B83B8(20);
    } while (i < 2);
}
