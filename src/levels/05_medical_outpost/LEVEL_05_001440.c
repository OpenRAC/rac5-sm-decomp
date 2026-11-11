/* LEVEL_05.REL:0x001440 -- copies one float slot of the current record into
   the next. */
typedef struct {
    char pad[0xF8];
    float f_F8;
    float f_FC;
} Obj;

extern Obj *D_001DE5C8;

void func_001440(void)
{
    D_001DE5C8->f_FC = D_001DE5C8->f_F8;
}
