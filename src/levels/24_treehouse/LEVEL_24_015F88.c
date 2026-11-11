/* LEVEL_24:0x015F88 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_001C4C2C;
extern int D_001EB570;
extern unsigned char D_001C009C;
extern int g_AspectRatioID;

void func_022188(void);
void func_025758(void);
void func_076D48(void (*cb)(void));
void func_016018(void);
void func_016178(void);
extern int func_024FD8(unsigned int index, int enabled);
void func_025598(void);
void func_025458(void);

void func_015F88(void)
{
    char *g;

    func_022188();
    func_076D48(func_025758);
    func_016018();
    func_016178();
    func_024FD8(D_001EB570, 1);
    D_001C009C = 1;
    func_025598();
    g_AspectRatioID = *(int *)(D_001C4C2C + 0x20);
    func_025458();
    g = D_001C4C2C;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
