extern char *D_001DDDAC;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_026CE0(void)
{
    MCP_WideScreenMaster = *(int *)(D_001DDDAC + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
