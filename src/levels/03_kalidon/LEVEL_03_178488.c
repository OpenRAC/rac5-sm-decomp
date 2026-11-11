/* LEVEL_03:0x178488 -- converts six table records through a helper and stores the results in a parallel table. */
typedef struct {
    int f_00;
    char pad_04[0x10];
} Elem;

extern Elem D_0023B108[];
extern int D_003B0D78[];
extern int func_1282D0(int a0);

void func_178488(void)
{
    int i;

    for (i = 0; i != 6; i++) {
        D_003B0D78[i] = func_1282D0(D_0023B108[i].f_00);
    }
}
