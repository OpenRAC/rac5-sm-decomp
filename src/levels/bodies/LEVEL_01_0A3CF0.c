extern char D_0029F008[];
extern char *func_0A07B0(char *);

unsigned int func_0A3CF0(int index) {
    return ((unsigned short *)func_0A07B0(D_0029F008 + index * 100))[4];
}
