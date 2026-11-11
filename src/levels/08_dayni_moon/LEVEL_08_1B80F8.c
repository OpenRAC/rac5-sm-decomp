/* LEVEL_08.REL:0x1b80f8 -- RAC5 vague 22 (L09), f70 = ptr->f10 * 30.0f. */
typedef struct {
    char pad[0x10];
    float f10;
} Other;

typedef struct {
    char pad[0x54];
    Other *ptr;
    char pad2[0x70 - 0x58];
    float f70;
} Obj;

void func_1B80F8(Obj *p)
{
    p->f70 = p->ptr->f10 * 30.0f;
}
