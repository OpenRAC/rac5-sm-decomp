/* LEVEL_20:0x0E8908 -- placement copy of LEVEL_16_116008.c: optionally configures a device, then calls two helpers per slot in a loop. */

extern void func_07F860(int a0, unsigned int a1, int a2, int a3, int a4, int a5);
extern void func_026560(void);
extern int func_0A3D58(int a0);
extern void func_0A3910(int a0);

void func_0E8908(int a0)
{
    int i;

    if (a0 != 0) {
        func_07F860(0, 0x80000000u, 0x20, 0x20, 3, 0);
    }
    func_026560();
    i = 0;
    do {
        func_0A3D58(i);
        i++;
        func_0A3910(20);
    } while (i < 2);
}
