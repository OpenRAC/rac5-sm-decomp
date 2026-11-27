/* LEVEL_17:0x1230F8 -- placement copy of LEVEL_16_1236D0.c: pause-menu input step: clears the done flag, reads the pad word, and moves the menu state (0 -> 1 on the first button, pause request on the third button, otherwise the default screen; in state 1 it runs the confirm steps). */
struct Game {
    char pad0[0x180];
    int f180;
};

extern unsigned char D_0019E104;
extern int D_001AFFB8;
extern unsigned char D_001AFFC2;
extern struct Game *D_001D13A8;
extern char D_002D3238[];
extern int func_07A030(int a0);
extern int func_0A4590(int a0);
extern int func_0AB4E8(void);
extern int func_018598(int a0, int a1);
extern int func_0A7C38(char *a0, unsigned int a1);

void func_1230F8(void)
{
    unsigned int pad;
    int one;

    D_0019E104 = 0;
    pad = func_07A030(0x6B10);
    if (D_001AFFB8 != 0) {
        if (D_001AFFB8 == 1) {
            func_0A4590(7);
            func_0AB4E8();
        }
    } else if (pad & 0x1000) {
        func_0A4590(0);
        D_001AFFB8 = 1;
    } else if ((pad & 0x2000) == 0) {
        if (pad & 0x4000) {
            one = 1;
            func_0A4590(1);
            func_018598(D_001D13A8->f180, 1);
            D_001AFFC2 = one;
        } else {
            func_0A7C38(D_002D3238, pad);
        }
    }
}
