/* LEVEL_17:0x115768 -- placement copy of LEVEL_16_116008.c: optionally configures a device, then calls two helpers per slot in a loop. */

extern void func_094660(int a0, unsigned int a1, int a2, int a3, int a4, int a5);
extern void func_0293D8(void);
extern int func_0B8D68(int a0);
extern void func_0B8920(int a0);

void func_115768(int a0)
{
    int i;

    if (a0 != 0) {
        func_094660(0, 0x80000000u, 0x20, 0x20, 3, 0);
    }
    func_0293D8();
    i = 0;
    do {
        func_0B8D68(i);
        i++;
        func_0B8920(20);
    } while (i < 2);
}
