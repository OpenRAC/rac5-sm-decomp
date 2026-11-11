/* LEVEL_16:0x123BB0 -- once per frame: when the pause flag is clear, decrements the counter of the active record selected by the game mode (0, 1 or 2), then raises the done flag. */
struct Game {
    char pad0[0x184];
    int mode;
};

extern unsigned char D_001BC9CA;
extern unsigned char D_001AAB04;
extern struct Game *D_001E00A8;
extern int func_117678(void);

void func_123BB0(void)
{
    int *p;

    if (D_001BC9CA == 0) {
        p = (int *)func_117678();
        switch (D_001E00A8->mode) {
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
    D_001AAB04 = 1;
}
