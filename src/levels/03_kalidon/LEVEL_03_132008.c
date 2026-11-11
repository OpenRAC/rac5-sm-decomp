extern int D_0021F704[];
extern int D_0021F700[];
extern char D_0021F708[];

int func_131F70(void);
int func_131D70(int);
extern int func_132120(int index);

int func_132008(void)
{
    int s1 = 0;
    int v0 = func_131F70();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_131D70(1);
        D_0021F708[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_132120(i);
            D_0021F704[0] = -1;
            D_0021F700[0] = 1;
        }
    }
    return s1;
}
