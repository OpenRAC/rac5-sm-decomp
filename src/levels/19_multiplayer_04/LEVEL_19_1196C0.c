extern char * D_001B9678;
extern char D_002E0260[];

char *func_1196C0(char *p)
{
    p += 8;
    if (p >= D_001B9678)
        return D_002E0260;
    return p;
}
