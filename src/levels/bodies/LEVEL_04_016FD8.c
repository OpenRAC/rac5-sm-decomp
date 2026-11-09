/* LEVEL_04:0x016FD8 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_0020D12C;
extern int D_00234170;
extern unsigned char D_0020859C;
extern int g_AspectRatioID;

void func_024030(void);
void func_027B88(void);
void func_07FAC8(void (*cb)(void));
void func_017068(void);
void func_0171C8(void);
void func_027338(int a0, int a1);
void func_0278F8(void);
void func_0277B8(void);

void func_016FD8(void)
{
    char *g;

    func_024030();
    func_07FAC8(func_027B88);
    func_017068();
    func_0171C8();
    func_027338(D_00234170, 1);
    D_0020859C = 1;
    func_0278F8();
    g_AspectRatioID = *(int *)(D_0020D12C + 0x20);
    func_0277B8();
    g = D_0020D12C;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
