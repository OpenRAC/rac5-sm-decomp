/* LEVEL_10:0x016980 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_001FCFAC;
extern int D_00223780;
extern unsigned char D_001F841C;
extern int g_AspectRatioID;

void func_023D18(void);
void func_0277D8(void);
void func_07CC80(void (*cb)(void));
void func_016A10(void);
void func_016B70(void);
extern int func_026F88(unsigned int index, int enabled);
void func_027548(void);
void func_027408(void);

void func_016980(void)
{
    char *g;

    func_023D18();
    func_07CC80(func_0277D8);
    func_016A10();
    func_016B70();
    func_026F88(D_00223780, 1);
    D_001F841C = 1;
    func_027548();
    g_AspectRatioID = *(int *)(D_001FCFAC + 0x20);
    func_027408();
    g = D_001FCFAC;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
