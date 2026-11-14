/* LEVEL_08:0x02ABA0 -- placement copy of LEVEL_01_02A628.c: sets the global timer to 150 when the argument is non-null. */
extern int D_0023D014;

void func_02ABA0(void *p)
{
    if (p != 0) {
        D_0023D014 = 150;
    }
}
