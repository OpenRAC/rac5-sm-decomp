/* LEVEL_01:0x08BC10 -- counts one more pass and clears the pass totals. */
extern int D_0023F030;
extern int D_001F628C;
extern int D_0023F034;
extern int D_0023F03C;
extern int D_0023F040;
extern int D_0023F044;
extern int D_0023F048;
extern int D_0023F04C;

void func_08BC10(void)
{
    D_0023F030++;
    D_001F628C = 0;
    D_0023F034 = 0;
    D_0023F03C = 0;
    D_0023F040 = 0;
    D_0023F044 = 0;
    D_0023F048 = 0;
    D_0023F04C = 0;
}
