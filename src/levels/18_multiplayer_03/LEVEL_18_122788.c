/* LEVEL_18:0x122788 -- placement copy of LEVEL_16_1236D0.c: pause-menu input step: clears the done flag, reads the pad word, and moves the menu state (0 -> 1 on the first button, pause request on the third button, otherwise the default screen; in state 1 it runs the confirm steps). */
struct Game {
    char pad0[0x180];
    int f180;
};

extern unsigned char D_001ABF84;
extern int D_001BDE40;
extern unsigned char D_001BDE4A;
extern struct Game *D_001E0428;
extern char D_002E22B8[];
extern int func_078F38(int a0);
extern int func_0A40A8(int a0);
extern int func_0AAF80(void);
extern int func_018260(int a0, int a1);
extern int func_0A76D0(char *a0, unsigned int a1);

void func_122788(void)
{
    unsigned int pad;
    int one;

    D_001ABF84 = 0;
    pad = func_078F38(0x6B10);
    if (D_001BDE40 != 0) {
        if (D_001BDE40 == 1) {
            func_0A40A8(7);
            func_0AAF80();
        }
    } else if (pad & 0x1000) {
        func_0A40A8(0);
        D_001BDE40 = 1;
    } else if ((pad & 0x2000) == 0) {
        if (pad & 0x4000) {
            one = 1;
            func_0A40A8(1);
            func_018260(D_001E0428->f180, 1);
            D_001BDE4A = one;
        } else {
            func_0A76D0(D_002E22B8, pad);
        }
    }
}
