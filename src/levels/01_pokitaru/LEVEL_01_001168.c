struct Vec {
    float x;
    float y;
    float z;
};

extern char *D_001EF248;

void func_001168(struct Vec *v)
{
    struct Vec *p = (struct Vec *)(D_001EF248 + 0x30);

    p->x += v->x;
    p->y += v->y;
    p->z += v->z;
}
