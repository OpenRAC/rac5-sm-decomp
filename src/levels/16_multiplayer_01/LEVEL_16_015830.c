/* LEVEL_16:0x015830 -- per-frame setup: runs init hooks, records the aspect ratio, and clamps a timer. */
extern int g_AspectRatioID;
extern unsigned char D_0019AEA4;
extern int D_001D04A0;
extern char *D_001A1AB4;
extern void func_021D08(void);
extern void func_0158B8(void);
extern void func_015A90(void);
extern int func_025188(unsigned int index, int enabled);
extern void func_025988(void);
extern void func_025848(void);

void func_015830(void)
{
    char *p;

    func_021D08();
    func_0158B8();
    func_015A90();
    func_025188(D_001D04A0, 1);
    D_0019AEA4 = 1;
    func_025988();
    g_AspectRatioID = *(int *)(D_001A1AB4 + 0x20);
    func_025848();
    p = D_001A1AB4;
    if (0x5F5E0FFu < *(unsigned int *)(p + 0x1C68)) {
        *(unsigned int *)(p + 0x1C68) = 0x5F5E0FFu;
    }
}
