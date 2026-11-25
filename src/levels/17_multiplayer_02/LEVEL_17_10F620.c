/* LEVEL_17:0x10F620 -- placement copy of LEVEL_16_1100A8.c: guarded init sequence on a global record, stores a status and an id. */

extern int D_001A815C;
extern void func_0255A0(void);
extern int func_10F268(void);
extern int func_10EFF0(int a);
extern unsigned int func_10F378(void);
extern int func_0C9DA0(void);
extern void func_10F468(void);
extern int func_10FB58(void *a);

int func_10F620(void *a0, void *a1)
{
    unsigned int s0;

    func_0255A0();
    if (D_001A815C == 0) {
        return 0;
    }
    if (func_10F268() != 0) {
        return 0;
    }
    if (func_10EFF0(1) != 0) {
        return 0;
    }
    s0 = func_10F378();
    if (s0 == 0xFFFFFFFF) {
        return 0;
    }
    func_0C9DA0();
    func_10F468();
    func_10FB58(a1);
    *(int *)(D_001A815C + 4) = 2;
    *(unsigned int *)(D_001A815C + 0xC) = s0;
    return 1;
}
