/* LEVEL_06:0x015B68 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_001E2EAC;
extern int D_00209670;
extern unsigned char D_001DE31C;
extern int g_AspectRatioID;

void func_022AB8(void);
void func_0264A8(void);
void func_076248(void (*cb)(void));
void func_015BF8(void);
void func_015D58(void);
void func_025B58(int a0, int a1);
void func_026218(void);
void func_0260D8(void);

void func_015B68(void)
{
    char *g;

    func_022AB8();
    func_076248(func_0264A8);
    func_015BF8();
    func_015D58();
    func_025B58(D_00209670, 1);
    D_001DE31C = 1;
    func_026218();
    g_AspectRatioID = *(int *)(D_001E2EAC + 0x20);
    func_0260D8();
    g = D_001E2EAC;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
