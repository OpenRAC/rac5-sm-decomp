/* LEVEL_19:0x124DB8 -- placement copy of LEVEL_16_124450.c: clears a flag, stores the lookup result for the table and wires the output record for the table's mode (0, 2 or other). */
extern int D_002E2BC4;
extern char *D_002E2BC0;
extern int D_001BD208[];
extern char D_001BDF20[];
extern char D_001BDE38[];
extern char D_001BDD50[];
extern char *D_001BE008[];
extern char *D_001BE010;
extern int D_001BE01C;
extern char *func_1245C0(char *record);

void func_124DB8(void)
{
    D_002E2BC4 = 0;
    D_002E2BC0 = func_1245C0((char *)D_001BD208);
    if (D_001BD208[1] == 0) {
        D_001BE010 = D_001BDF20;
        D_001BE01C = 2;
    } else if (D_001BD208[1] == 2) {
        D_001BE008[2] = D_001BDE38;
        D_001BE008[3] = D_001BDF20;
        D_001BE01C = 3;
    } else {
        D_001BE008[2] = D_001BDD50;
        D_001BE008[3] = D_001BDF20;
        D_001BE01C = 3;
    }
}
