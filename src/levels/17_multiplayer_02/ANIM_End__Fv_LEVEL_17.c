/* LEVEL_17:0x07DC80 -- placement copy of LEVEL_01_08BC60.c: when the global record exists, forwards it with the fixed table address. */
extern void *D_001E67B4;
extern char D_001E4FB0[];
extern void func_07D810(void *a, char *b);
void ANIM_End__Fv(void)
{
    if (D_001E67B4 != 0) {
        func_07D810(D_001E67B4, D_001E4FB0);
    }
}
