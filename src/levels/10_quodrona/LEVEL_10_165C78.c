extern char D_00229390[];
extern char D_002293C0[];
extern char D_002293E0[];

void func_165C78(char *record)
{
    *(char **)(record + 0x3c) = D_00229390;
    *(char **)(record + 0x58) = D_002293C0;
    *(char **)(record + 0x74) = D_002293E0;
}
