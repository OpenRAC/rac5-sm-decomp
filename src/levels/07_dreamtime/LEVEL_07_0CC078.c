extern char D_00215818[];
extern int D_00215564;

void func_0CC078(unsigned char value)
{
    char *record = D_00215818 + D_00215564 * 0x6c;
    record[0x28] = value;
}
