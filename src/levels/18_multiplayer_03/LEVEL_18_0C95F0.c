/* LEVEL_18:0x0C95F0 -- placement copy of LEVEL_16_0CA618.c: per-frame update of the rumble/fade meter: waits out the delay, triggers the alert effects, then moves the level by the step for its direction and clamps it. */
extern int D_001B5B78;
extern int D_001B5B4C;
extern int D_001B5B50;
extern int D_001B5B54;
extern unsigned char D_001B5B58;
extern unsigned char D_001B5B59;
extern int D_001B5B5C;
extern float D_001B5B60;
extern char *D_001E0428;
extern int func_10DFE0(int id);
extern int func_0C6378(int h);
extern int func_10E728(int a);
extern int func_10E908(int a);
extern void func_024520(int a, int b, int c);
extern void func_0C9588(void);
extern void func_0C9760(int a);
extern void func_019428(void);

void func_0C95F0(void)
{
    int *p;
    int v;

    if (D_001B5B78 != 0) {
        D_001B5B78--;
        return;
    }
    if (*(unsigned char *)(D_001E0428 + 0x15148) == 0) {
        func_024520(0x91, 1, 1);
    }
    if (D_001B5B4C == 0) {
        D_001B5B4C = func_10DFE0(0xA1D);
    }
    if (func_0C6378(D_001B5B4C) != 0 || (func_10E728(0) != 0 && func_10E908(0) != 0)) {
        func_0C9588();
        func_0C9760(3);
    }
    if (D_001B5B50 != 0) {
        D_001B5B50--;
    }
    p = &D_001B5B54;
    if (D_001B5B50 == 0) {
        v = *p - D_001B5B58;
    } else {
        v = *p + D_001B5B59;
    }
    *p = v;
    if (D_001B5B5C < D_001B5B54) {
        D_001B5B54 = D_001B5B5C;
    }
    if (D_001B5B54 < 0) {
        D_001B5B54 = 0;
    }
    if (D_001B5B54 != 0) {
        func_019428();
        D_001B5B60 = D_001B5B60 + 0.25f;
    }
}
