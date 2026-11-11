/* LEVEL_03.REL:032AC0 -- fills the head of the caller's record, then hands
   the record +0x10 and the two pointers to the level's builder.  The small
   comparator the retail keeps right after it belongs to the same body. */
typedef struct {
    int w_00;
    int w_04;
    char pad[0x80 - 0x08];
    float f_80;
} Head;

extern void func_032810(void *a0, void *a1, void *a2);

void func_032AC0(Head *a0, void *unused, void *a2, void *a3, int a4, int a5,
                 float f)
{
    a0->w_04 = a4;
    a0->f_80 = f;
    a0->w_00 = a5;
    func_032810((char *)a0 + 0x10, a2, a3);
}

int func_032AF8(int *a0, int *a1)
{
    return *a0 - *a1;
}
