/* FRONTEND:0x016C48 -- sets the pause state unless the pause screen 0x38 is already showing. */
extern unsigned char D_00030540;
extern int D_00030428;

extern int func_001B20(int value);
extern int PAUSEMODE_GetCurrentPauseScreen__Fv(void);
extern void func_001AE0(int mode, int arg);

void func_016C48(void)
{
    if (D_00030540 != 0) {
        if (func_001B20(6) != 0) {
            if (PAUSEMODE_GetCurrentPauseScreen__Fv() == 0x38) {
                return;
            }
        }
    }
    D_00030428 = 1;
    func_001AE0(0xF, 0);
}
