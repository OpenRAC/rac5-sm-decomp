/* LEVEL_19:0x110748 -- placement copy of LEVEL_16_1100A8.c: guarded init sequence on a global record, stores a status and an id. */

extern int D_001B5CDC;
extern void func_0257C8(void);
extern int func_110390(void);
extern int func_110118(int a);
extern unsigned int func_1104A0(void);
extern int func_0CA138(void);
extern void func_110590(void);
extern int func_110C80(void *a);

int func_110748(void *a0, void *a1)
{
    unsigned int s0;

    func_0257C8();
    if (D_001B5CDC == 0) {
        return 0;
    }
    if (func_110390() != 0) {
        return 0;
    }
    if (func_110118(1) != 0) {
        return 0;
    }
    s0 = func_1104A0();
    if (s0 == 0xFFFFFFFF) {
        return 0;
    }
    func_0CA138();
    func_110590();
    func_110C80(a1);
    *(int *)(D_001B5CDC + 4) = 2;
    *(unsigned int *)(D_001B5CDC + 0xC) = s0;
    return 1;
}
