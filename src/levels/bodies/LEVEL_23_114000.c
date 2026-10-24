typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} V;

void *func_1BE780(float v);
void func_1BE490(void *p);
void *func_000000(void *p);

void func_114000(V *p)
{
    float d = p->f0C * p->f0C + p->f00 * p->f00 + p->f04 * p->f04
        + p->f08 * p->f08;

    func_1BE490(func_000000(func_1BE780(d)));
}
