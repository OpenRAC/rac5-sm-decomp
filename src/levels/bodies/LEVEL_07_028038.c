extern char *D_002082AC;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_028038(void)
{
    MCP_WideScreenMaster = *(int *)(D_002082AC + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
