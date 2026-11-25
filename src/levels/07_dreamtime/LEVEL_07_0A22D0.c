/* LEVEL_07:0x0A22D0 -- placement copy of LEVEL_02_0A6BE0.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up and forwards the weighted point parameters. */
extern char D_002AEEC0[];

void func_0A2308(void *, float, float, float);

void func_0A22D0(int a, float x, float y, float w)
{
    func_0A2308(&D_002AEEC0[0x30C8 + a * 0x11c], x, y, w);
}
