/* LEVEL_02:0x017CA8 -- placement copy of LEVEL_01_017318.c: one-time display setup: calls helpers, then clamps a limit. */

extern char *D_00208C2C;
extern int D_0022F770;
extern unsigned char D_0020409C;
extern int g_AspectRatioID;

void func_024D10(void);
void func_0286E0(void);
void func_082F38(void (*cb)(void));
void func_017D38(void);
void func_017E98(void);
extern int func_027E90(unsigned int index, int enabled);
void func_028450(void);
void func_028310(void);

void func_017CA8(void)
{
    char *g;

    func_024D10();
    func_082F38(func_0286E0);
    func_017D38();
    func_017E98();
    func_027E90(D_0022F770, 1);
    D_0020409C = 1;
    func_028450();
    g_AspectRatioID = *(int *)(D_00208C2C + 0x20);
    func_028310();
    g = D_00208C2C;
    if (*(unsigned int *)(g + 0x1C68) > 0x05F5E0FFu) {
        *(unsigned int *)(g + 0x1C68) = 0x05F5E0FFu;
    }
}
