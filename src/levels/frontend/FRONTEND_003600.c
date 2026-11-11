/* FRONTEND:0x003600 -- placement copy of LEVEL_01_027CD8.c. */
extern char *D_00027E9C;
extern unsigned char MCP_WideScreenMaster;
extern void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_003600(void)
{
    MCP_WideScreenMaster = *(int *)(D_00027E9C + 0x20) != 0;
    MEMCARD_SetWideScreenToMemcard__FUi(MCP_WideScreenMaster);
}
