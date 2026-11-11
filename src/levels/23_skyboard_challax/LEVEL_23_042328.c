/* LEVEL_23.REL:0x042328 -- passes the record, its +0x200 sub-record and its
   +0x23C float to func_0422C8. */
typedef struct {
    unsigned char pad0[0x23C];
    float v_23C;
} Rec;

extern void func_0422C8(void *a0, void *a1, float value);

void func_042328(Rec *a0)
{
    func_0422C8(a0, (unsigned char *)a0 + 0x200, a0->v_23C);
}
