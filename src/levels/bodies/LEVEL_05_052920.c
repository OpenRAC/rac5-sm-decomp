/* LEVEL_05:0x052920 -- placement copy of LEVEL_01_054D48.c: picks the next object state from pad input and hold state, and arms a follow-up action when the right button is pressed. */

extern char *D_001E332C;

extern int func_068538(char *o, unsigned int *pad);
extern int func_022AD0(char *o);
extern int func_022B08(char *o);
extern int func_16E760(char *h);

static __inline__ void follow_054D48(char *a0, unsigned int a1, unsigned char ok)
{
    int s0;
    char *h;

    if (ok == 0) {
        return;
    }
    s0 = func_022AD0(a0);
    func_022B08(a0);
    if (s0 != 7) {
        return;
    }
    if (a1 & ((*(int *)(D_001E332C + 0x24) == 2) ? 0x2200 : 0x2000)) {
        h = *(char **)(a0 + 0x5A4);
        if (h != 0) {
            if (func_16E760(h) != 0) {
                *(short *)(a0 + 0x102) = 0x25;
                *(unsigned char *)(a0 + 0x9CF) = 1;
            }
        }
    }
}

void func_052920(char *a0, unsigned int a1, unsigned int a2)
{
    unsigned int pad;

    pad = a2;
    if (func_068538(a0, &pad) != 0) {
        *(int *)(a0 + 0xC6C) = 9;
    } else if (a1 & 0x8000) {
        *(int *)(a0 + 0xC6C) = 5;
    } else {
        if (a1 & ((*(int *)(D_001E332C + 0x24) == 2) ? 0x4100 : 0x4000)) {
            *(int *)(a0 + 0xC6C) = 2;
            return;
        }
    }
    if (*(int *)(a0 + 0x5A4) == 0) {
        return;
    }
    follow_054D48(a0, a1, *(unsigned char *)(a0 + 0x9CD) != 0 && *(int *)(a0 + 0x9A0) != 1);
}
