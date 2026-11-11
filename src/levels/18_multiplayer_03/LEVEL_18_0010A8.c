/* LEVEL_18:0x0010A8 -- copies the object's float to the next field. */
typedef struct {
    char pad[0xF8];
    float f_F8;
    float f_FC;
} Obj;

extern Obj *D_0019C14C;

void func_0010A8(void)
{
    D_0019C14C->f_FC = D_0019C14C->f_F8;
}
