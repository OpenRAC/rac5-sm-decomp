extern int D_001B6014[];
extern int D_001B6010[];
extern char D_001B6018[];

int func_10F5C8(void);
int func_10F3C8(int);
void func_10F778(int);

int func_10F660(void)
{
    int s1 = 0;
    int v0 = func_10F5C8();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_10F3C8(1);
        D_001B6018[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_10F778(i);
            D_001B6014[0] = -1;
            D_001B6010[0] = 1;
        }
    }
    return s1;
}
