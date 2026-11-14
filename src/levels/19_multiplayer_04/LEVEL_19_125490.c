/* LEVEL_19:0x125490 -- placement copy of LEVEL_16_124B28.c: looks up the record for a fixed object and keeps it in a global. */
extern char *D_002E2BC0;
extern char D_001BD208[];
extern char *func_1245C0(char *record);

void func_125490(void)
{
    D_002E2BC0 = func_1245C0(D_001BD208);
}
