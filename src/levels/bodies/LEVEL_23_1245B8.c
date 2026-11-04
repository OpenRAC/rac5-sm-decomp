int func_124578(int);
int func_125088(int);
int func_124670(void);

int func_1245B8(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_124578(0) != 0;
    while (i < 4) {
        int r = func_125088(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_124670() ^ 1);
}
