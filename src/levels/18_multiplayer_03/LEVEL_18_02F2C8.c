/* LEVEL_18:0x02F2C8 -- store the caller's extra arguments into the object
   and hand the sub-object at +0x10 to the shared routine. */
typedef struct {
    int i0;
    int i4;
    unsigned char pad[0x80 - 8];
    float f80;
} Rec;

extern void func_02F018(void *a, void *b, void *c);

void func_02F2C8(Rec *a0, void *a1, void *a2, void *a3, int a4, int a5,
                 float a6)
{
    a0->i4 = a4;
    a0->f80 = a6;
    a0->i0 = a5;
    func_02F018((char *)a0 + 0x10, a2, a3);
}

int func_02F300(int *a0, int *a1)
{
    return *a0 - *a1;
}
