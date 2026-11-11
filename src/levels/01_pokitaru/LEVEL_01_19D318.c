/* LEVEL_01:0x19D318 -- placement copy of LEVEL_01_19C6E0.c: calls a test helper and, when it passes, a follow-up helper. */
extern char D_00235140[];
extern int func_19D278(void *, void *);
extern void func_19CE20(void *, void *);

int func_19D318(void *record)
{
    if (func_19D278(record, D_00235140) != 0) {
        func_19CE20(record, D_00235140);
        return 1;
    }
    return 0;
}
