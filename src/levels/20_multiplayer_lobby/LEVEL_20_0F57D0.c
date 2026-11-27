/* LEVEL_20:0x0F57D0 -- placement copy of LEVEL_16_1236D0.c: pause-menu input step: clears the done flag, reads the pad word, and moves the menu state (0 -> 1 on the first button, pause request on the third button, otherwise the default screen; in state 1 it runs the confirm steps). */
struct Game {
    char pad0[0x180];
    int f180;
};

extern unsigned char D_0010D1E4;
extern int D_0011F060;
extern unsigned char D_0011F06A;
extern struct Game *D_00137A28;
extern char D_00205478[];
extern int func_067228(int a0);
extern int func_08F6B0(int a0);
extern int func_0964D8(void);
extern int func_0169D0(int a0, int a1);
extern int func_092C28(char *a0, unsigned int a1);

void func_0F57D0(void)
{
    unsigned int pad;
    int one;

    D_0010D1E4 = 0;
    pad = func_067228(0x6B10);
    if (D_0011F060 != 0) {
        if (D_0011F060 == 1) {
            func_08F6B0(7);
            func_0964D8();
        }
    } else if (pad & 0x1000) {
        func_08F6B0(0);
        D_0011F060 = 1;
    } else if ((pad & 0x2000) == 0) {
        if (pad & 0x4000) {
            one = 1;
            func_08F6B0(1);
            func_0169D0(D_00137A28->f180, 1);
            D_0011F06A = one;
        } else {
            func_092C28(D_00205478, pad);
        }
    }
}
