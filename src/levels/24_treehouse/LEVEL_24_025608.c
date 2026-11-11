extern char *D_001C4C2C;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_025608(void)
{
    MCP_WideScreenMaster = *(int *)(D_001C4C2C + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
