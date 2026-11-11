extern char * D_001ABAF8;
extern char D_002D13E0[];

char *func_1186C8(char *p)
{
    p += 8;
    if (p >= D_001ABAF8)
        return D_002D13E0;
    return p;
}
