/* LEVEL_17:0x015250 -- placement copy of LEVEL_16_015830.c: per-frame setup: runs init hooks, records the aspect ratio, and clamps a timer. */
extern int g_AspectRatioID;
extern unsigned char D_0018E4A4;
extern int D_001C3920;
extern char *D_001950B4;
extern void func_021688(void);
extern void func_0152D8(void);
extern void func_0154B0(void);
extern void func_024B08(int a, int b);
extern void func_025308(void);
extern void func_0251C8(void);

void func_015250(void)
{
    char *p;

    func_021688();
    func_0152D8();
    func_0154B0();
    func_024B08(D_001C3920, 1);
    D_0018E4A4 = 1;
    func_025308();
    g_AspectRatioID = *(int *)(D_001950B4 + 0x20);
    func_0251C8();
    p = D_001950B4;
    if (0x5F5E0FFu < *(unsigned int *)(p + 0x1C68)) {
        *(unsigned int *)(p + 0x1C68) = 0x5F5E0FFu;
    }
}
