/* LEVEL_16:0x116008 -- optionally configures a device, then calls two helpers per slot in a loop. */

extern void func_095168(int a0, unsigned int a1, int a2, int a3, int a4, int a5);
extern void func_029A58(void);
extern int func_0B9828(int a0);
extern void func_0B93E0(int a0);

void func_116008(int a0)
{
    int i;

    if (a0 != 0) {
        func_095168(0, 0x80000000u, 0x20, 0x20, 3, 0);
    }
    func_029A58();
    i = 0;
    do {
        func_0B9828(i);
        i++;
        func_0B93E0(20);
    } while (i < 2);
}
