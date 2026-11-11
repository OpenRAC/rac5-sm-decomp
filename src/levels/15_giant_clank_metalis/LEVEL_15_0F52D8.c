/* LEVEL_15:0x0F52D8 -- passes a slot's field 8 to a call with flag 1. */
extern char D_002A8B58[];
extern int func_016A90(int a, int b);

void func_0F52D8(void)
{
    char *base = D_002A8B58;
    char *obj = *(char **)(base + (0x40000 + 0x416C));
    func_016A90(*(int *)(obj + 8), 1);
}
