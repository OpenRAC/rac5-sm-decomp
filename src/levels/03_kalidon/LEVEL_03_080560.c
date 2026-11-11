/* LEVEL_03:0x080560 -- runs the setup and then arms the record's level. */
typedef struct {
    char pad0[0xC];
    float f0C;
} Rec;

extern void func_080590(void *);

void func_080560(void *a0, Rec *a1)
{
    func_080590(a0);
    a1->f0C = 1.0f;
}
