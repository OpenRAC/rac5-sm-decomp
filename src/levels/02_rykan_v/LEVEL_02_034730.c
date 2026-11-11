/* LEVEL_02:0x034730 -- forwards two arguments and the low byte of the third. */
extern int func_035200(int a, int b, int c);

int func_034730(int a, int b, int c)
{
    return func_035200(a, b, c & 0xFF);
}
