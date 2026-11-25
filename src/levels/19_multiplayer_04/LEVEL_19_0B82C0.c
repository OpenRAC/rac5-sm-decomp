/* LEVEL_19:0x0B82C0 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_110550(void);
extern void func_110568(int);
extern void func_0B34E8(void);
extern int func_1107F8(void *a0, void *a1);
extern unsigned char D_001A2B59;
extern char *D_001A2C34;
extern int D_001D16A0;
extern int D_001AFEE0;

void func_0B82C0(void)
{
    int value = ((int (*)(void))func_110550)();
    func_110568(0);
    if (D_001A2B59 != 0) {
        func_0B34E8();
    }
    func_110568(value);
    ((int (*)(int, int, char *))func_1107F8)(D_001D16A0, *(int *)(D_001A2C34 + 0x3c), D_001A2C34);
    D_001AFEE0 = 3;
}
