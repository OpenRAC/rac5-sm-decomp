extern int D_001F0B84[];
extern int D_001F0B80[];
extern char D_001F0B88[];

int func_12CB40(void);
int func_12C940(int);
void func_12CCF0(int);

int func_12CBD8(void)
{
    int s1 = 0;
    int v0 = func_12CB40();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_12C940(1);
        D_001F0B88[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_12CCF0(i);
            D_001F0B84[0] = -1;
            D_001F0B80[0] = 1;
        }
    }
    return s1;
}
