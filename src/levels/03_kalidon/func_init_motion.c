struct level_motion {
    int a00;
    int a04;
    int a08;
    int pad0[7];
    int a28;
    int a2C;
    float a30;
    char a34;
    char a35;
    short pad1;
    int a38;
    int a3C;
};

void func_init_motion(char *base) {
    struct level_motion *m = (struct level_motion *)(base + 0x998);

    m->a30 = 1.0f;
    m->a08 = 2;
    m->a2C = 0;
    m->a34 = 0;
    m->a38 = 1;
    m->a3C = 1;
    m->a28 = 1;
    m->a00 = 0;
    m->a35 = 1;
    m->a04 = 0;
}
