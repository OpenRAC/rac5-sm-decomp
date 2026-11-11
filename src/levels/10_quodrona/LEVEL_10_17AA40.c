/* LEVEL_10:0x17AA40 -- placement copy of LEVEL_03_178488.c: converts six table records through a helper and stores the results in a parallel table. */
typedef struct {
    int f_00;
    char pad_04[0x10];
} Elem;

extern Elem D_0022AC78[];
extern int D_0039F330[];
extern int func_127EC8(int a0);

void func_17AA40(void)
{
    int i;

    for (i = 0; i != 6; i++) {
        D_0039F330[i] = func_127EC8(D_0022AC78[i].f_00);
    }
}
