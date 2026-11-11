/* LEVEL_07:0x017A28 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_002082AC;
extern int D_0022F4F0;
extern unsigned char D_0020371C;
extern int g_AspectRatioID;

void func_024978(void);
void func_028258(void);
void func_07E7D0(void (*cb)(void));
void func_017AB8(void);
void func_017C18(void);
extern int func_027A08(unsigned int index, int enabled);
void func_027FC8(void);
void func_027E88(void);

void func_017A28(void)
{
    char *g;

    func_024978();
    func_07E7D0(func_028258);
    func_017AB8();
    func_017C18();
    func_027A08(D_0022F4F0, 1);
    D_0020371C = 1;
    func_027FC8();
    g_AspectRatioID = *(int *)(D_002082AC + 0x20);
    func_027E88();
    g = D_002082AC;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
