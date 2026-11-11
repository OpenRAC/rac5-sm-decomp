/* LEVEL_04:0x1CF0C0 -- placement copy of LEVEL_01_1BC200.c: forwards the field of a nested record to the helper. */
extern void func_031040(int a0, int a1, char *a2, char *nested, int value);

void func_1CF0C0(int a0, int a1, char *a2)
{
    char *nested = *(char **)(a2 + 0x54);
    func_031040(a0, a1, a2, nested, *(int *)(nested + 0x38));
}
