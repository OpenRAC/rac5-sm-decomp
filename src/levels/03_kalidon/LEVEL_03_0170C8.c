/* LEVEL_03:0x0170C8 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_0020C62C;
extern int D_002336F0;
extern unsigned char D_00207A9C;
extern int g_AspectRatioID;

void func_024280(void);
void func_027DD8(void);
void func_07C448(void (*cb)(void));
void func_017158(void);
void func_0172B8(void);
extern int func_027588(unsigned int index, int enabled);
void func_027B48(void);
void func_027A08(void);

void func_0170C8(void)
{
    char *g;

    func_024280();
    func_07C448(func_027DD8);
    func_017158();
    func_0172B8();
    func_027588(D_002336F0, 1);
    D_00207A9C = 1;
    func_027B48();
    g_AspectRatioID = *(int *)(D_0020C62C + 0x20);
    func_027A08();
    g = D_0020C62C;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
