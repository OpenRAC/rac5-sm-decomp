/* LEVEL_17:0x0B7F28 -- placement copy of LEVEL_01_0C95A0.c: saves the state, clears it around the optional refresh, restores it, then hands the level record to the helper and marks the mode as 3. */
extern long long func_10F428(void);
extern void func_10F440(int);
extern void func_0B3150(void);
extern int func_10F6D0(void *a0, void *a1);
extern unsigned char D_00194FD9;
extern char *D_001950B4;
extern int D_001C3920;
extern int D_001A2360;

void func_0B7F28(void)
{
    int value = ((int (*)(void))func_10F428)();
    func_10F440(0);
    if (D_00194FD9 != 0) {
        func_0B3150();
    }
    func_10F440(value);
    ((int (*)(int, int, char *))func_10F6D0)(D_001C3920, *(int *)(D_001950B4 + 0x3c), D_001950B4);
    D_001A2360 = 3;
}
