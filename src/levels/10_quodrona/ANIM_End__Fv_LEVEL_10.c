/* LEVEL_10:0x08BFF8 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_00248434;
extern char D_00246C30[];
extern void func_08BB88(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_00248434 != 0) {
        func_08BB88(D_00248434, D_00246C30);
    }
}
