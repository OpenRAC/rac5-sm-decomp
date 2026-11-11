/* LEVEL_21:0x013BD8 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_00148C2C;
extern int D_0016EF70;
extern unsigned char D_00144084;
extern int g_AspectRatioID;

void func_01E718(void);
void func_021DD8(void);
void func_061428(void (*cb)(void));
void func_013C68(void);
void func_013DC8(void);
extern int func_021698(unsigned int index, int enabled);
void func_021C18(void);
void func_021AD8(void);

void func_013BD8(void)
{
    char *g;

    func_01E718();
    func_061428(func_021DD8);
    func_013C68();
    func_013DC8();
    func_021698(D_0016EF70, 1);
    D_00144084 = 1;
    func_021C18();
    g_AspectRatioID = *(int *)(D_00148C2C + 0x20);
    func_021AD8();
    g = D_00148C2C;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
