struct Vec {
    float x;
    float y;
    float z;
};

extern char *D_001EF254;

void func_003340(struct Vec *v)
{
    struct Vec *p = (struct Vec *)(D_001EF254 + 0x1A4);

    p->x += v->x;
    p->y += v->y;
    p->z += v->z;
}
