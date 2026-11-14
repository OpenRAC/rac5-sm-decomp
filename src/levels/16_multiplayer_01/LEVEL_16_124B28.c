/* LEVEL_16:0x124B28 -- looks up the record for a fixed object and keeps it in a global. */
extern char *D_002E2A40;
extern char D_001BC090[];
extern char *func_123C58(char *record);

void func_124B28(void)
{
    D_002E2A40 = func_123C58(D_001BC090);
}
