extern int D_0024FF44[];
extern int D_0024FF40[];
extern char D_0024FF48[];

int func_1450E0(void);
int func_144EE0(int);
void func_145290(int);

int func_145178(void)
{
    int s1 = 0;
    int v0 = func_1450E0();
    unsigned int i;

    if (v0 != 0) {
        s1 = func_144EE0(1);
        D_0024FF48[0] = (char)s1;
        if ((s1 & 0xFF) != 0) {
            for (i = 0; i < 6; i++)
                func_145290(i);
            D_0024FF44[0] = -1;
            D_0024FF40[0] = 1;
        }
    }
    return s1;
}
