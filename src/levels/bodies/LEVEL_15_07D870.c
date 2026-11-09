/* LEVEL_15:0x07D870 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_081520(int a0);
extern void func_081270(int a0);
extern void func_081330(int a0);
extern void func_081510(int a0, int a1, int a2);
extern void func_081500(int a0, unsigned int a1, unsigned int a2);
extern void func_081370(int a0);
extern void func_0813F0(int a0, int a1);
extern void func_083538(void);
extern int *D_0015B710;

void func_07D870(void)
{
    func_081520(0);
    func_081270(5);
    func_081330(0);
    func_081510(1, 0, 0);
    func_081500(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_081370(*D_0015B710);
    func_0813F0(0, 0);
    func_083538();
}
