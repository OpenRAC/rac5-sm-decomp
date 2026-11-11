/* LEVEL_17:0x1235D8 -- placement copy of LEVEL_16_123BB0.c: once per frame: when the pause flag is clear, decrements the counter of the active record selected by the game mode (0, 1 or 2), then raises the done flag. */
struct Game {
    char pad0[0x184];
    int mode;
};

extern unsigned char D_001AFFC2;
extern unsigned char D_0019E104;
extern struct Game *D_001D13A8;
extern int func_117030(void);

void func_1235D8(void)
{
    int *p;

    if (D_001AFFC2 == 0) {
        p = (int *)func_117030();
        switch (D_001D13A8->mode) {
        case 0:
            p[2] = p[2] - 1;
            break;
        case 1:
            p[0xB] = p[0xB] - 1;
            break;
        case 2:
            p[0x14] = p[0x14] - 1;
            break;
        }
    }
    D_0019E104 = 1;
}
