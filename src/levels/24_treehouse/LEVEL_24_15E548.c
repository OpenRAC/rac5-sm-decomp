/* LEVEL_24:0x15E548 -- placement copy of LEVEL_03_178488.c: converts six table records through a helper and stores the results in a parallel table. */
typedef struct {
    int f_00;
    char pad_04[0x10];
} Elem;

extern Elem D_001F03A0[];
extern int D_0035FF18[];
extern int func_11FB68(int a0);

void func_15E548(void)
{
    int i;

    for (i = 0; i != 6; i++) {
        D_0035FF18[i] = func_11FB68(D_001F03A0[i].f_00);
    }
}
