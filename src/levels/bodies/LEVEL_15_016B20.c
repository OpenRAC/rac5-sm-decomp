/* LEVEL_15:0x016B20 -- placement copy of LEVEL_01_01A938.c: applies a pending state change after polling until the request can proceed. */
typedef struct {
    int cur;
    int pending;
} State;
extern State D_00177D68;
extern void func_016D20(void);
extern int func_016A50(int a);
extern int func_016A68(int a);
extern void *func_0169E8(int *p);
extern int func_09BF18(void);
extern int func_09BC00(void);
extern void func_09BC10(int a);
extern void func_016C08(void);

void func_016B20(void)
{
    int t;

    if (D_00177D68.pending == 0)
        return;
    if (D_00177D68.pending == D_00177D68.cur) {
        D_00177D68.pending = 0;
        return;
    }
    func_016D20();
    while (func_016A50(6) && func_09BF18() == 0)
        ;
    if (func_016A50(6) && func_016A68(4)) {
        D_00177D68.pending = func_09BC00();
        func_09BC10(0);
    } else if (func_016A68(6)) {
        func_0169E8(&t);
        func_09BC10(t);
    }
    D_00177D68.cur = D_00177D68.pending;
    D_00177D68.pending = 0;
    func_016C08();
}
