extern int D_0020FCE4[];
extern int D_0020FCE0[];
extern char D_0020FCE8[];

int func_131A28(void);
int func_131828(int);
void func_131BD8(int);

int func_131AC0(void)
{
    int s1 = 0;
    int v0 = func_131A28();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_131828(1);
        D_0020FCE8[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_131BD8(i);
            D_0020FCE4[0] = -1;
            D_0020FCE0[0] = 1;
        }
    }
    return s1;
}
