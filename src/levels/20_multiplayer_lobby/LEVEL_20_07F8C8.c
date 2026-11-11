/* LEVEL_20:0x07F8C8 -- placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_0018B720[];

void func_07F9B0(void *);

void func_07F8C8(int a)
{
    func_07F9B0(&D_0018B720[0x30C8 + a * 0x18]);
}
