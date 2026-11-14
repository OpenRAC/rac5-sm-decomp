/* LEVEL_18:0x07CB88 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_001F5834;
extern char D_001F4030[];
extern void func_07C718(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_001F5834 != 0) {
        func_07C718(D_001F5834, D_001F4030);
    }
}
