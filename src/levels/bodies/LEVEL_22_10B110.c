extern int D_00166064[];
extern int D_00166060[];
extern char D_00166068[];

int func_10B078(void);
int func_10AE78(int);
void func_10B228(int);

int func_10B110(void)
{
    int s1 = 0;
    int v0 = func_10B078();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_10AE78(1);
        D_00166068[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_10B228(i);
            D_00166064[0] = -1;
            D_00166060[0] = 1;
        }
    }
    return s1;
}
