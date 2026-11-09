/* LEVEL_01:0x017318 -- one-time display setup: calls helpers, then clamps a limit. */

extern char *D_001F3FAC;
extern int D_0021A7F0;
extern unsigned char D_001EF41C;
extern int g_AspectRatioID;

void func_0243B0(void);
void func_027EF8(void);
void func_07C650(void (*cb)(void));
void func_0173A8(void);
void func_017508(void);
void func_0276A8(int a0, int a1);
void func_027C68(void);
void func_027B28(void);

void func_017318(void)
{
    char *g;

    func_0243B0();
    func_07C650(func_027EF8);
    func_0173A8();
    func_017508();
    func_0276A8(D_0021A7F0, 1);
    D_001EF41C = 1;
    func_027C68();
    g_AspectRatioID = *(int *)(D_001F3FAC + 0x20);
    func_027B28();
    g = D_001F3FAC;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
