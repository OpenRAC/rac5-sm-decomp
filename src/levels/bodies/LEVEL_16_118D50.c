extern char * D_001B8500;
extern char D_002E00E0[];

char *func_118D50(char *p)
{
    p += 8;
    if (p >= D_001B8500)
        return D_002E00E0;
    return p;
}
