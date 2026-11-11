typedef struct {
    float x;
    float y;
    float z;
} Vec;

void func_165580(char *a0, char *a1)
{
    Vec *d = (Vec *)(*(char **)(a0 + 0x58) + 0x18);
    Vec *p = (Vec *)(a0 + 0x30);
    Vec *q = (Vec *)(a1 + 0x30);

    *(void **)(*(char **)(a0 + 0x54)) = a1;
    d->x = p->x - q->x;
    d->y = p->y - q->y;
    d->z = p->z - q->z;
}
