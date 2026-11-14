/* LEVEL_20:0x0F6550 -- placement copy of LEVEL_16_124450.c: clears a flag, stores the lookup result for the table and wires the output record for the table's mode (0, 2 or other). */
extern int D_00205F84;
extern char *D_00205F80;
extern int D_0011E730[];
extern char D_0011F448[];
extern char D_0011F360[];
extern char D_0011F278[];
extern char *D_0011F530[];
extern char *D_0011F538;
extern int D_0011F544;
extern char *func_0F5D58(char *record);

void func_0F6550(void)
{
    D_00205F84 = 0;
    D_00205F80 = func_0F5D58((char *)D_0011E730);
    if (D_0011E730[1] == 0) {
        D_0011F538 = D_0011F448;
        D_0011F544 = 2;
    } else if (D_0011E730[1] == 2) {
        D_0011F530[2] = D_0011F360;
        D_0011F530[3] = D_0011F448;
        D_0011F544 = 3;
    } else {
        D_0011F530[2] = D_0011F278;
        D_0011F530[3] = D_0011F448;
        D_0011F544 = 3;
    }
}
