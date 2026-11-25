/* LEVEL_19:0x0BB528 -- placement copy of LEVEL_16_0BBC50.c: placement copy of LEVEL_01_0CC550.c: calls two helpers, stores one result, then calls a sink. */
extern int func_094F50(void);
extern void func_0BB5A8(void);
extern void func_1111E8(int a0, char *a1, int a2);
extern int D_001B0C6C;
extern char D_001CA138[];

void func_0BB528(void)
{
    int saved;

    saved = ((int (*)(int))func_094F50)(0);
    D_001B0C6C = ((int (*)(int))func_094F50)(1);
    func_0BB5A8();
    func_1111E8(0, D_001CA138, saved);
}
