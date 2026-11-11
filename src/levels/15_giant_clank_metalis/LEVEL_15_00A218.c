/* LEVEL_15:0x00A218 -- calls func_001C60 with three pointers and three
   floats taken from the record at 0x143EBC. */
typedef struct {
    char pad_00[0x30];
    char x_30[0x29C];
    char x_2CC[0x24];
    char x_2F0[0x1C];
    float f_30C;
    char pad_310[0x8];
    float f_318;
    char pad_31C[0x8];
    float f_324;
} Sub;

extern char D_00143EBC[];

extern void func_001C60(char *a0, char *a1, char *a2,
                         float a3, float a4, float a5);

void func_00A218(char *a0)
{
    Sub *p = *(Sub **)D_00143EBC;

    func_001C60(&p->x_30[0], &p->x_2CC[0], &p->x_2F0[0],
                p->f_30C, p->f_318, p->f_324);
}
