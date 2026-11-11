extern char *D_001C73AC;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_025A30(void)
{
    MCP_WideScreenMaster = *(int *)(D_001C73AC + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
