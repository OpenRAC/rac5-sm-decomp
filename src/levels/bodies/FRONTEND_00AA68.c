/* FRONTEND:0x00AA68 -- looks the n-th slot of the global table up. */
extern char D_00120000[];

void func_00A980(void *);

void func_00AA68(int a)
{
    func_00A980(&D_00120000[0x30C8 + a * 0x18]);
}
