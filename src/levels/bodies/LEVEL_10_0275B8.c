extern char *D_001FCFAC;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_0275B8(void)
{
    MCP_WideScreenMaster = *(int *)(D_001FCFAC + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
