extern char D_00247E58[];
extern char *func_08EF68(char *);

unsigned int func_092388(int index) {
    return ((unsigned short *)func_08EF68(D_00247E58 + index * 100))[5];
}
