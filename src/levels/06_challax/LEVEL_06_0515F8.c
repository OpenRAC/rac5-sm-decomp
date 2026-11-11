/* LEVEL_06:0x0515F8 -- placement copy of LEVEL_01_054D48.c: picks the next object state from pad input and hold state, and arms a follow-up action when the right button is pressed. */

extern char *D_001E2EAC;

extern int func_067690(char *o, unsigned int *pad);
extern int func_0220D8(char *o);
extern int func_022110(char *o);
extern int func_170010(char *h);

static __inline__ void follow_054D48(char *a0, unsigned int a1, unsigned char ok)
{
    int s0;
    char *h;

    if (ok == 0) {
        return;
    }
    s0 = func_0220D8(a0);
    func_022110(a0);
    if (s0 != 7) {
        return;
    }
    if (a1 & ((*(int *)(D_001E2EAC + 0x24) == 2) ? 0x2200 : 0x2000)) {
        h = *(char **)(a0 + 0x5A4);
        if (h != 0) {
            if (func_170010(h) != 0) {
                *(short *)(a0 + 0x102) = 0x25;
                *(unsigned char *)(a0 + 0x9CF) = 1;
            }
        }
    }
}

void func_0515F8(char *a0, unsigned int a1, unsigned int a2)
{
    unsigned int pad;

    pad = a2;
    if (func_067690(a0, &pad) != 0) {
        *(int *)(a0 + 0xC6C) = 9;
    } else if (a1 & 0x8000) {
        *(int *)(a0 + 0xC6C) = 5;
    } else {
        if (a1 & ((*(int *)(D_001E2EAC + 0x24) == 2) ? 0x4100 : 0x4000)) {
            *(int *)(a0 + 0xC6C) = 2;
            return;
        }
    }
    if (*(int *)(a0 + 0x5A4) == 0) {
        return;
    }
    follow_054D48(a0, a1, *(unsigned char *)(a0 + 0x9CD) != 0 && *(int *)(a0 + 0x9A0) != 1);
}
