/* LEVEL_20:0x0A6180 -- placement copy of LEVEL_16_0BBC50.c: placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_07FDB8(void);
extern void func_0A6200(void);
extern void func_0E3930(int a0, char *a1, int a2);
extern int D_001121CC;
extern char D_00129FB8[];

void func_0A6180(void)
{
    int saved;

    saved = ((int (*)(int))func_07FDB8)(0);
    D_001121CC = ((int (*)(int))func_07FDB8)(1);
    func_0A6200();
    func_0E3930(0, D_00129FB8, saved);
}
