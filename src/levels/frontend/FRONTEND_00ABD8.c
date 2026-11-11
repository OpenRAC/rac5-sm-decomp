/* FRONTEND:0x00ABD8 -- placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_00120000[];

void func_00AC90(void *);

void func_00ABD8(int a)
{
    func_00AC90(&D_00120000[0x30C8 + a * 0x18]);
}
