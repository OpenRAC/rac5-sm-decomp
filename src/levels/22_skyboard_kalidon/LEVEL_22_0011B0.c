/* LEVEL_22:0x0011B0 -- mirrors one field over its neighbour. */
typedef struct {
    char pad[0xF8];
    float f_F8;
    float f_FC;
} Obj;

extern Obj *D_14E5C8;

void func_0011B0(void)
{
    D_14E5C8->f_FC = D_14E5C8->f_F8;
}
