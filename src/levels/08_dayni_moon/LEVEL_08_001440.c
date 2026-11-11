/* LEVEL_08:0x001440 -- mirrors one field over its neighbour. */
typedef struct {
    char pad[0xF8];
    float f_F8;
    float f_FC;
} Obj;

extern Obj *D_237DC8;

void func_001440(void)
{
    D_237DC8->f_FC = D_237DC8->f_F8;
}
