/* LEVEL_15:0x02AEC8 -- placement copy of LEVEL_08_03A360.c: runs the update, then picks one of two handlers for
   event 7 from a global flag. */
extern unsigned char D_00149256;
extern void func_029E30(void);
extern void func_081270(int);
extern void func_081290(int);

void func_02AEC8(void)
{
    func_029E30();
    if (D_00149256)
        func_081270(7);
    else
        func_081290(7);
}
