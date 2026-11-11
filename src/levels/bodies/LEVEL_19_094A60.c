/* LEVEL_19:0x094A60 -- placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_00268060[];

void func_094B48(void *);

void func_094A60(int a)
{
    func_094B48(&D_00268060[0x30C8 + a * 0x18]);
}
