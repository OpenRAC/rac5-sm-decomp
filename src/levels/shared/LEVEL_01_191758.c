typedef struct {
    float f_00;
    float f_04;
    float f_08;
    char pad_0C[4];
} Elem;

typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Dst;

void func_191758(void *a0, Dst *a1)
{
    void *v1 = *(void **)((char *)a0 + 0x54);
    unsigned char flag = *(unsigned char *)((char *)v1 + 0x25);
    void *p = *(void **)v1;
    Elem *arr = *(Elem **)((char *)p + 0x4);
    int index = flag == 0;
    Elem *q = (Elem *)(index * 16 + (int)arr);
    a1->f_00 = q->f_00;
    a1->f_04 = q->f_04;
    a1->f_08 = q->f_08;
}
