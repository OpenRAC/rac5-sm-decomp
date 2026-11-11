extern char *D_00208C2C;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_0284C0(void)
{
    MCP_WideScreenMaster = *(int *)(D_00208C2C + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
