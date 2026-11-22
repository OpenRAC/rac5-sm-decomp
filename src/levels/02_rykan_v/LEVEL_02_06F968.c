/* LEVEL_02:0x06F968 -- placement copy of LEVEL_01_06A8D0.c: counts frames while a button is held and fires an action once the hold is long enough. */

extern char *D_00208C2C;

extern void func_040D18(void *o);
extern int func_0011A8(int a0);
extern int func_0BC930(int a0);

int func_06F968(char *a0, unsigned int *a1)
{
    unsigned int pad;
    int st;

    if ((unsigned char)(*(unsigned long long *)(a0 + 0xF10) >> 5) & 1) {
        return 0;
    }
    pad = *a1;
    st = *(int *)(D_00208C2C + 0x24);
    if ((pad & ((st == 2) ? 0x400 : 0x100)) != ((st == 2) ? 0x400 : 0x100)) {
        *(int *)(a0 + 0xEF8) = 0;
        *(unsigned long long *)(a0 + 0xF10) = *(unsigned long long *)(a0 + 0xF10) & ~1ULL;
        return 0;
    }
    if (!(*(unsigned char *)(a0 + 0xF10) & 1)) {
        *(unsigned int *)(a0 + 0xEF8) = *(unsigned int *)(a0 + 0xEF8) + 1;
        if (!((float)*(unsigned int *)(a0 + 0xEF8) < 8.00015926361084f)) {
            *(unsigned long long *)(a0 + 0xF10) = *(unsigned long long *)(a0 + 0xF10) | 1;
            func_040D18(a0);
            if (func_0011A8(0) != 0) {
                func_0BC930(1);
                return 1;
            }
        }
    }
    return 0;
}
