extern char *D_001F60CC;

void func_12E888(void)
{
    *(unsigned int *)(D_001F60CC + 0x94) &= 0xfffeffffu;
    *(unsigned int *)(D_001F60CC + 0x94) &= 0xfffdffffu;
}
