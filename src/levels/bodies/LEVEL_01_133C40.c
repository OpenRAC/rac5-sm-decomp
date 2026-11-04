extern int D_00207084[];
extern int D_00207080[];
extern char D_00207088[];

int func_133BA8(void);
int func_1339A8(int);
void func_133D58(int);

int func_133C40(void)
{
    int s1 = 0;
    int v0 = func_133BA8();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_1339A8(1);
        D_00207088[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_133D58(i);
            D_00207084[0] = -1;
            D_00207080[0] = 1;
        }
    }
    return s1;
}
