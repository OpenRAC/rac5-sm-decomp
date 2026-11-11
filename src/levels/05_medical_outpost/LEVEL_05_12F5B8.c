extern int D_001F6104[];
extern int D_001F6100[];
extern char D_001F6108[];

int func_12F520(void);
int func_12F320(int);
extern int func_12F6D0(int index);

int func_12F5B8(void)
{
    int s1 = 0;
    int v0 = func_12F520();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_12F320(1);
        D_001F6108[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_12F6D0(i);
            D_001F6104[0] = -1;
            D_001F6100[0] = 1;
        }
    }
    return s1;
}
