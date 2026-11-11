/* LEVEL_18:0x0941E0 -- placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_00268260[];

void func_0942C8(void *);

void func_0941E0(int a)
{
    func_0942C8(&D_00268260[0x30C8 + a * 0x18]);
}
