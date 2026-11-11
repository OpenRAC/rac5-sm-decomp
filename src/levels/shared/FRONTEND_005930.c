/* FRONTEND:0x005930 -- checks the three magic words of the identifier. */
struct Magic {
    unsigned int id0;
    unsigned int id1;
    unsigned int id2;
};

int func_005930(struct Magic *p, int mode)
{
    if (p == 0)
        return 0;
    if ((unsigned int)(mode - 1) < 0x1F)
        return 0;
    if (p->id0 != 0x2E47494D)
        return 0;
    if (p->id1 != 0x312E3030)
        return 0;
    return p->id2 == 0x00505350;
}
