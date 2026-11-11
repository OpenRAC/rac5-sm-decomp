extern char *D_001A1AB4;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_0259F8(void)
{
    MCP_WideScreenMaster = *(int *)(D_001A1AB4 + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
