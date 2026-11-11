/* LEVEL_09:0x16C048 -- placement copy of LEVEL_03_178488.c: converts six table records through a helper and stores the results in a parallel table. */
typedef struct {
    int f_00;
    char pad_04[0x10];
} Elem;

extern Elem D_0020A718[];
extern int D_0037D5A8[];
extern int func_123000(int a0);

void func_16C048(void)
{
    int i;

    for (i = 0; i != 6; i++) {
        D_0037D5A8[i] = func_123000(D_0020A718[i].f_00);
    }
}
