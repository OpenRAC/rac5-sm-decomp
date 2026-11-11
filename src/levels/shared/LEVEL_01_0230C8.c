struct Sub {
    int f00;
    int f04;
    int f08;
    int pad0C[7];
    int f28;
    int f2C;
    float f30;
    char f34;
    char f35;
    short pad36;
    int f38;
    int f3C;
};

void func_0230C8(char *base)
{
    struct Sub *p = (struct Sub *)(base + 0x998);

    p->f30 = 1.0f;
    p->f08 = 2;
    p->f2C = 0;
    p->f34 = 0;
    p->f38 = 1;
    p->f3C = 1;
    p->f28 = 1;
    p->f00 = 0;
    p->f35 = 1;
    p->f04 = 0;
}
