extern char *D_001F3FAC;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_027CD8(void)
{
    MCP_WideScreenMaster = *(int *)(D_001F3FAC + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
