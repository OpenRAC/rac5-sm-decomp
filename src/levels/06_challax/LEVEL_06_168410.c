/* LEVEL_06:0x168410 -- placement copy of LEVEL_03_178488.c: converts six table records through a helper and stores the results in a parallel table. */
typedef struct {
    int f_00;
    char pad_04[0x10];
} Elem;

extern Elem D_0020F690[];
extern int D_00382B88[];
extern int func_1206C0(int a0);

void func_168410(void)
{
    int i;

    for (i = 0; i != 6; i++) {
        D_00382B88[i] = func_1206C0(D_0020F690[i].f_00);
    }
}
