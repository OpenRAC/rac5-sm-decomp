extern char D_0010EC88[];
extern char *func_005C68(char *);

unsigned int func_008B28(int index) {
    return ((unsigned short *)func_005C68(D_0010EC88 + index * 100))[5];
}
