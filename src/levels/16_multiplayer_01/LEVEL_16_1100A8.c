/* LEVEL_16:0x1100A8 -- guarded init sequence on a global record, stores a status and an id. */

extern int D_001B4B5C;
extern void func_025C20(void);
extern int func_10FCF0(void);
extern int func_10FA78(int a);
extern unsigned int func_10FE00(void);
extern int func_0CA860(void);
extern void func_10FEF0(void);
extern int func_1105E0(void *a);

int func_1100A8(void *a0, void *a1)
{
    unsigned int s0;

    func_025C20();
    if (D_001B4B5C == 0) {
        return 0;
    }
    if (func_10FCF0() != 0) {
        return 0;
    }
    if (func_10FA78(1) != 0) {
        return 0;
    }
    s0 = func_10FE00();
    if (s0 == 0xFFFFFFFF) {
        return 0;
    }
    func_0CA860();
    func_10FEF0();
    func_1105E0(a1);
    *(int *)(D_001B4B5C + 4) = 2;
    *(unsigned int *)(D_001B4B5C + 0xC) = s0;
    return 1;
}
