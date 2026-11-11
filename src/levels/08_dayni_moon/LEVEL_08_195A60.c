/* LEVEL_08:0x195A60 -- placement copy of LEVEL_03_178488.c: converts six table records through a helper and stores the results in a parallel table. */
typedef struct {
    int f_00;
    char pad_04[0x10];
} Elem;

extern Elem D_0026D178[];
extern int D_003E6CB8[];
extern int func_13B5A0(int a0);

void func_195A60(void)
{
    int i;

    for (i = 0; i != 6; i++) {
        D_003E6CB8[i] = func_13B5A0(D_0026D178[i].f_00);
    }
}
