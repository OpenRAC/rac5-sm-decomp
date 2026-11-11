/* LEVEL_08:0x1C0C50 -- placement copy of LEVEL_01_1BC200.c: forwards the field of a nested record to the helper. */
extern void func_031770(int a0, int a1, char *a2, char *nested, int value);

void func_1C0C50(int a0, int a1, char *a2)
{
    char *nested = *(char **)(a2 + 0x54);
    func_031770(a0, a1, a2, nested, *(int *)(nested + 0x38));
}
