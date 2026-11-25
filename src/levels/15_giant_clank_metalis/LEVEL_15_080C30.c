/* LEVEL_15:0x080C30 -- placement copy of LEVEL_02_0A6BE0.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up and forwards the weighted point parameters. */
extern char D_001B1600[];

void func_080C68(void *, float, float, float);

void func_080C30(int a, float x, float y, float w)
{
    func_080C68(&D_001B1600[0x30C8 + a * 0x11c], x, y, w);
}
