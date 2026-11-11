/* LEVEL_01:0x1BC200 -- forwards the field of a nested record to the helper. */
extern void func_0315C0(int a0, int a1, char *a2, char *nested, int value);

void func_1BC200(int a0, int a1, char *a2)
{
    char *nested = *(char **)(a2 + 0x54);
    func_0315C0(a0, a1, a2, nested, *(int *)(nested + 0x38));
}
