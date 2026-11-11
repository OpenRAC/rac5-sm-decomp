/* LEVEL_17:0x11ECE8 -- resets the level's timer record held behind the global
   pointer D_001950B4. */
typedef struct {
    char pad[0x18];
    int i18;
    int i1c;
    int i20;
    int i24;
    float f28;
    float f2c;
    float f30;
    float f34;
    char pad2[8];
    int i40;
    int i44;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_001950B4;

void func_11ECE8(void)
{
    D_001950B4.p->f30 = 1.0f;
    D_001950B4.p->f34 = 1.0f;
    D_001950B4.p->f28 = 1.0f;
    D_001950B4.p->i24 = 0;
    D_001950B4.p->i40 = 0;
    D_001950B4.p->i18 = 0xFF;
    D_001950B4.p->i1c = 0xFF;
    D_001950B4.p->i44 = 1;
}
