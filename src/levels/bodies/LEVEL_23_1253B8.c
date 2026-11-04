extern int D_001DA484[];
extern int D_001DA480[];
extern char D_001DA488[];

int func_125320(void);
int func_125120(int);
void func_1254D0(int);

int func_1253B8(void)
{
    int s1 = 0;
    int v0 = func_125320();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_125120(1);
        D_001DA488[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_1254D0(i);
            D_001DA484[0] = -1;
            D_001DA480[0] = 1;
        }
    }
    return s1;
}
