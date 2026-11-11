extern int D_0021C044[];
extern int D_0021C040[];
extern char D_0021C048[];

int func_139F58(void);
int func_139D58(int);
extern int func_13A108(int index);

int func_139FF0(void)
{
    int s1 = 0;
    int v0 = func_139F58();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_139D58(1);
        D_0021C048[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_13A108(i);
            D_0021C044[0] = -1;
            D_0021C040[0] = 1;
        }
    }
    return s1;
}
