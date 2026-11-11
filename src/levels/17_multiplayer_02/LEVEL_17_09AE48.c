struct Shorts {
    short f00;
    short p02;
    short f04;
    short p06;
    short f08;
    short p0A;
    short f0C;
};

extern void func_09AD30(void *, short, short, short, short, int);

void func_09AE48(void *first, struct Shorts *object, int extra)
{
    func_09AD30(first, object->f00, object->f04, object->f08, object->f0C,
                extra);
}
