/* LEVEL_19:0x124518 -- placement copy of LEVEL_16_123BB0.c: once per frame: when the pause flag is clear, decrements the counter of the active record selected by the game mode (0, 1 or 2), then raises the done flag. */
struct Game {
    char pad0[0x184];
    int mode;
};

extern unsigned char D_001BDB42;
extern unsigned char D_001ABC84;
extern struct Game *D_001E0228;
extern int func_118028(void);

void func_124518(void)
{
    int *p;

    if (D_001BDB42 == 0) {
        p = (int *)func_118028();
        switch (D_001E0228->mode) {
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
    D_001ABC84 = 1;
}
