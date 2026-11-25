/* LEVEL_23:0x0C0340 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_124968(void);
extern void func_124980(int);
extern void func_0BB4F8(void);
extern int func_124B68(void *a0, void *a1);
extern unsigned char D_001C72D1;
extern char *D_001C73AC;
extern int D_001ED970;
extern int D_001D40E0;

void func_0C0340(void)
{
    int value = ((int (*)(void))func_124968)();
    func_124980(0);
    if (D_001C72D1 != 0) {
        func_0BB4F8();
    }
    func_124980(value);
    ((int (*)(int, int, char *))func_124B68)(D_001ED970, *(int *)(D_001C73AC + 0x3c), D_001C73AC);
    D_001D40E0 = 3;
}
