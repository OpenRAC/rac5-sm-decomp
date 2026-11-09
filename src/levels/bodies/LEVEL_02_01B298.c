/* LEVEL_02:0x01B298 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_002470E8;
extern void func_01B498(void);
extern int func_01B1C8(int a);
extern int func_01B1E0(int a);
extern void *func_01B160(int *p);
extern int func_0C21E0(void);
extern int func_0C1EC8(void);
extern void func_0C1ED8(int a);
extern void func_01B380(void);

void func_01B298(void)
{
    int t;

    if (D_002470E8.pending == 0)
        return;
    if (D_002470E8.pending == D_002470E8.cur) {
        D_002470E8.pending = 0;
        return;
    }
    func_01B498();
    while (func_01B1C8(6) && func_0C21E0() == 0)
        ;
    if (func_01B1C8(6) && func_01B1E0(4)) {
        D_002470E8.pending = func_0C1EC8();
        func_0C1ED8(0);
    } else if (func_01B1E0(6)) {
        func_01B160(&t);
        func_0C1ED8(t);
    }
    D_002470E8.cur = D_002470E8.pending;
    D_002470E8.pending = 0;
    func_01B380();
}
