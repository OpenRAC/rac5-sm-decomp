struct Vec {
    int f00;
    char f04;
    char f05;
    char pad06[2];
    int f08;
    int f0C;
    int f10;
    char f14;
    char f15;
};

void func_00A950(struct Vec *v)
{
    v->f00 = 0x80;
    v->f04 = 0x20;
    v->f05 = 0x20;
    v->f08 = 0;
    v->f0C = 0;
    v->f10 = 0;
    v->f14 = 0;
    v->f15 = 1;
}
