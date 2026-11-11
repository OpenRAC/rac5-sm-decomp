extern char *D_0020C62C;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_027BB8(void)
{
    MCP_WideScreenMaster = *(int *)(D_0020C62C + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
