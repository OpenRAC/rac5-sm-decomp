extern char * D_001B9980;
extern char D_002E0460[];

char *func_117D40(char *p)
{
    p += 8;
    if (p >= D_001B9980)
        return D_002E0460;
    return p;
}
