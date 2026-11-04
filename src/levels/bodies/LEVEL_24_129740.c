extern int D_001D7D04[];
extern int D_001D7D00[];
extern char D_001D7D08[];

int func_1296A8(void);
int func_1294A8(int);
void func_129858(int);

int func_129740(void)
{
    int s1 = 0;
    int v0 = func_1296A8();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_1294A8(1);
        D_001D7D08[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_129858(i);
            D_001D7D04[0] = -1;
            D_001D7D00[0] = 1;
        }
    }
    return s1;
}
