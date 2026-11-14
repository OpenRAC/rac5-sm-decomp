/* LEVEL_16:0x124450 -- clears a flag, stores the lookup result for the table and wires the output record for the table's mode (0, 2 or other). */
extern int D_002E2A44;
extern char *D_002E2A40;
extern int D_001BC090[];
extern char D_001BCDA8[];
extern char D_001BCCC0[];
extern char D_001BCBD8[];
extern char *D_001BCE90[];
extern char *D_001BCE98;
extern int D_001BCEA4;
extern char *func_123C58(char *record);

void func_124450(void)
{
    D_002E2A44 = 0;
    D_002E2A40 = func_123C58((char *)D_001BC090);
    if (D_001BC090[1] == 0) {
        D_001BCE98 = D_001BCDA8;
        D_001BCEA4 = 2;
    } else if (D_001BC090[1] == 2) {
        D_001BCE90[2] = D_001BCCC0;
        D_001BCE90[3] = D_001BCDA8;
        D_001BCEA4 = 3;
    } else {
        D_001BCE90[2] = D_001BCBD8;
        D_001BCE90[3] = D_001BCDA8;
        D_001BCEA4 = 3;
    }
}
