extern unsigned char *D_001E2EAC;

void func_026810(void)
{
    unsigned char *value = D_001E2EAC + 0x1c7d;
    if (*value < 8)
        *value = 0;
    else
        *value = (*value - 4) & 0xfcu;
}
