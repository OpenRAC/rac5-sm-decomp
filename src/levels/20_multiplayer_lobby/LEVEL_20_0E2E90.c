/* LEVEL_20:0x0E2E90 -- placement copy of LEVEL_16_1100A8.c: guarded init sequence on a global record, stores a status and an id. */

extern int D_0011721C;
extern void func_022740(void);
extern int func_0E2AD8(void);
extern int func_0E2860(int a);
extern unsigned int func_0E2BE8(void);
extern int func_0B4D90(void);
extern void func_0E2CD8(void);
extern int func_0E33C8(void *a);

int func_0E2E90(void *a0, void *a1)
{
    unsigned int s0;

    func_022740();
    if (D_0011721C == 0) {
        return 0;
    }
    if (func_0E2AD8() != 0) {
        return 0;
    }
    if (func_0E2860(1) != 0) {
        return 0;
    }
    s0 = func_0E2BE8();
    if (s0 == 0xFFFFFFFF) {
        return 0;
    }
    func_0B4D90();
    func_0E2CD8();
    func_0E33C8(a1);
    *(int *)(D_0011721C + 4) = 2;
    *(unsigned int *)(D_0011721C + 0xC) = s0;
    return 1;
}
