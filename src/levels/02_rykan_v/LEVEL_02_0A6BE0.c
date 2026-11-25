/* LEVEL_02:0x0A6BE0 -- placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up and forwards the weighted point parameters. */
extern char D_002B0AC0[];

void func_0A6C18(void *, float, float, float);

void func_0A6BE0(int a, float x, float y, float w)
{
    func_0A6C18(&D_002B0AC0[0x30C8 + a * 0x11c], x, y, w);
}
