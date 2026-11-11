/* LEVEL_01:001440 -- copies the float at 0xF8 into 0xFC of the object held
   by D_001EF248. */
typedef struct {
    char pad_F8[0xF8];
    float f_F8;
    float f_FC;
} Obj;

extern Obj *D_001EF248;

void func_001440(void)
{
    D_001EF248->f_FC = D_001EF248->f_F8;
}
