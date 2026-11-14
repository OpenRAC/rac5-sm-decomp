/* LEVEL_18:0x123BE0 -- placement copy of LEVEL_16_124B28.c: looks up the record for a fixed object and keeps it in a global. */
extern char *D_002E2DC0;
extern char D_001BD510[];
extern char *func_122D10(char *record);

void func_123BE0(void)
{
    D_002E2DC0 = func_122D10(D_001BD510);
}
