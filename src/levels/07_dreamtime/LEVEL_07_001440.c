/* LEVEL_07.REL:0x001440 -- copies the reference reading onto the current one. */
typedef struct {
    char pad0[0xF8];
    float f_F8;
    float f_FC;
} Rec;

extern Rec *D_00203548;

void func_001440(void)
{
    D_00203548->f_FC = D_00203548->f_F8;
}
