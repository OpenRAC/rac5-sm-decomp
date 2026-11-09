/* LEVEL_22:0x014008 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_0015332C;
extern int D_00177C70;
extern unsigned char D_0014E79C;
extern int g_AspectRatioID;

void func_01F1E8(void);
void func_0227B8(void);
void func_06F158(void (*cb)(void));
void func_014098(void);
void func_0141F8(void);
void func_022038(int a0, int a1);
void func_0225F8(void);
void func_0224B8(void);

void func_014008(void)
{
    char *g;

    func_01F1E8();
    func_06F158(func_0227B8);
    func_014098();
    func_0141F8();
    func_022038(D_00177C70, 1);
    D_0014E79C = 1;
    func_0225F8();
    g_AspectRatioID = *(int *)(D_0015332C + 0x20);
    func_0224B8();
    g = D_0015332C;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
