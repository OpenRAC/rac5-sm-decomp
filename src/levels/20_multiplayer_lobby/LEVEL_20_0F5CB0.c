/* LEVEL_20:0x0F5CB0 -- placement copy of LEVEL_16_123BB0.c: once per frame: when the pause flag is clear, decrements the counter of the active record selected by the game mode (0, 1 or 2), then raises the done flag. */
struct Game {
    char pad0[0x184];
    int mode;
};

extern unsigned char D_0011F06A;
extern unsigned char D_0010D1E4;
extern struct Game *D_00137A28;
extern int func_0E9E38(void);

void func_0F5CB0(void)
{
    int *p;

    if (D_0011F06A == 0) {
        p = (int *)func_0E9E38();
        switch (D_00137A28->mode) {
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
    D_0010D1E4 = 1;
}
