/* LEVEL_19:0x1513A0 -- placement copy of LEVEL_03_178488.c: converts six table records through a helper and stores the results in a parallel table. */
typedef struct {
    int f_00;
    char pad_04[0x10];
} Elem;

extern Elem D_001D4F80[];
extern int D_002E5300[];
extern int func_107538(int a0);

void func_1513A0(void)
{
    int i;

    for (i = 0; i != 6; i++) {
        D_002E5300[i] = func_107538(D_001D4F80[i].f_00);
    }
}
