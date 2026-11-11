extern char *D_001A2F34;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_024FA8(void)
{
    MCP_WideScreenMaster = *(int *)(D_001A2F34 + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
