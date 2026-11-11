/* LEVEL_20:0x0137E8 -- placement copy of LEVEL_16_015830.c: per-frame setup: runs init hooks, records the aspect ratio, and clamps a timer. */
extern int g_AspectRatioID;
extern unsigned char D_000FD58C;
extern int D_00131510;
extern char *D_00104194;
extern void func_01EA08(void);
extern void func_013870(void);
extern void func_013A48(void);
extern int func_021D00(unsigned int index, int enabled);
extern void func_0224A8(void);
extern void func_022368(void);

void func_0137E8(void)
{
    char *p;

    func_01EA08();
    func_013870();
    func_013A48();
    func_021D00(D_00131510, 1);
    D_000FD58C = 1;
    func_0224A8();
    g_AspectRatioID = *(int *)(D_00104194 + 0x20);
    func_022368();
    p = D_00104194;
    if (0x5F5E0FFu < *(unsigned int *)(p + 0x1C68)) {
        *(unsigned int *)(p + 0x1C68) = 0x5F5E0FFu;
    }
}
