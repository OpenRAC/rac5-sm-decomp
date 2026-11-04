extern int D_001F5C84[];
extern int D_001F5C80[];
extern char D_001F5C88[];

int func_12A278(void);
int func_12A078(int);
void func_12A428(int);

int func_12A310(void)
{
    int s1 = 0;
    int v0 = func_12A278();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_12A078(1);
        D_001F5C88[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_12A428(i);
            D_001F5C84[0] = -1;
            D_001F5C80[0] = 1;
        }
    }
    return s1;
}
