extern char D_00256ED8[];
extern char *func_08EA88(char *);

unsigned int func_091E70(int index) {
    return ((unsigned short *)func_08EA88(D_00256ED8 + index * 100))[4];
}
