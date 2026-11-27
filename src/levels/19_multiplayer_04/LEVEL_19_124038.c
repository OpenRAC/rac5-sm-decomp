/* LEVEL_19:0x124038 -- placement copy of LEVEL_16_1236D0.c: pause-menu input step: clears the done flag, reads the pad word, and moves the menu state (0 -> 1 on the first button, pause request on the third button, otherwise the default screen; in state 1 it runs the confirm steps). */
struct Game {
    char pad0[0x180];
    int f180;
};

extern unsigned char D_001ABC84;
extern int D_001BDB38;
extern unsigned char D_001BDB42;
extern struct Game *D_001E0228;
extern char D_002E20B8[];
extern int func_079AA0(int a0);
extern int func_0A4928(int a0);
extern int func_0AB880(void);
extern int func_018918(int a0, int a1);
extern int func_0A7FD0(char *a0, unsigned int a1);

void func_124038(void)
{
    unsigned int pad;
    int one;

    D_001ABC84 = 0;
    pad = func_079AA0(0x6B10);
    if (D_001BDB38 != 0) {
        if (D_001BDB38 == 1) {
            func_0A4928(7);
            func_0AB880();
        }
    } else if (pad & 0x1000) {
        func_0A4928(0);
        D_001BDB38 = 1;
    } else if ((pad & 0x2000) == 0) {
        if (pad & 0x4000) {
            one = 1;
            func_0A4928(1);
            func_018918(D_001E0228->f180, 1);
            D_001BDB42 = one;
        } else {
            func_0A7FD0(D_002E20B8, pad);
        }
    }
}
