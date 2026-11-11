/* LEVEL_05:0x0169B0 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_001E332C;
extern int D_002096F0;
extern unsigned char D_001DE79C;
extern int g_AspectRatioID;

void func_023348(void);
void func_026D38(void);
void func_079CD8(void (*cb)(void));
void func_016A40(void);
void func_016BA0(void);
extern int func_0263E8(unsigned int index, int enabled);
void func_026AA8(void);
void func_026968(void);

void func_0169B0(void)
{
    char *g;

    func_023348();
    func_079CD8(func_026D38);
    func_016A40();
    func_016BA0();
    func_0263E8(D_002096F0, 1);
    D_001DE79C = 1;
    func_026AA8();
    g_AspectRatioID = *(int *)(D_001E332C + 0x20);
    func_026968();
    g = D_001E332C;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
