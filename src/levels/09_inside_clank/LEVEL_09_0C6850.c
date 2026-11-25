/* LEVEL_09:0x0C6850 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_12C188(void);
extern void func_12C1A0(int);
extern void func_0C1A08(void);
extern int func_12C388(void *a0, void *a1);
extern unsigned char D_001DDCD1;
extern char *D_001DDDAC;
extern int D_002043F0;
extern int D_001EAAE0;

void func_0C6850(void)
{
    int value = ((int (*)(void))func_12C188)();
    func_12C1A0(0);
    if (D_001DDCD1 != 0) {
        func_0C1A08();
    }
    func_12C1A0(value);
    ((int (*)(int, int, char *))func_12C388)(D_002043F0, *(int *)(D_001DDDAC + 0x3c), D_001DDDAC);
    D_001EAAE0 = 3;
}
