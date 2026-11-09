/* LEVEL_09:0x016728 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_001DDDAC;
extern int D_002043F0;
extern unsigned char D_001D921C;
extern int g_AspectRatioID;

void func_0236A8(void);
void func_026F00(void);
void func_0790E8(void (*cb)(void));
void func_0167B8(void);
void func_016918(void);
void func_0266B0(int a0, int a1);
void func_026C70(void);
void func_026B30(void);

void func_016728(void)
{
    char *g;

    func_0236A8();
    func_0790E8(func_026F00);
    func_0167B8();
    func_016918();
    func_0266B0(D_002043F0, 1);
    D_001D921C = 1;
    func_026C70();
    g_AspectRatioID = *(int *)(D_001DDDAC + 0x20);
    func_026B30();
    g = D_001DDDAC;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
