extern int D_001A8194[];
extern int D_001A8190[];
extern char D_001A8198[];

int func_10FE90(void);
int func_10FC90(int);
extern int func_110040(int index);

int func_10FF28(void)
{
    int s1 = 0;
    int v0 = func_10FE90();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_10FC90(1);
        D_001A8198[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_110040(i);
            D_001A8194[0] = -1;
            D_001A8190[0] = 1;
        }
    }
    return s1;
}
