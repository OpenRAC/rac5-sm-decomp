extern char D_00160898[];
extern int D_001605E4;

void func_0B8560(unsigned char value)
{
    char *record = D_00160898 + D_001605E4 * 0x6c;
    record[0x28] = value;
}
