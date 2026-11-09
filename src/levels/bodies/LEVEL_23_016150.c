/* LEVEL_23:0x016150 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_001C73AC;
extern int D_001ED970;
extern unsigned char D_001C281C;
extern int g_AspectRatioID;

void func_022450(void);
void func_025C50(void);
void func_073A70(void (*cb)(void));
void func_0161E0(void);
void func_016340(void);
void func_025400(int a0, int a1);
void func_0259C0(void);
void func_025880(void);

void func_016150(void)
{
    char *g;

    func_022450();
    func_073A70(func_025C50);
    func_0161E0();
    func_016340();
    func_025400(D_001ED970, 1);
    D_001C281C = 1;
    func_0259C0();
    g_AspectRatioID = *(int *)(D_001C73AC + 0x20);
    func_025880();
    g = D_001C73AC;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
