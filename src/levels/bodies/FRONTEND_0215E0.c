extern int D_003284C[];
extern int D_0032848[];
extern char D_0032850[];

int func_021548(void);
int func_021348(int);
void func_0216B0(int);

int func_0215E0(void)
{
    int s1 = 0;
    int v0 = func_021548();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_021348(1);
        D_0032850[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_0216B0(i);
            D_003284C[0] = -1;
            D_0032848[0] = 1;
        }
    }
    return s1;
}
