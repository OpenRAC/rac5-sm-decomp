/* LEVEL_19:0x07D6F0 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_001F5634;
extern char D_001F3E30[];
extern void func_07D280(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_001F5634 != 0) {
        func_07D280(D_001F5634, D_001F3E30);
    }
}
