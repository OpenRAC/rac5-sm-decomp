/* LEVEL_04.REL:0x001248 -- copies one float slot of the
   current record into the next. */
typedef struct {
    char pad[0xF8];
    float f_F8;
    float f_FC;
} Obj;

extern Obj *D_002083C8;

void func_001248(void)
{
    D_002083C8->f_FC = D_002083C8->f_F8;
}
