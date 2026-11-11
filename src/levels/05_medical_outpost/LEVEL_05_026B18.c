extern char *D_001E332C;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_026B18(void)
{
    MCP_WideScreenMaster = *(int *)(D_001E332C + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
