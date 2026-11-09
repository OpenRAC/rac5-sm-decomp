/* LEVEL_19:0x0155F0 -- placement copy of LEVEL_16_015830.c: per-frame setup: runs init hooks, records the aspect ratio, and clamps a timer. */
extern int g_AspectRatioID;
extern unsigned char D_0019C024;
extern int D_001D16A0;
extern char *D_001A2C34;
extern void func_021948(void);
extern void func_015678(void);
extern void func_015850(void);
extern void func_024D30(int a, int b);
extern void func_025530(void);
extern void func_0253F0(void);

void func_0155F0(void)
{
    char *p;

    func_021948();
    func_015678();
    func_015850();
    func_024D30(D_001D16A0, 1);
    D_0019C024 = 1;
    func_025530();
    g_AspectRatioID = *(int *)(D_001A2C34 + 0x20);
    func_0253F0();
    p = D_001A2C34;
    if (0x5F5E0FFu < *(unsigned int *)(p + 0x1C68)) {
        *(unsigned int *)(p + 0x1C68) = 0x5F5E0FFu;
    }
}
