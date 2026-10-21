/* LEVEL_24:0x0E45B8 -- asks the engine to update the record, then stores the
   caller's pointer in the record's 0x14 slot, the reciprocal of the float it
   points to in the 0x18 slot, and zero in the 0x1C slot. */
typedef struct {
    char pad[0x14];
    int p;
    float f;
    int q;
} Rec;

void func_0903D0(void *a, void *b, int c);

void func_0E45B8(Rec *a0, void *a1, void *a2)
{
    func_0903D0(a0, a1, 1);
    a0->p = (int)a2;
    a0->f = 1.0f / *(float *)a2;
    a0->q = 0;
}
