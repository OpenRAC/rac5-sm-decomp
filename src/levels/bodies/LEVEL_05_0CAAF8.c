/* LEVEL_05:0x0CAAF8 -- placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_0A49A0(int a0);
extern void func_0CAB78(void);
extern void func_12F750(int a0, char *a1, int a2);
extern int D_001F0FBC;
extern char D_00202F78[];

void func_0CAAF8(void)
{
    int saved;

    saved = func_0A49A0(0);
    D_001F0FBC = func_0A49A0(1);
    func_0CAB78();
    func_12F750(0, D_00202F78, saved);
}
