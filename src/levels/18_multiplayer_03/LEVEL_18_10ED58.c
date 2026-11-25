/* LEVEL_18:0x10ED58 -- placement copy of LEVEL_16_1100A8.c: guarded init sequence on a global record, stores a status and an id. */

extern int D_001B5FDC;
extern void func_0251D0(void);
extern int func_10E9A0(void);
extern int func_10E728(int a);
extern unsigned int func_10EAB0(void);
extern int func_0C9838(void);
extern void func_10EBA0(void);
extern int func_10F290(void *a);

int func_10ED58(void *a0, void *a1)
{
    unsigned int s0;

    func_0251D0();
    if (D_001B5FDC == 0) {
        return 0;
    }
    if (func_10E9A0() != 0) {
        return 0;
    }
    if (func_10E728(1) != 0) {
        return 0;
    }
    s0 = func_10EAB0();
    if (s0 == 0xFFFFFFFF) {
        return 0;
    }
    func_0C9838();
    func_10EBA0();
    func_10F290(a1);
    *(int *)(D_001B5FDC + 4) = 2;
    *(unsigned int *)(D_001B5FDC + 0xC) = s0;
    return 1;
}
