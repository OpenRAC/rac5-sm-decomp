/* LEVEL_02:0x1AECA0 -- when the record's first helper value is nonzero, calls two helpers and sets a flag and a float; otherwise calls a third helper and clears the flag. */
extern char *func_01ACB0(void);
extern int func_08B060(void *a0, char *a1);
extern int func_03D480(char *a0);
extern char D_0024C650[];

void func_1AECA0(char *a0)
{
    char *rec;

    rec = *(char **)(a0 + 0x54);
    if (*(void **)(rec + 0xC) != 0) {
        if (func_08B060(*(void **)(rec + 0xC), func_01ACB0()) != 0) {
            *(unsigned char *)(a0 + 0x45) = 1;
            *(float *)(a0 + 0x70) = 30.0f;
            return;
        }
    }
    if ((unsigned char)func_03D480(D_0024C650) == 0) {
        *(unsigned char *)(a0 + 0x45) = 0;
    }
}
