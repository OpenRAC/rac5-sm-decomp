/* LEVEL_04.REL:0x07AE38 -- starts the slot at +0xC with the record's weight. */
typedef struct { char pad[0x08]; int f_08; } Obj;
typedef struct { char pad[0x14]; int f_14; void *f_18; } Head;
extern void func_07AD40(void *a0, void *a1, float f12);
void func_07AE38(Obj *a0)
{
    Head *p = (Head *)((char *)a0 + 0x24);
    void *q = p->f_18;

    func_07AD40((char *)a0 + 0x0C, (char *)a0 + 0x28, *(float *)((char *)q + 4));
    p->f_14 = 0;
    a0->f_08 = *(int *)p->f_18;
}
