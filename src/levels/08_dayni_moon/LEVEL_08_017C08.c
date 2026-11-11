/* LEVEL_08:0x017C08 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_0023CB2C;
extern int D_00264470;
extern unsigned char D_00237F9C;
extern int g_AspectRatioID;

void func_024C30(void);
void func_028520(void);
void func_0845D8(void (*cb)(void));
void func_017C98(void);
void func_017DF8(void);
extern int func_027CD0(unsigned int index, int enabled);
void func_028290(void);
void func_028150(void);

void func_017C08(void)
{
    char *g;

    func_024C30();
    func_0845D8(func_028520);
    func_017C98();
    func_017DF8();
    func_027CD0(D_00264470, 1);
    D_00237F9C = 1;
    func_028290();
    g_AspectRatioID = *(int *)(D_0023CB2C + 0x20);
    func_028150();
    g = D_0023CB2C;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
