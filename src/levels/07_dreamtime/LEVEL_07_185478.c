/* LEVEL_07:0x185478 -- placement copy of LEVEL_03_178488.c: converts six table records through a helper and stores the results in a parallel table. */
typedef struct {
    int f_00;
    char pad_04[0x10];
} Elem;

extern Elem D_00237398[];
extern int D_003AB848[];
extern int func_12D068(int a0);

void func_185478(void)
{
    int i;

    for (i = 0; i != 6; i++) {
        D_003AB848[i] = func_12D068(D_00237398[i].f_00);
    }
}
