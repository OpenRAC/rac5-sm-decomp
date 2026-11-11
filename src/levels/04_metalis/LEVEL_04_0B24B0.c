struct Shorts {
    short f00;
    short p02;
    short f04;
    short p06;
    short f08;
    short p0A;
    short f0C;
};

extern void func_0B2398(void *, short, short, short, short, int);

void func_0B24B0(void *first, struct Shorts *object, int extra)
{
    func_0B2398(first, object->f00, object->f04, object->f08, object->f0C,
                extra);
}
