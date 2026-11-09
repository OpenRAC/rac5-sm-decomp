/* LEVEL_18:0x014F40 -- placement copy of LEVEL_16_015830.c: per-frame setup: runs init hooks, records the aspect ratio, and clamps a timer. */
extern int g_AspectRatioID;
extern unsigned char D_0019C324;
extern int D_001D1A20;
extern char *D_001A2F34;
extern void func_021350(void);
extern void func_014FC8(void);
extern void func_0151A0(void);
extern void func_024738(int a, int b);
extern void func_024F38(void);
extern void func_024DF8(void);

void func_014F40(void)
{
    char *p;

    func_021350();
    func_014FC8();
    func_0151A0();
    func_024738(D_001D1A20, 1);
    D_0019C324 = 1;
    func_024F38();
    g_AspectRatioID = *(int *)(D_001A2F34 + 0x20);
    func_024DF8();
    p = D_001A2F34;
    if (0x5F5E0FFu < *(unsigned int *)(p + 0x1C68)) {
        *(unsigned int *)(p + 0x1C68) = 0x5F5E0FFu;
    }
}
