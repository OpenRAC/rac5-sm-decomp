extern int D_001B5D14[];
extern int D_001B5D10[];
extern char D_001B5D18[];

int func_110FB8(void);
int func_110DB8(int);
extern int func_111168(int index);

int func_111050(void)
{
    int s1 = 0;
    int v0 = func_110FB8();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_110DB8(1);
        D_001B5D18[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_111168(i);
            D_001B5D14[0] = -1;
            D_001B5D10[0] = 1;
        }
    }
    return s1;
}
