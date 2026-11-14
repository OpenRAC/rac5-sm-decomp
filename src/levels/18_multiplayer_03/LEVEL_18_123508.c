/* LEVEL_18:0x123508 -- placement copy of LEVEL_16_124450.c: clears a flag, stores the lookup result for the table and wires the output record for the table's mode (0, 2 or other). */
extern int D_002E2DC4;
extern char *D_002E2DC0;
extern int D_001BD510[];
extern char D_001BE228[];
extern char D_001BE140[];
extern char D_001BE058[];
extern char *D_001BE310[];
extern char *D_001BE318;
extern int D_001BE324;
extern char *func_122D10(char *record);

void func_123508(void)
{
    D_002E2DC4 = 0;
    D_002E2DC0 = func_122D10((char *)D_001BD510);
    if (D_001BD510[1] == 0) {
        D_001BE318 = D_001BE228;
        D_001BE324 = 2;
    } else if (D_001BD510[1] == 2) {
        D_001BE310[2] = D_001BE140;
        D_001BE310[3] = D_001BE228;
        D_001BE324 = 3;
    } else {
        D_001BE310[2] = D_001BE058;
        D_001BE310[3] = D_001BE228;
        D_001BE324 = 3;
    }
}
