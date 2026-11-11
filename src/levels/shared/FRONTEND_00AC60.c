struct Pad {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
};

void func_00AC60(struct Pad *p, int v)
{
    v = v & 0xFF;
    p->f00 = v;
    p->f08 = v;
    p->f10 = 3;
}
